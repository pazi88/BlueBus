/*
 * IO Mappings for the PIC24
 */
#ifndef IO_MAPPINGS_H
#define IO_MAPPINGS_H
#define IBUS_UART_MODULE 1
#define IBUS_UART_RX_PRIORITY 7
#define IBUS_UART_TX_PRIORITY 5
#define IBUS_UART_RX_PIN 38
#define IBUS_UART_TX_PIN 14
#define IBUS_UART_RX_STATUS PORTCbits.RC1

#define BC127_UART_MODULE 2
#define BC127_UART_RX_PRIORITY 6
#define BC127_UART_TX_PRIORITY 5
#define BC127_UART_RX_PIN 32
#define BC127_UART_TX_PIN 31

#define SYSTEM_UART_MODULE 3
#define SYSTEM_UART_RX_PRIORITY 3
#define SYSTEM_UART_TX_PRIORITY 4
#define SYSTEM_UART_RX_PIN 10
#define SYSTEM_UART_TX_PIN 17
#endif /* IO_MAPPINGS_H */
