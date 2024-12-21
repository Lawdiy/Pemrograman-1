#include <stdio.h>
#include <string.h>

int main() {
    char shikamaru[100], pesan[100], hasil[100];
    int bintang = 0, pagar = 0;

    fgets(shikamaru, sizeof(shikamaru), stdin);
    shikamaru[strcspn(shikamaru, "\n")] = '\0';
    fgets(pesan, sizeof(pesan), stdin);
    pesan[strcspn(pesan, "\n")] = '\0'; 

    if (strlen(shikamaru) != strlen(pesan)) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
        return 0;
    }
    for (int i = 0; i < strlen(shikamaru); i++) {
        if (shikamaru[i] == pesan[i] && shikamaru[i] != ' ') {
            hasil[i] = '*';
            bintang++;
        } else if (shikamaru[i] == ' ' && pesan[i] == ' ') {
            hasil[i] = ' ';
        } else {
            hasil[i] = '#';
            pagar++;
        }
    }
    hasil[strlen(shikamaru)] = '\0';
    printf("%s\n", hasil);
    printf("* = %d\n", bintang);
    printf("# = %d\n", pagar);
    if (bintang > pagar) {
        printf("Pesan Asli\n");
    } else {
        printf("Pesan Palsu\n");
    }
    return 0;
}
