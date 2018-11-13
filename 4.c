#include <stdio.h>

int main() {
    char xml[3] = {'X','M','L'};
    printf("The reverse of %c%c%c is %c%c%c\n",
            xml[0], xml[1], xml[2],
            xml[2], xml[1], xml[0]);

    return 0;
}
