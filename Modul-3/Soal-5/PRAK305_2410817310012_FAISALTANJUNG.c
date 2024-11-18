#include <stdio.h>
int main(){
    int inputdetik, hari, jam, menit, detik;
   
    printf("");
    scanf("%d", &inputdetik);

    hari = inputdetik / 86400 ;
    jam = (inputdetik % 86400) / 3600;
    menit = (inputdetik % 3600) / 60;
    detik = inputdetik % 60;

    if(hari > 0){
        printf("%.0d hari %02d:%02d:%02d\n",hari, jam , menit, detik);
    }
    else{
        printf("%02d:%02d:%02d\n",jam, menit, detik);
    }
}