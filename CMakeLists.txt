cmake_minimum_required(VERSION 3.29)
project(Nociones-Clave-Gabriel-Kaakedjian)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

include(FetchContent)
FetchContent_Declare(
        fmt
        GIT_REPOSITORY https://github.com/fmtlib/fmt.git
        GIT_TAG 7.1.3
)
FetchContent_MakeAvailable(fmt)

add_library(matematicas SHARED
        "Parte2/matematicas.cpp"
)

add_executable(Ejercicios_Parte1
        "Parte1/main.cpp"
        "Parte1/Persona.cpp"
        "Parte1/Estudiante.cpp"
)

target_link_libraries(Ejercicios_Parte1 PRIVATE fmt::fmt matematicas)

add_executable(Ejercicios_Parte2
        "Parte2/funciones.cpp"
        "Parte2/funciones.h"
        "Parte2/main.cpp"
        "Parte2/nuevo.cpp"
)

target_link_libraries(Ejercicios_Parte2 PRIVATE fmt::fmt)