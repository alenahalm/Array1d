#include <iostream>
#include "array.h"
using namespace std;

int main() {
    double nums[] = {1, 2, 3, 4, 5};
    Array a(nums, 5);
    a.print();
    a.add(27);
    a.print();
    a.addArray(nums, 5);
    a.print();
    cout<<a.get(6)<<endl;
    cout<<a.size()<<endl;
    cout<<a.indexOf(27)<<endl;
    cout<<a.contains(2)<<endl;
    cout<<a.contains(29)<<endl;
    a.removeByValue(4);
    a.print();
    a.removeById(1);
    a.print();
    a.set(5, 30);
    a.print();
    cout<<a.count(5)<<endl;
    a.print();
}
