#ifndef VECTOR_H
#define VECTOR_H

//implementation of vector with static
class SVector
{
    public:
        SVector(); //default constructor

        int size() const; //returns the number of elements in the vector
        bool empty() const; //returns true if the vector is empty
        int &at(int index); //returns the element at position index
        void set(int index, int value); //sets the element at position index to value
        void insert(int index, int value); //inserts value at position index
        void erase(int index); //removes the element at position index

    private:
        //integer constants
        enum{CPCT = 256}; // enum is used to define constants

        int arr[CPCT]; //array of integers with capacity CPCT
        int numb; //number of elements in the vector

};


#endif // VECTOR_H