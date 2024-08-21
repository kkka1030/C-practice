class Intcell
{
    public:
        explicit Intcell( int initialValue = 0);
        int read() const;
        void write( int x );
    
    private:
        int storedValue;

};