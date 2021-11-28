#include <iostream>
#include "lib.h"
using namespace std;
int main() {
    unsigned char let;
    unsigned char ris;
    cin >> let;
    if(conv(let, ris)){
        conv(let, ris);
        cout << ris << endl;
    } else{
        cout << "errore" << endl;
    }
    return 0;
}
