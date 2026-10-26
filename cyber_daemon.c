#include <stdio.h>
#include <unistd.h>

int main(void) {
    while (1) {
        printf("Le daemon tourne\n");
        fflush(stdout);
        sleep(5);
    }
    return 0;
}