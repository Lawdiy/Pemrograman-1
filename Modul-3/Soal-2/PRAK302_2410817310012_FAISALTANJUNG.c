#include <stdio.h>
int main(){
    int bilangan;
    printf("");
    scanf("%d", &bilangan);

    if( bilangan >= 80){
        printf("A\n");
    }
    else if(bilangan >= 70 && bilangan <= 79){
        printf("B\n");
    }
    else if(bilangan >= 60 && bilangan <= 69){
        printf("C\n");
    }
    else if(bilangan >= 50 && bilangan <= 59){
        printf("D\n");
    }
    else if (bilangan < 50){
        printf("E\n");
    }
}