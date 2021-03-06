#ifndef ARRAY1D_ARRAY_H
#define ARRAY1D_ARRAY_H

#include <vector>
#include <iostream>
using namespace std;

class Array {
private:
    vector<double> array;
public:
    Array();
    Array(double ar[], int n);
    void add(double n);
    void addArray(double *ar, size_t n);
    double get(int index);
    int size();
    int indexOf(double n);
    bool contains(double n);
    void removeByValue(double n);
    void removeById(int index);
    void set(int index, double n);
    int count(double n);
    void print();
};


#endif //ARRAY1D_ARRAY_H
