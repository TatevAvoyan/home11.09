#include "iostream"
#include "test2.h"
using namespace std;

int rec(const int length, int data[]){

    int i = 0;
    int num = 0;

    if(i < length){
        if (num < data[i]){
            num = data[i];
        }
        rec(length, data);
    }
    return num;
}

