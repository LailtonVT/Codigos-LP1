cmake_minimum_required(VERSION 3.0.0)
project(Agenda-telefone-endereco VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(Agenda-telefone-endereco 
    main.cpp
    Endereco.cpp 
    Pessoa.cpp 
)

include_directories(C:/Users/LailtonVilla/Desktop/Codigos-LP1/LPI C++ Cpp 02/Agenda-telefonica/include/Pessoa.h
C:/Users/LailtonVilla/Desktop/Codigos-LP1/LPI C++ Cpp 02/Agenda-telefonica/include/Endereco.h
)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
