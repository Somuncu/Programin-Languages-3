#include <stdio.h>
#include <stdlib.h>
// Void fonsiyonlu olanı en aşağıda yorum atırında görebilirsiniz fakat hatalar aldık.

ters_cevir(char *term,int x){
while(x>=0){
        printf("%c",*term);
        *term--;
        x--;
    }
}

int main()
{
    char *isim=malloc(sizeof(char));
//i=&isim;
//printf("%d \n",i);
int sayac=0;

   printf("Bir kelime giriniz:");
    scanf("%s",isim);

while(*isim!='\0'){
    printf("%c",*isim);
     isim++;
     sayac++;
    }

printf("Kelimenizin tersi:\n ");
  ters_cevir(isim,sayac);

  //ters_cevir();


	return 0;
}
//int *i;

//ters_cevir()

   // char *term=i;
 /*while(*term!='\0'){
    printf("%c",*term);

        term++;
       // sayac--;
    printf("%c",*term);

    }*/
/*
while(sayac>=0){
        //printf("%c",*term);
        *som=*term;
        som++;
        term--;
        sayac--;
        }
while(*som!='\0'){
    //printf("%c",*isim);
     term++;
     sayac++;
    }
*/
