#include <iostream>
#include "lib.h"

using namespace std;
int main() {
    char lista[10][20];
    char nome[1][20];
 
    for(int i=0; i<10; i++){
        for(int j=0; j<20; j++){
            lista[i][j]=' ';
        }
    }
    for(int i=0; i<20; i++){
        nome[0][i]=' ';
    }

    for(int i=0; i<10; i++){
        cin >> lista[i];
    }
    cin >> nome[0];

    int risultato=find(lista,nome);
    if(risultato==-1){
        cout<<"non presente"<<endl;
    }else{
        cout<< risultato <<endl;
    }

    return 0;
}
