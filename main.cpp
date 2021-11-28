#include <iostream>
#include "lib.h"
using namespace std;
int main() {
    unsigned char let=0;
    unsigned char ris=0;
    cin >> let;
    if(conv(let, ris)){
        conv(let, ris);
        cout << ris << endl;
    } else{
        cout << "errore" << endl;
    }
    return 0;
}
