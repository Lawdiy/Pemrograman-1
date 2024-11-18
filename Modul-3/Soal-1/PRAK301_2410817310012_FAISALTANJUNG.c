#include <stdio.h>
int main(){
    int bilangan1, bilangan2, bilangan3;

    printf("");
    scanf("%d %d %d", &bilangan1 , &bilangan2, &bilangan3);

    if(bilangan1 > bilangan2 & bilangan2 > bilangan3){ // 1 > 2 > 3
        printf("%d %d %d\n", bilangan3, bilangan2, bilangan1);
    }
    else if(bilangan1 > bilangan3 & bilangan3 > bilangan2){ // 1 > 3 > 2
        printf("%d %d %d\n", bilangan2, bilangan3, bilangan1);
    }
    else if(bilangan2 > bilangan1 & bilangan1 > bilangan3){ // 2 > 1 > 3
        printf("%d %d %d\n", bilangan3, bilangan1, bilangan2);
    }
    else if(bilangan2 > bilangan3 & bilangan3 > bilangan1){ // 2 > 3 > 1
        printf("%d %d %d\n", bilangan1, bilangan3, bilangan2);
    }
    else if(bilangan3 > bilangan1 & bilangan1 > bilangan2){ // 3 > 1 > 2
        printf("%d %d %d", bilangan2, bilangan1, bilangan3);
    }
    else{ // 3 > 2 > 1
        printf("%d %d %d\n", bilangan1, bilangan2 , bilangan3);
    }
}