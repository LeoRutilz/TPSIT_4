/*
Nome: Leonardo Rutili
Data: 1.12.16
Classe: 4INB
Testo: Inserire un numero compresto tra 1 a 4 generare tanti processi figlio
       tramite un ciclo for, per ogni processo stampare il PID del processo
       figlio e del padre.
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>

main(){
    int numero;
    int pid;
    int x;

    do{
        printf("\nInserire il numero di processi compreso tra 1 e 4: ");
        scanf("%d",&numero);
    }while((numero<1)||(numero>4));
    for(x=0; x<numero; x++){
        pid=fork();
        if((pid>0)&&(x==0)){
            printf("\nSono il padre (PID%d) numero=%d x=%d", getppid, numero, x);
        }
        if(pid==0){
            printf("\nSono il figlio (PID%d), sono il padre (PID%d) numero=%d x=%d", getpid, getppid, numero, x);

        }
    }
    printf("\n\n\n");
}
