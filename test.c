#include <stdio.h>
#include "fs.h"

void main()
{
    create_fs();
    sync_fs();
    print_fs();
    printf("done\n");
}