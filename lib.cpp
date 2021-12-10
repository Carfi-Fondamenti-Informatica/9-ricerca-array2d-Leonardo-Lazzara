#include "lib.h"
#include <string.h>

bool posizione(char lista[10][20], char nome[20], int &i) {
        for (int i = 0; i < 10; i++) {
                if((strcmp(lista[i],nome))==0){
                        return true;
                }
        }
        return false;
       
}
