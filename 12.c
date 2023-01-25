#include <stdio.h>
                                                
int main() {
    int P = 60;
    int Q = 70;
    int R = 3;
	    int i;

    printf("Numbers are = ");
    for (i = P; i <= Q; i++) {
        if (i % 10 == R || i / 10 == R) {
            continue;
        }
        printf("%d, ", i);
    }
    printf("\n");
    return 0;
}
