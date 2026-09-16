cmake_minimum_required(VERSION 4.3)
project(My_Space_Playground)

set(CMAKE_CXX_STANDARD 20)

set(RAYLIB_INCLUDE_DIRS "${CMAKE_SOURCE_DIR}/include")
set(RAYLIB_LIBRARIES "${CMAKE_SOURCE_DIR}/lib/libraylib.a")
set(CMAKE_EXE_LINKER_FLAGS "-static -static-libgcc -static-libstdc++")

include_directories(${RAYLIB_INCLUDE_DIRS})


link_directories(${CMAKE_SOURCE_DIR}/lib)


find_package(OpenGL REQUIRED)


set(ADDITIONAL_LIBS
        ${OPENGL_LIBRARIES}
        opengl32
        user32
        gdi32
        winmm
)

add_executable(My_Space_Playground
        main.cpp
)


target_link_libraries(My_Space_Playground ${RAYLIB_LIBRARIES} ${ADDITIONAL_LIBS})
target_link_options(My_Space_Playground PRIVATE -static -static-libgcc -static-libstdc++)
