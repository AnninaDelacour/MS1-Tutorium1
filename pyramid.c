#include <stdio.h>
#include <stdlib.h>

int main(){

    int k = 0;
    for(int i = 1; i <= 3; ++i, k = 0){

        for(int j = 1; j <= 3 - i; ++j){
            printf("  "); // zwei Leerzeichen!
        }
        while (k != 2 * i - 1)
        {
            printf("* ");
            ++k;
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}

/* ALTERNATIVE:
         for(int a = 2; a >= =; a--)
         {
            for(int b = 0; b < a; b++)
            {
                printf(" ");
            }
            for(int c = 0; c < (2-a)*2+1; c++)
             {
                printf("*");
             }
             printf("\n");
         }
         */

/*
 Nehmen wir zur Veranschaulichung eine Matrix her.
 Diese sieht wie folgt aus:

      1. 2. 3. 4.
   1. [a][b][c][d]
   2. [e][f][g][h]
   3. [i][j][k][l]

 Die Zeilen gehen von links nach rechts (horizontal): a bis d. Wir haben 3 Zeilen (engl.: Column)
 Jede Zeile hat Spalten (vertikal): a, b, c, d. Wir haben 4 Spalten (engl.: Row)

 Mit der ersten For-Schleife sehen wir uns die Zeilen an.
 Mit der zweiten For-Schleife gehen wir durch jede Spalte.

 i beginnt bei 1 = 1. Zeile

 Was drückt nun die 1. For-Loop aus?
 Solange i <= 3 ist, geht die erste For-Schleife eine Zeile weiter.
 i wird inkrementiert, dh wird erhöht. FYI: Man unterscheidet zwischen ++i (Pre increment) und i++ (Post increment)
 -> https://stackoverflow.com/questions/24853/what-is-the-difference-between-i-and-i
 -> https://stackoverflow.com/questions/484462/difference-between-pre-increment-and-post-increment-in-a-loop

 2. For-Loop:
 Solange j <= der Differenz von 3 - i ist, soll ein leerer String mit zwei Leerzeichen geprinted werden.

 Nachdem die 2. For-Loop beendet wurde, kommt die While-Loop dran:
 Solange der Wert von k ungleich dem Wert der Rechnung (2 * i) - 1 ist, soll ein Stern geprinted werden.
 Dabei wird k nach dem Print-Statement inkrementiert.
 Sobald k = (2 * i) - 1 ist, wird die While-Schleife unterbrochen.
 Mit print("\n") gehen wir in eine neue Zeile.

 Nun beginnt alles wieder von vorne.
 */