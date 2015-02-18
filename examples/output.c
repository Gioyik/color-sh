#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "../src/color-sh.h"

int main(int argc, char *argv[]) {

    void (*pt[])(char *, ...) = {w_red};
    pt[0]("This is red\n");
    return 0;
}
