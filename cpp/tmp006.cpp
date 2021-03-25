#include <iostream>

namespace A {
    class CritdRecursiveLazyInit {
        private:
            std::string name_;
        public:
            CritdRecursiveLazyInit(const char *name)
            :name_(name)
            {
                printf("name=%s \n",name_.c_str());
            }
            
            void show(void){
                printf("kkkkk\n");
            }
            
            ~CritdRecursiveLazyInit(){}
    };
}

namespace A {
namespace B {
    
    CritdRecursiveLazyInit lock_global_subject("SubjectGlobal");
}
}



int main (){
    A::B::lock_global_subject.show();
    return 0;
}
