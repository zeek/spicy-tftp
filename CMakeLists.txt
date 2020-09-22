
cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

project(ZeekPluginTFTP)

include(ZeekPlugin)

list(APPEND CMAKE_MODULE_PATH "${SPICY_CMAKE_PATH}")
find_package(ZeekSpicy REQUIRED)

zeek_plugin_begin(Zeek TFTP)
zeek_plugin_cc(src/Plugin.cc)
zeek_plugin_spicy(TFTP src/tftp.spicy src/tftp.evt)
zeek_plugin_spicy(Zeek_TFTP src/zeek_tftp.spicy)
zeek_plugin_spicy_link()
zeek_plugin_dist_files(README CHANGES COPYING VERSION)
zeek_plugin_end()

file(STRINGS "${CMAKE_CURRENT_SOURCE_DIR}/VERSION" VERSION LIMIT_COUNT 1)

if ("${PROJECT_SOURCE_DIR}" STREQUAL "${CMAKE_SOURCE_DIR}")
    # Allows building rpm/deb packages via "make package" in build dir.
    include(ConfigurePackaging)
    ConfigurePackaging(${VERSION})
endif ()
