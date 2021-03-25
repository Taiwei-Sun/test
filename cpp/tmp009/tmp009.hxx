#include <iostream>


class abc {
    private:
        int a;
        
        
    public:
        abc(int k) :a(k){
            
        }
        void showInt(void){
            printf("a=%d\n",a);
        }
        void showInt(int);
};