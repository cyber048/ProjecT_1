#include <stdio.h>

int main () {
	int a = 0;
	int b = 0;
	int c = 0;

        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &c);

        if (a > b && a > c) {
           printf("max = %d", a);
        }
        else if (b > a && b > c) {
 	   printf("max = %d", c);
        }
        else {
           printf("max = %d", c);
        }

        return 0; 
}
