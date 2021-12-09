#include <iostream>
#include "lib.h"
using namespace std;


int main() {
    char a[10][20];
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
     }

    char nome[20];
        cin >> nome;

    int risultato= find(a,nome);
    if(risultato==-1){
        cout << "non presente" << endl;
    }else{
        cout << risultato << endl;
    }

    return 0;
}
