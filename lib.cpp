#include "lib.h"

char conv(unsigned char let=0){
    bool flag=false;
    if(((let>64)&(let<91))or((let>96)&(let<123))){
        if((let>64)&(let<91)){
            let=let + ' ';
        } else{
            let=let - ' ';
        }
        flag=true;
    } else{
        flag=false;
    }
    return let;
}

