#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char lista[10][20];
    char nome[1][20];
    int posizione=0;
    for (int i = 0; i < 10; i++) {
        cin >> lista[i];
    }
    cin >> nome[0];

    if(risultato(lista,nome,posizione)){
        cout << posizione << endl;
    }else{
        cout << "non presente" << endl;
    }
    return 0;
}
