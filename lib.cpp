//
// Created by Abram on 28/11/2021.
//

#include "lib.h"

bool conv(unsigned char & let, unsigned char & ris){
    bool flag;
    if(((let>64)&(let<91))or((let>96)&(let<123))){
        if((let>64)&(let<91)){
            ris=let + ' ';
        } else{
            ris=let - ' ';
        }
        flag=true;
    } else{
        flag=false;
    }
    return flag;
}