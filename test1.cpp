#include "iostream"
#include "test1.h"
using namespace std;

void n(int n1){


    switch (n1) {
        case 0: cout << "User" << endl; break;
        case 1: cout << "Moderator" << endl; break;
        case 2: cout << "Admin" << endl; break;
        case 3: cout << "Super Admin" << endl; break;
        default: cout << "Something wrong pleas write 0 or 1, 2, 3";
    }

}

