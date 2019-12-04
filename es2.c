/***********************************************************************
 * 
 * TUTORATO 3: Algoritmi elementari
 * =======================
 * 
 * 
 * Secondo esercizio: calcolo del massimo
 * --------------------------------------
 * 
 * 1) Completa il programma qui sotto in modo che calcoli il massimo
 *    di una sequenza di valori letti da terminale.
 * 
 * 2) Compila il programma con il comando:
 * 
 *    gcc -Wall -o es2 es2.c
 * 
 * 3) Esegui il programma con il comando:
 * 
 *    ./es2
 * 
 *    ed inserendo valori di prova.
 * 
 ***********************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int massimo;
  int n;
  
  massimo=1;
  do{
  printf("Inserire un valore (Termina con inserimento di 0):\n");
  scanf("%d", &n);
  
  if(n>massimo){
      massimo=n;
  }
}while(n!=0);

   printf("Il valore inserito massimo nella sequenza e' %d\n", massimo);
  /* Completa la funzione. Suggerimento: visto che non possiamo
     prevedere quanti valori verranno inseriti saremo costretti ad
     utilizzare un ciclo.*/


  /* Alla fine della funzione main e` opportuno inserire il comando
     "return 0;" che informa il sistema che il programma ha terminato
     l'esecuzione correttamente.  Altrimenti il compilatore stampera`
     un avvertimento. */
  return 0;
}

