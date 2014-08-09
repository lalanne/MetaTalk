class Derived : public Base<Derived> {
    unsigned int counter;

    public:
        Derived() : counter(0) {}

        void tick(unsigned int n) {
            counter += n;
        }

        unsigned int getvalue() {
            return counter;
        }
};
