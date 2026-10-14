cmake_minimum_required(VERSION 3.19)
project(NumberTranslater LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)

qt_standard_project_setup()

qt_add_executable(NumberTranslater
    WIN32 MACOSX_BUNDLE
    main.cpp
    numtrans.cpp
    numtrans.h
)

target_link_libraries(NumberTranslater
    PRIVATE
        Qt::Core
        Qt::Widgets
)

install(TARGETS NumberTranslater
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET NumberTranslater
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
