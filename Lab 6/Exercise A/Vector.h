template <class T>

class Vector {
    public:
        Vector(int s);
        ~Vector();
        T getValue(int elem);
        void display();
        T::VectIter();
    private:
        T *array;
        int size;
};