/*
Nama = Derva Anargya Ghaly
NIM  = 24060121140149
Nama File = FaktorBilangan.c
Deskripsi = Menghitung faktor bilangan yang telah diberikan
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus
    int N,i;

    printf("Ingin mencari faktor dari bilangan berapa? ");
    scanf("%d",&N);

    for(i=1; i<=N ;i++){
        if (N % i == 0){
            printf(" %d",i);
        }
    }
    return 0;
}
