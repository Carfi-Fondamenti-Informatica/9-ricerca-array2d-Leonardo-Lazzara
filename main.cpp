#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char lista[10][20];
    char nome[20];
    int x=0
    for (int i = 0; i < 10; i++) {
        cin >> lista[i];
     }
    cin >> nome;

    if(posizione(lista,nome,x)){
        cout << x << endl;
    }else{
        cout << "non presente" << endl;
    }
    return 0;
}
