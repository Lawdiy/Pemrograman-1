#include <stdio.h>
int main(){

   // Nama, Nim, Kelas Pararel, Tempat/Tanggal Lahir, Alamat, Hobi, No. HP
   char Nama[20], NIM[20], pararel[10]; 
   char tempattanggallahir[20], alamat[20], Hobi[20];
   char No_hp[20];
 
   // inputan
   printf("Nama                 : ");
   scanf(" %[^\n]", Nama);
   printf("NIM                  : ");
   scanf(" %[^\n]", NIM);
   printf("Kelas Pararel        : ");
   scanf(" %[^\n]", pararel);
   printf("Tempat/Tanggal Lahir : ");
   scanf(" %[^\n]", tempattanggallahir);
   printf("Alamat               : ");
   scanf(" %[^\n]", alamat);
   printf("Hobby                : ");
   scanf(" %[^\n]", Hobi);
   printf("No. HP               : ");
   scanf(" %[^\n]", No_hp);

   // outputan
   printf("Nama                 : %s\n", Nama);
   printf("NIM                  : %s\n", NIM);
   printf("Kelas Pararel        : %s\n", pararel);
   printf("Tempat/Tanggal Lahir : %s\n", tempattanggallahir);
   printf("Alamat               : %s\n", alamat);
   printf("Hobby                : %s\n", Hobi);
   printf("No. HP               : %s\n", No_hp);

   return 0;
}