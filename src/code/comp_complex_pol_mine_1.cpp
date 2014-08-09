#include <iostream>

using namespace std;

const unsigned int N = 40000;

template<typename Implementation>
class Base{
    public:
        void tick(unsigned int n){ 
            impl().tick(n);
        }   
    
        unsigned int getValue(){
            return impl().getvalue();
        }   

    private:
        Implementation& impl() {
            return *static_cast<Implementation*>(this);
        }   
};

