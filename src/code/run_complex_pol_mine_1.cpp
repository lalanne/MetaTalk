#include <iostream>

using namespace std;

const unsigned int N = 40000;

class Base{
    public:
        virtual void tick(unsigned int n) = 0;
        virtual unsigned int getValue() = 0;
};

class Derived : public Base{
    unsigned int counter;

    public:
       Derived() : counter(0){} 

        void tick(unsigned int n){ 
            counter += n;
        }   

        unsigned int getValue(){
            return counter;
        }   
};

