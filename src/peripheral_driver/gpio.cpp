#include <wiringPi.h>  // Biblioteca do Raspberry Pi para controle de GPIO
#include "gpio.h"
#include "gpio_pins.h"

// Função para inicializar o GPIO
void gpio_init() {
    wiringPiSetup();  // Inicializa a biblioteca WiringPi
    pinMode(BUTTON_PIN, INPUT);  // Configura o pino 0 como entrada (botão)
    pinMode(LED_PIN, OUTPUT); // Configura o pino 1 como saída (LED)
}

// Função para ler o estado do botão
bool gpio_read_button() {
    return digitalRead(0) == HIGH;  // Retorna se o botão está pressionado
}

// Função para acionar o LED
void gpio_set_led(bool state) {
    digitalWrite(1, state ? HIGH : LOW);  // Aciona o LED de acordo com o estado
}

// Liberaq recursos do GPIO antes de finalizar
void gpio_clean(void){
    pinMode(1,INPUT);
}
