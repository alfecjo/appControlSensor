#include <iostream>
#include "app_logic.h"
#include "gpio.h" // Inclui as funções de GPIO

void execute_application_logic()
{
    if (gpio_read_button())
    {
        gpio_set_led(true); // Se o botão for pressionado, aciona o LED
        std::cout << "Botão pressionado! Acionando LED..." << std::endl;
    }
    else
    {
        gpio_set_led(false); // Caso contrário, desliga o LED
        std::cout << "Botão não pressionado!" << std::endl;
    }
}