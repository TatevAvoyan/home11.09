#include "iostream"
#include "test.h"
using namespace std;


int rec1(int start, int end){

    cout << "orinak" << '\n';

    if(start < end && start % 2 != 0 ){

        cout << start ++ << "\n";
        start++;
        return rec1(start, end);
    }
    return 0;
}
