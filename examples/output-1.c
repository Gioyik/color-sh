#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "../src/color-sh.h"

#define LEN(a) sizeof(a)/sizeof(*a)

int main(int argc, char *argv[]) {
    void (*pt[])(char *, ...) = {w_red, w_bred, w_green, w_bgreen, w_white, \
        w_bwhite, w_blue, w_bblue, w_purple, w_bpurple, w_yellow, w_byellow, w_cyan, \
        w_bcyan};
    char *args[] = {"red", "bold red", "green", "bold green", "white", "bold white", \
        "blue", "bold blue", "purple", "bold purple", "yellow", "bold yellow", "cyan", \
        "bold cyan"};
    uint32_t i = 0;

    for(i = 0; i<LEN(pt); i++)
        pt[i]("This is %s\n", args[i]);

    return 0;
}
