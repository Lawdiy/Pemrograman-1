#include <stdio.h>
int main (){
    int nilai1, nilai2;

    printf("");
    scanf("%d %d", &nilai1, &nilai2);

    for (int i=nilai1, j=nilai2; i<=nilai2 && j>=nilai1; i++, j--) {
        printf("%d %d", i, j);
        if (i<nilai2 || j>nilai1) {
            printf(" - ");
        }
    }

    for (int i=nilai1, j= nilai2; i >= nilai2 && j <= nilai1; i--, j++) {
        printf("%d %d", i, j);
        if (i > nilai2 || j < nilai1) {
            printf(" - ");
        }
    }
    printf("\n\n");
    return 0;
} 