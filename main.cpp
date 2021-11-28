#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char let;
    cin >> let;
    if(conv(let)){
        cout << conv(let) << endl;
    } else{
        cout << "errore" << endl;
    }
    return 0;
}
