#include <stdio.h>
#include "lib/core.h"

int main() {
    data_recover();
    printf("it is in: %d\n",existence_checker("","00002",-1));
    return 0;
}
