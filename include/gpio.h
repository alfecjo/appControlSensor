#ifndef GPIO_H
#define GPIO_H

// Função para inicializar o GPIO
void gpio_init();

// Função para ler o estado de um botão
bool gpio_read_button();

// Função para acionar o LED
void gpio_set_led(bool state);

// Libera recursos do GPIO antes de finalizar
void gpio_clean(void);

#endif // GPIO_H
