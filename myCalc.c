#include <stdio.h>
#include "add.h"
#include "sub.h"

int main(void)
{

        printf("3 + 5 = %d\n", add(3, 5));
        printf("3 - 5 = %d\n", sub(3, 5));

        return 0;
}