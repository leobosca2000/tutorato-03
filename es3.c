/***********************************************************************
 * 
 * TUTORATO 3: Algoritmi elementari
 * ================================
 * 
 * 
 * Terzo esercizio: calcolo della media
 * --------------------------------------
 * 
 * 1) Completa il programma qui sotto in modo che calcoli la media
 *    di una sequenza di valori letti da terminale.
 * 
 * 2) Compila il programma con il comando:
 * 
 *    gcc -Wall -o es3 es3.c
 * 
 * 3) Esegui il programma con il comando:
 * 
 *    ./es3
 * 
 *    ed inserendo valori di prova.
 *
 ***********************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int media;
    int n=0;
  /* Completa la funzione.*/
    media=0;
    do{
      printf("Inserire un valore(termina inserendo 0):\n");
      scanf("%d", &a);
      media=media + a;
      n++;
    }while(a!=0);
    
    n--;
    media= media/n;
    
    printf("La media aritmetica e' %d\n", media);

  return 0;
}

