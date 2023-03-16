#include <stdio.h>

int main(int arc, char** argv) {
    int input = 0;
    int nCon = 0;
    printf("Hello World\nEnter a number:");
    nCon = scanf("%d", &input);
    if (!nCon) {
        printf("Failled to read string");
        return -1;
    }
    printf("%d\n", input);
}
