#include "stdint.h"
#include "stdio.h"

void _cdecl cstart_(uint16_t bootDrive)
{
    const char far* far_str = "far string";

    puts("[SnowOS - logs] C workspace INIT!\r\n");
    printf("[SnowOS - logs] Hello User\n");
    for (;;);
}


