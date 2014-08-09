int main(){

    Base<Derived>* obj = new Derived();
    for(unsigned int i=0; i<N*N; ++i){
        obj->tick(i);
    }
    cout<<"result: "<<obj->getValue()<<endl;
    delete obj;

    return 0;
} 
