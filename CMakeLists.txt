cmake_minimum_required(VERSION 3.5)
project(CinemaPooC)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    Classes/Coordenada/CoordenadaPoltrona.cpp
    Classes/Coordenada/CoordenadaPoltrona.h
        Classes/Data/DatetimeControl.cpp
        Classes/Data/DatetimeControl.h
    Classes/Filme/Filme.cpp
    Classes/Filme/Filme.h
    Classes/Funcionario/Funcionario.cpp
    Classes/Funcionario/Funcionario.h
    Classes/Ingresso/Ingresso.cpp
    Classes/Ingresso/Ingresso.h
    Classes/Poltrona/Poltrona.cpp
    Classes/Poltrona/Poltrona.h
        Classes/SessaoPoltrona/Sessao_Poltronas.cpp
        Classes/SessaoPoltrona/Sessao_Poltronas.h
    Classes/Sala/Sala.cpp
    Classes/Sala/Sala.h
    Classes/Sessao/Sessao.cpp
    Classes/Sessao/Sessao.h
    Classes/bancoCinema.cpp
    Classes/bancoCinema.h
    Classes/ControllerCinema.h
    Classes/main.cpp Classes/Coordenada/CoordenadaPoltronaDAO.h Classes/Coordenada/CoordenadaPoltronaDAO.cpp Classes/Coordenada/CoordenadaPoltronaDAO.h Classes/Filme/FilmeDAO.cpp Classes/Filme/FilmeDAO.h Classes/Funcionario/FuncionarioDAO.cpp Classes/Funcionario/FuncionarioDAO.h Classes/Ingresso/IngressoDAO.cpp Classes/Ingresso/IngressoDAO.h Classes/Poltrona/PoltronaDAO.cpp Classes/Poltrona/PoltronaDAO.h Classes/Sessao/SessaoDAO.cpp Classes/Sessao/SessaoDAO.h Classes/SessaoPoltrona/SessaoPoltronaDAO.cpp Classes/SessaoPoltrona/SessaoPoltronaDAO.h Classes/Sala/SalaDAO.cpp Classes/Sala/SalaDAO.h Classes/Sessao/SessaoDAO.h)

add_executable(CinemaPooC ${SOURCE_FILES})