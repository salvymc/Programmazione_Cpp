#include <stdio.h>



/*==============================================================================
Autore      : Salvatore Forino		Matricola: N8600----
Programma   : Merge Array con N uguale
Data        : 09/11/2014

To Do:
-Inserisci N - Controllato (Do While)
-Creare una var int M che sarà N*2 (Il doppio dell inserimento N)
- M è la lunghezza di C[]!!!!
-Ordinali
-stampa la C[]

To Do:
N lunghezza A[]
G "         B[]
M "         C[]        M = N+G
------------------------------------------------------------------------------*/


main (){
    //Dichiarazione delle variabili
    int A[5],
        B[5],
        C[10],
        i,
        j,
        k,
        N=5;

    //leggere Array A

    printf("\n");

    for(i=0;i<N;i++){
        printf("\nInserisci A[%d]:\t", i);
        scanf("%d", &A[i]);
    }
    //leggere Array B
    printf("\n");

    for(i=0;i<N;i++){
        printf("\nInserisci B[%d]:\t", i);
        scanf("%d", &A[i]);
    }

    //Merge Array
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            C[i]=A[j];
        }
    }
    for(i=N; i<N*2; i++){
       for(k=0; k<N; K++){
            C[i]=B[k];
       }
    }


    //Stampa Array
    printf("\n");
    for(i=0;i<10;i++){
        printf("C[%d]:\t%d\n", i, C[i]);
    }


}
