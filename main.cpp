#include <iostream>
#include "swap.h"

using namespace std;


int main(){
    cout<<"HELLO!!!" << endl;
    int val1 = 12;
    int val2 = 45;
    cout << "val1=" << val1 << endl;
    cout << "val2=" << val2 << endl;
    swap(val1, val2);
    cout << "=======swap=======" << endl;
    cout << "val1=" << val1 << endl;
    cout << "val2=" << val2 << endl;
    return 0;
}