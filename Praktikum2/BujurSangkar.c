/*Nama File     : LuasBjrSgkr.c*/
/*Deskripsi     : Menghitung Luas Bujursangkar */
/*Pembuat       : Derva Anargya Ghaly_24060121140149 */
/*Tgl Pembuatan : Senin, 07 - 03 - 2022 20.30 WIB */

#include <stdio.h> /*Header file*/
#include <stdlib.h>

int main(){ /*Program Utama*/
    /*Kamus*/

    int s; /*Sisi Bujursangkar*/
    int Luas; /*Luas Bujursangkar*/

    /*Alforitma*/
    printf("====== Menghitung Luas Bujursangkar ======\n");
    printf("\nMasukkan Sisi (s) ="); /*Input*/
    scanf("%d", &s);
    Luas =s*s; /*proses, menghitung luas bujursangkar*/

    /*Output*/

    printf("=============================================\n");
    printf("Luas Bujurssangkar (s x s)=%d\n",Luas);
    printf("=============================================\n");
    return 0;
}