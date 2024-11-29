#ifndef SIGNAL_HANDLER_H
#define SIGNAL_HANDLER_H

// Declaração do maniupulador de sinais
void setupSignalhandler(void);
void signalhandler(int signum);

// Configura manipulador de sinais (identifica o precionamento de Ctrl + C)
extern volatile bool keepRunning;

#endif