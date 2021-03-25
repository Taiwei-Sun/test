#include <iostream>

struct abc {
    int a;
    

    
    abc(int k) :a(k){
        
    }
    void showInt(void){
        printf("a=%d\n",a);
    }
    
};



int main (){
    struct abc abc01(123);
    abc01.showInt();
    return 0;
}
