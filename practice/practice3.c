#include <stdio.h>
#include <assert.h>
#include "includeClzh.h"

int main(int argc, const char *argv[])
{
    // printf_s("ding");
    int x = 2000000000;
    int y = 300000;
    CERT_ADDINT(x, y);

    int z = x + y;
    printf("%d\n", z);
    printf("C语言版本 : %d\n", __STDC_VERSION__);
    return 0;
}