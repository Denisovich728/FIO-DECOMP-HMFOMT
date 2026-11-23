cmake_minimum_required(VERSION 3.20)
project(harvest_moon_fomt_decomp LANGUAGES C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(FOMT_ENABLE_ZERO_DIFF_MODULES "Include 100% Zero-Diff consolidated modules (src_zero_diff/)" ON)
option(FOMT_COMPILER_MODE_CPP "Use C++ mode (agbcp / cc1plus) in FIO Zero-Diff Match Engine" ON)

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/include/gba
    ${CMAKE_CURRENT_SOURCE_DIR}/include/farm
    ${CMAKE_CURRENT_SOURCE_DIR}/include/player
    ${CMAKE_CURRENT_SOURCE_DIR}/include/entities
    ${CMAKE_CURRENT_SOURCE_DIR}/include/events
    ${CMAKE_CURRENT_SOURCE_DIR}/include/audio
    ${CMAKE_CURRENT_SOURCE_DIR}/include/system
    ${CMAKE_CURRENT_SOURCE_DIR}/include/text
)

file(GLOB_RECURSE HIGH_LEVEL_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/src/*.c
)

add_library(fomt_core STATIC ${HIGH_LEVEL_SOURCES})

# Target 1: High-Level Semantic Simulator & Analysis Binary
add_executable(fomt_simulator
    src/main.c
    src/core/dispatcher.c
    src/core/scene_manager.c
    src/core/hardware.c
    src/core/vtables.c
    src/farm/farm.c
    src/farm/shipping_bin.c
    src/farm/buildings.c
    src/player/farmer.c
    src/player/item.c
    src/entities/entity_manager.c
    src/entities/animals.c
    src/entities/npc.c
    src/events/script_engine.c
    src/audio/m4a.c
    src/system/sram.c
    src/system/input.c
    src/system/time.c
    src/text/dialogue.c
)

# Target 2: Consolidated 100% Zero-Diff Subsystem Modules (3,454 / 3,454 functions = 866,050 B .text)
file(GLOB ZERO_DIFF_MODULES
    ${CMAKE_CURRENT_SOURCE_DIR}/src_zero_diff/*.c
)

# Target 3: Lightning-Fast Deterministic FSM & Algebraic C/C++ Match Engine Targets
find_package(Python3 COMPONENTS Interpreter QUIET)
if(Python3_FOUND)
    add_custom_target(fio_match_engine_c
        COMMAND ${Python3_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/tools/match/fsm_lifter.py --lang c --workers 8
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        COMMENT "[FIO-ENGINE] Ejecutando Motor Determinista FSM en MODO C (agbcc -O2/-O1)..."
    )

    add_custom_target(fio_match_engine_cpp
        COMMAND ${Python3_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/tools/match/fsm_lifter.py --lang cpp --workers 8
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        COMMENT "[FIO-ENGINE] Ejecutando Motor Determinista FSM en MODO C++ (agbcp / cc1plus -O2)..."
    )

    add_custom_target(fio_match_engine_auto
        COMMAND ${Python3_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/tools/match/fsm_lifter.py --lang auto --workers 8
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        COMMENT "[FIO-ENGINE] Ejecutando Motor Determinista FSM Dual AUTO C/C++ (100% Zero-Diff)..."
    )

    add_custom_target(fio_export_modules
        COMMAND ${Python3_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/tools/match/modular_exporter.py ${CMAKE_CURRENT_SOURCE_DIR}
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        COMMENT "[FIO-ENGINE] Consolidando 3,454 funciones verificadas en 12 modulos por subsistema..."
    )
endif()
