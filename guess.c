/*********************************************************************
 * guess.c
 *
 * Programma che chiede all'utente di indovinare un numero generato
 * casualemente.  Dopo ogni tentativo fallito viene comunicato se il
 * numero da indovinare e` superiore o inferiore a quello inserito.
 * Dopo un certo numero massimo di tentativi falliti il giocatore ha
 * perso.
 *
 * Compilare il programma con il comando:
 *
 *   gcc -o guess guess.c
 *
 * ed eseguirlo digitando:
 *
 *   ./guess
 *
 *********************************************************************/


#include <stdio.h>  /* Abilita l'uso delle funzioni printf e scanf. */
#include <stdlib.h> /* Abilita l'uso delle funzioni rand e srand. */
#include <time.h>   /* Abilita l'uso della funzione time. */

/* Numero di tentativi che determina la sconfitta. */
#define MAX_TENTATIVI 5


/* Funzione principale. */
int main()
{
  int n;  /* Numero da indovinare. */
  int m;  /* Numero immesso dal giocatore. */
  int tentativi = 0;  /* Numero di tentativi effettuati. */
	
  /* srand inizializza la generazione di numeri pseudocasuali.
     Affinche' i numeri generati siano diversi per ciascuna
     esecuzione, si invoca la funzione time che restituisce il numero
     di secondi passati da un certo istante predefinito. */
  srand(time(0));

  /* La funzione rand restituisce un numero intero pseudocasuale non
     negativo e non superiore alla costante RAND_MAX.  Per ottenere un
     valore nell'intervallo 1-100 occorre calcolare il resto della
     divisione (%) per 100 e sommare quindi 1. */
  n = 1 + (rand() % 100);


  /* Ciclo do-while: si esegue ripetutamente il corpo, al termine del
     quale si verifica se la condizione di continuazione e`
     verificata. In pratica si comporta come il ciclo while, salvo che
     il corpo viene eseguito sempre almeno una volta. */
  do {


    /* Richiede l'immissione del numero. */
    printf("Inserire un valore (1-100) ");

    /* Legge il numero inserito dal giocatore: il marcatore "%d"
       indica che vogliamo un numero intero.  L'operatore '&' e`
       richiesto dalla funzione scanf, che necessita della `posizione'
       in cui si trova la variabile e non del suo valore attuale. */
    scanf("%d", &m);

    /* Incrementa il numero di tentativi. */
    tentativi = tentativi + 1;
    /* In alternativa si sarebbe potuto anche usare uno dei seguenti
       comandi:
       
       tentativi += 1;
       ++tentativi;
       tentativi++;
    */
    
    /* Stampa la risposta al numero inserito. Il messaggio cambia a
       seconda del fatto che m sia maggiore o minore di n.  Se m e`
       uguale a n, non viene stampato nessuno dei due messaggi. */
    if (m > n) {
      printf("%d e` troppo grande\n", m);
    } else if (m < n) {
      printf("%d e` troppo piccolo\n", m);
    }

    /* Fine del corpo del ciclo do-while.  Segue la condizione di
       continuazione del ciclo.  In questo caso si riesegue il corpo
       se n e` diverso (!=) da m e se contemporaneamente (&&) il
       numero di tentativi e` inferiore al massimmo ammesso dal
       gioco. */
  } while (n != m && tentativi < MAX_TENTATIVI);

  
  /* Poiche' siamo usciti dal ciclo do-while deve valere almeno una
     delle seguenti condizioni:
     
       n == m

     oppure
     
       tentativi >= MAX_TENTATIVI

     L'ultimo if risolve questa ambiguita` e stampa il messaggio
     opportuno. */
  if (n == m) {
    printf("Indovinato!\n");
  } else {
    printf("Hai perso! Il numero da indovinare era %d\n", n);
  }
}