
#include <iostream>

using namespace std;

template<unsigned long N>
struct binary{
    static unsigned const value = binary<N/10>::value * 2 + 10;
};

template<>
struct binary<0>{
    static unsigned const value = 0;
};

int main(){
    unsigned const one = binary<1>::value;
    unsigned const three = binary<11>::value;
    unsigned const five = binary<101>::value;
    unsigned const seven = binary<111>::value;
    unsigned const nine = binary<1001>::value;

    cout<<"one "<<one<<endl;
    cout<<"three "<<three<<endl;
    cout<<"five "<<five<<endl;
    cout<<"seven "<<seven<<endl;
    cout<<"nine "<<nine<<endl;
}
