/**
 * Copyright (c) 2022-2023，HelloAlpha
 * 
 * Change Logs:
 * Date           Author       Notes
 */
#ifndef __APP_UART_H__
#define __APP_UART_H__

#include "uart.h"

/* maximum receiver length */
#define UART_MSG_MAX_LEN    100

struct uart_msg 
{
    uint8_t ReceivedBuffer[UART_MSG_MAX_LEN];
    uint8_t *ReceivedBufferPtr;
    uint32_t ReceivedByteNum;
    char ReceivedFlag;
    uint8_t SendBuffer[UART_MSG_MAX_LEN];
    uint8_t *SendBufferPtr;
    uint32_t SendByteNum;
};

typedef struct uart_msg uart_msg_t;

XUartPs Uart0_Ps;

uart_msg_t g_uart0_msg;

int app_uart_init(void);
int uart_msg_print(void);
int uart_lookback_test(void);
int uart_report(uint8_t dev, uint8_t err);

#endif
