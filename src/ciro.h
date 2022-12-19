/*
*
*   Made by Noah Van Miert
*   19/12/2022
*
*   C-iro a handy to use library for printing
*   colored text in C.
*
*/


#ifndef __CIRO_H_
#define __CIRO_H_


#include <stdio.h>
#include <stdarg.h>
#include <assert.h>


enum CiroColors {
    CIRO_NONE,
    CIRO_BLACK = 30,
    CIRO_RED,
    CIRO_GREEN,
    CIRO_YELLOW,
    CIRO_BLUE,
    CIRO_PURPLE,
    CIRO_CYAN,
    CIRO_WHITE
};


enum CiroStyles {
    CIRO_NORMAL,
    CIRO_BOLD,
    CIRO_DARK,
    CIRO_ITALIC,
    CIRO_UNDERLINE,
};


void ciro_printf(int foreground, int background, int style, const char *fmt, ...)
{
    assert(style < 5);

    va_list args;

    va_start(args, fmt);

    if (background == CIRO_NONE)
        printf("\033[%d;%dm", style, foreground);
    
    else
        printf("\033[%d;%d;%dm", style, foreground, background + 10);

    vprintf(fmt, args);
    printf("\033[0m");

    va_end(args);
}


void ciro_test(int style)
{
    assert(style < 5);

    for (int i = CIRO_BLACK; i < CIRO_WHITE + 1; i++)
        ciro_printf(i, CIRO_NONE, style, "%d | %d : Hello, World\n", i, style);
}

#endif
