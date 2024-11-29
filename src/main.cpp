#include <iostream>
#include <thread>
#include <chrono>
#include "gpio.h"      // Cabeçalho do driver GPIO
#include "app_logic.h" // Cabeçalho da lógica da aplicação
#include "signal_handler.h"

// Flag Global para controle de looping
volatile bool keepRunning;

int main()
{
    // Definindo domínio
    using namespace std::chrono;

    // Inicializa o GPIO
    gpio_init();

    // Configura manipulador de sinais
    setupSignalhandler();

    // Lógica da aplicação (ligar um LED quando um botão é pressionado)
    while (keepRunning)
    {
        execute_application_logic();
        std::this_thread::sleep_for(milliseconds(100));
    }

    // Libera recursos do GPIO antes de finalizar
    gpio_clean();
    return 0;
}