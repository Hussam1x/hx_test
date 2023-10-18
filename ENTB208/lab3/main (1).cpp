#include <iostream>

using namespace std;

#include "vector.h"

void print(SVector &sv)
{
    for (int i = 0; i < sv.size(); i++)
    {
        cout << sv.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    const int NUMB = 15;
    SVector sv;

    for (int i = 0; i < NUMB; i++)
    {
        sv.insert(0, i + 1);

    }

    cout << "Size: " << sv.size() << endl;
    cout << "Empty status: " << sv.empty() << endl;
    sv.set(5, 100);

    cout << "[S]: " << sv.at(5) << endl;
    print(sv);
    sv.erase(5);
    cout << "removing element 5 which is 100" << endl;
    print(sv);
    return 0;
}//main


