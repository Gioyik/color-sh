#include <stdarg.h>
#include <stdio.h>
#include "color-sh.h"

#if defined(_WIN32)

    void set_color(int color) {
        if(!out)
            out = GetStdHandle(STD_OUTPUT_HANDLE);

        SetConsoleTextAttribute(out, FOREGROUND_INTENSITY | color);
    }

#elif defined(__linux__) || (defined(__APPLE__) && defined(__MACH__)) || defined(__unix__)
    void set_color(char *color) {
        printf(color);
    }
#else
    #error Platform not supported by color-sh lib
#endif /* _WIN32 */

void w_red(char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    set_color(RED);
    vprintf(fmt, ap);
    va_end(ap);
    set_color(REWIND);
}

void w_bred(char *fmt, ...) {
    #if defined(__linux__) || (defined(__APPLE__) && defined(__MACH__)) || defined(__unix__)
        va_list ap;
        va_start(ap, fmt);
        set_color(RED_BOLD);
        vprintf(fmt, ap);
        va_end(ap);
        set_color(REWIND);
    #elif defined(_WIN32)
        va_list ap;
        va_start(ap, fmt);
        set_color(RED);
        vprintf(fmt, ap);
        va_end(ap);
        set_color(REWIND);
    #else
    #error Platform not supported by color-sh lib
    #endif
}

void w_green(char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    set_color(GREEN);
    vprintf(fmt, ap);
    va_end(ap);
    set_color(REWIND);
}

void w_bgreen(char *fmt, ...) {
    #if defined(__linux__) || (defined(__APPLE__) && defined(__MACH__)) || defined(__unix__)
        va_list ap;
        va_start(ap, fmt);
        set_color(GREEN_BOLD);
        vprintf(fmt, ap);
        va_end(ap);
        set_color(REWIND);
    #elif defined(_WIN32)
        va_list ap;
        va_start(ap, fmt);
        set_color(GREEN);
        vprintf(fmt, ap);
        va_end(ap);
        set_color(REWIND);
    #else
    #error Platform not supported by color-sh lib
    #endif
}

void w_white(char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    set_color(WHITE);
    vprintf(fmt, ap);
    va_end(ap);
    set_color(REWIND);
}

void w_bwhite(char *fmt, ...) {
    #if defined(__linux__) || (defined(__APPLE__) && defined(__MACH__)) || defined(__unix__)
        va_list ap;
        va_start(ap, fmt);
        set_color(WHITE_BOLD);
        vprintf(fmt, ap);
        va_end(ap);
        set_color(REWIND);
    #elif defined(_WIN32)
        va_list ap;
        va_start(ap, fmt);
        set_color(WHITE);
        vprintf(fmt, ap);
        va_end(ap);
        set_color(REWIND);
    #else
        #error Platform not supported by color-sh lib
    #endif
}

void w_blue(char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    set_color(BLUE);
    vprintf(fmt, ap);
    va_end(ap);
    set_color(REWIND);
}

void w_bblue(char *fmt, ...) {
    #if defined(__linux__) || (defined(__APPLE__) && defined(__MACH__)) || defined(__unix__)
        va_list ap;
        va_start(ap, fmt);
        set_color(BLUE_BOLD);
        vprintf(fmt, ap);
        va_end(ap);
        set_color(REWIND);
    #elif defined(_WIN32)
        va_list ap;
        va_start(ap, fmt);
        set_color(BLUE);
        vprintf(fmt, ap);
        va_end(ap);
        set_color(REWIND);
    #else
        #error Platform not supported by color-sh lib
    #endif
}

void w_purple(char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    set_color(PURPLE);
    vprintf(fmt, ap);
    va_end(ap);
    set_color(REWIND);
}

void w_bpurple(char *fmt, ...)
{
    #if defined(__linux__) || (defined(__APPLE__) && defined(__MACH__)) || defined(__unix__)
        va_list ap;
        va_start(ap, fmt);
        set_color(PURPLE_BOLD);
        vprintf(fmt, ap);
        va_end(ap);
        set_color(REWIND);
    #elif defined(_WIN32)
        va_list ap;
        va_start(ap, fmt);
        set_color(PURPLE);
        vprintf(fmt, ap);
        va_end(ap);
        set_color(REWIND);
    #else
        #error Platform not supported by color-sh lib
    #endif
}

void w_yellow(char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    set_color(YELLOW);
    vprintf(fmt, ap);
    va_end(ap);
    set_color(REWIND);
}

void w_byellow(char *fmt, ...) {
    #if defined(__linux__) || (defined(__APPLE__) && defined(__MACH__)) || defined(__unix__)
        va_list ap;
        va_start(ap, fmt);
        set_color(YELLOW_BOLD);
        vprintf(fmt, ap);
        va_end(ap);
        set_color(REWIND);
    #elif defined(_WIN32)
        va_list ap;
        va_start(ap, fmt);
        set_color(YELLOW);
        vprintf(fmt, ap);
        va_end(ap);
        set_color(REWIND);
    #else
        #error Platform not supported by color-sh lib
    #endif
}

void w_cyan(char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    set_color(CYAN);
    vprintf(fmt, ap);
    va_end(ap);
    set_color(REWIND);
}

void w_bcyan(char *fmt, ...) {
    #if defined(__linux__) || (defined(__APPLE__) && defined(__MACH__)) || defined(__unix__)
        va_list ap;
        va_start(ap, fmt);
        set_color(CYAN_BOLD);
        vprintf(fmt, ap);
        va_end(ap);
        set_color(REWIND);
    #elif defined(_WIN32)
        va_list ap;
        va_start(ap, fmt);
        set_color(CYAN);
        vprintf(fmt, ap);
        va_end(ap);
        set_color(REWIND);
    #else
        #error Platform not supported by color-sh lib
    #endif
}

void w_rewind(void) {
    set_color(REWIND);
}