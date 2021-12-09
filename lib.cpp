#include "lib.h"
#include <iostream>
using namespace std;

int find( const char lista[10][20], const char nome[20]) {
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 20; j++) {
                if(ista[i][j]!=nome[j] && lista[i][j]!=nome[j]+32 && lista[i][j]!=nome[j]-32){
                    break;
                }else {
                    return i;
                }
            }
        }
        return -1;
}
