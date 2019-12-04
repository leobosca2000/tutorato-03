
/***********************************************************************
 * 
 * TUTORATO 3: Algoritmi elementari
 * ================================
 * 
 * 
 * Quinto esercizio: radice quadrata
 * ---------------------------------
 * 
 * 1) Completa il programma qui sotto in modo che calcoli
 *    un'approssimazione della radice quadrato usando il metodo
 *    babilonese.
 * 
 * 2) Compila il programma con il comando:
 * 
 *    gcc -Wall -o es5 es5.c
 * 
 * 3) Esegui il programma con il comando:
 * 
 *    ./es5
 * 
 *    ed inserendo valori di prova.
 * 
 ***********************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
  /* Dichiarazione e lettura dell'argomento della radice. */
  int z;
  double x=1;
  printf("Inserire valore argomento radice: ");
  scanf("%d", &z);
  
  /* Completa la funzione.*/
 do{
  if(z<0){
      printf("Errore: l'argomento della radice non puo' essere negativo.");
      }
      x= (x+ (z/x))/2 ;  
  }while((x*x)-z>0.0001);
  
  printf("La radice e' approssimata a %3lf\n", x);
  

  return 0;
}

