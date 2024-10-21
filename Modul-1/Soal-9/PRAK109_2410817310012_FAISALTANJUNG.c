#include <stdio.h>
int main(){
    int pasukan_yuzhong = 958730, pahlawan = 5;
    float jatah_per_pahlawan;

    jatah_per_pahlawan = (float) pasukan_yuzhong / pahlawan;
    printf("Jumlah pasukan yang dibawa Yuzhong = %d pasukan\n", pasukan_yuzhong);
    printf("Jumlah pahlawan = %d pahlawan\n", pahlawan);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %6.f pasukan \n", jatah_per_pahlawan);
    return 0;
}