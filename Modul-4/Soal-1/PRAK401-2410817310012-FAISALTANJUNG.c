#include <stdio.h>
int main(){
int angka, i;
char a;

    printf("");
    scanf("%d %c", &angka, &a);

for(i = 1; i <= 50; i++){
    if(i % angka == 0){
        printf("%c ", a);
    } 
    else{
    printf("%d ", i);
    }
}
    return 0;
}