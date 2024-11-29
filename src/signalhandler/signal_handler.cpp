#include <iostream>
#include <csignal>
#include "signal_handler.h"

// Inicialização da Flag Global
volatile bool keepRunning = true;

// Função que configura manipulador de Ctrl + C
void setupSignalhandler()
{
    std::signal(SIGINT, signalhandler);
}

// Implementação do manipulardor signal
void signalhandler(int signum){
    std::cout<<"\nControle ("<<signum<<") recebido. Finalizando..."<<std::endl;
    keepRunning = false;
}