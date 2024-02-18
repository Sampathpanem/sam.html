#include <iostream>
using namespace std;
int main()
{
    int ids[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    ids[2] = 20;
    cout << ids[2] << endl; // we will get 20;
    return 0;
}