/***********************************************************************
 * 
 * TUTORATO 3: Algoritmi elementari
 * =======================
 * 
 * 
 * Quarto esercizio: conteggio
 * ---------------------------
 * 
 * 1) Completa il programma qui sotto in modo che conti quanti valori occorre
 *    leggere prima di averne letti 10 dispari.
 * 
 * 2) Compila il programma con il comando:+
 * 
 * 
 * 
 *    gcc -Wall -o es4 es4.c
 * 
 * 3) Esegui il programma con il comando:
 * 
 *    ./es4
 * 
 *    ed inserendo valori di prova.
 * 
 ***********************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
  /* Completa la funzione.*/
    int n;
    int lett;
    int dis;
    lett=0;
    for(dis=0; dis<10;lett++){
        printf("Inserisci un valore:");
        scanf("%d", &n);
        if(n%2!=0){
            dis++;
        }
    }
    printf("Le letture sono state %d\n", lett);


  return 0;
}

