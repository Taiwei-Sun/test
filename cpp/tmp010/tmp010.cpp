#include <iostream>
#include "tmp010.hxx"

void abc::showInt(int b){
    printf("a=%d b=%d\n",a,b);
}


int main (){
    class abc abc01(123);
    abc01.showInt();
    abc01.showInt(321);
    abc01.showInt2();
    return 0;
}
