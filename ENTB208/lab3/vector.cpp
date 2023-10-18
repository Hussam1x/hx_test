#include <stdexcept>

using namespace std;


#include "vector.h"

//default constructor
SVector::SVector()
{
    numb = 0;
    for (int i = 0; i < CPCT; i++)
    {
        arr[i] = 0;
    }
}//SVector

//returns the number of elements in the vector
int SVector::size() const
{
    return numb;
}//size

//checks if the vector is empty
bool SVector::empty() const
{
    return (!numb);
}//empty

//returns the element at position index
int &SVector::at(int index)
{
    if (index < 0 || index >= numb)
    {
        throw out_of_range("Index out of range");
    }
    return arr[index];
}//at

//sets the element at position index to value
void SVector::set(int index, int value)
{
    this->at(index) = value;
}//set

//inserts value at position index
void SVector::insert(int index, int value)
{

    if (numb == CPCT) //checks if the vector is at maximum capacity
    {
        throw out_of_range("Vector is at maximum capacity");
    }

    if (index < 0 || index > numb) //checks if the index is valid
    {
        throw out_of_range("Index out of range");
    }

    for (int i = numb; i > index; i--) //shifts all elements to the right
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = value; //inserts the value
    numb++; //increases the number of elements
}//insert

//removes the element at position index
void SVector::erase(int index)
{
    if (index < 0 || index >= numb) //checks if the index is valid
    {
        throw out_of_range("Index out of range");
    }

    for (int i = index; i < numb - 1; i++) //shifts all elements to the left
    {
        arr[i] = arr[i + 1];
    }
    numb--; //decreases the number of elements
}//erase