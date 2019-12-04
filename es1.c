/***********************************************************************
 *
 * TUTORATO 3: Algoritmi elementari
 * ================================
 *
 *
 * Primo esercizio: calcolo della potenza
 * ---------------------------------------
 *
 * 1) Completa il programma qui sotto in modo che calcoli a elevato alla
 *    b, dove a e b sono numeri interi letti da terminale
 *
 * 2) Compila il programma con il comando (-Wall abilita la stampa di
 *    avvertimenti):
 *
 *    gcc -Wall -o es1 es1.c
 *
 * 3) Esegui il programma con il comando:
 * 
 *    ./es1
 *
 * ed inserendo valori di prova per a e b.
 ***********************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
  /* Dichiarazione e lettura dei dati */
  float a;
  int b;
  float p;
  
  printf("Inserire il valore della base e dell'esponente: \n");
  scanf("%f", &a);
  scanf("%d", &b);
    p=1;
  /* Completa la funzione con l'algoritmo e la stampa del
     risultato. */
    for(b=b ; b>0; b--){
       p=p*a;
    }

    printf("La potenza che risulta e' %f\n", p);
  /* Alla fine della funzione main e` opportuno inserire il comando
     "return 0;" che informa il sistema che il programma ha terminato
     l'esecuzione correttamente.  Altrimenti il compilatore stampera`
     un avvertimento. */
  return 0;
}

