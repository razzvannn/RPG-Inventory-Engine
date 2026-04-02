cmake_minimum_required(VERSION 3.15)

project(proiect1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if(DEFINED WARNINGS_AS_ERRORS)
elseif(DEFINED ENV{WARNINGS_AS_ERRORS})
    set(WARNINGS_AS_ERRORS $ENV{WARNINGS_AS_ERRORS})
else()
    set(WARNINGS_AS_ERRORS ON)
endif()

add_executable(${PROJECT_NAME} 
    main.cpp
    Item.cpp
    Item.h
    Echipament.h
    ConsumabilBase.h
    Itemspecial.cpp
    Itemspecial.h
    Arma.cpp
    Arma.h
    Armura.cpp
    Armura.h
    Consumabil.cpp
    Consumabil.h
    Magie.cpp
    Magie.h
    Exceptii.h
    Inventar.h
    Player.cpp
    Player.h
    Meniu.cpp
    Meniu.h
    MagicItem.h
    Topor.h
    Scut.h
    Potiune.h
    Hrana.h
    Exceptions.h
    Inventar.cpp
)

if(GITHUB_ACTIONS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE GITHUB_ACTIONS)
endif()

if(MSVC)
    target_compile_options(${PROJECT_NAME} PRIVATE /W4 /permissive- /wd4244 /wd4267 /wd4996 /external:anglebrackets /external:W0)
    if(WARNINGS_AS_ERRORS)
        target_compile_options(${PROJECT_NAME} PRIVATE /WX)
    endif()
else()
    target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -pedantic)
    if(WARNINGS_AS_ERRORS)
        target_compile_options(${PROJECT_NAME} PRIVATE -Werror)
    endif()
endif()

set(is_debug "$<CONFIG:Debug>")
set(is_rel_with_deb "$<CONFIG:RelWithDebInfo>")
set(debug_mode "$<OR:${is_debug},${is_rel_with_deb}>")

if(MSVC)
    target_compile_options(${PROJECT_NAME} PRIVATE "$<${debug_mode}:/fsanitize=address>")
elseif(APPLE)
    target_compile_options(${PROJECT_NAME} PRIVATE "$<${debug_mode}:-fsanitize=address,undefined>")
    target_link_options(${PROJECT_NAME} PRIVATE "$<${debug_mode}:-fsanitize=address,undefined>")
elseif(UNIX)
    if("${CMAKE_CXX_COMPILER_ID}" MATCHES "GNU")
    elseif("${CMAKE_CXX_COMPILER_ID}" MATCHES "Clang")
        if("${CMAKE_CXX_COMPILER_VERSION}" VERSION_GREATER_EQUAL "14.0")
            target_compile_options(${PROJECT_NAME} PRIVATE "$<${debug_mode}:-fsanitize=address,undefined>")
            target_link_options(${PROJECT_NAME} PRIVATE "$<${debug_mode}:-fsanitize=address,undefined>")
        endif()
    endif()
endif()

install(TARGETS ${PROJECT_NAME} DESTINATION bin)
