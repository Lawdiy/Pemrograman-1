#include <stdio.h>
int main(){
    int batas, i;

    printf("");
    scanf("%d", &batas);

    for(i = 1; i <= batas; i++){
        if(i % 2 == 0){
            continue;
        }
        else{
            printf("%d ", i);
        }
    }
    printf("\n");
    for(i = batas; i > 0; i--){
        if(i % 2 == 0){
            printf("%d ", i);
        }
        else{
            continue;
        }
    }
    return 0;
}