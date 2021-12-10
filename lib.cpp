#include "lib.h"
#include <istream>

int find(char lista[10][20],char nome[1][20]){
    int n=0;
    for(int i=0; i<10; i++){
        if(nome[0][0]==lista[i][0]){
            for(int j=0; j<20; j++){
                if(nome[0][j]==lista[i][j]){
                    n++;
                    if(n==19){
                        return i;
                    }
                }
            }
        }
    }
    return -1;
}
