#include "testlib.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    int t=1.5*1e5;
    cout << t <<endl;
    for(int i=0;i<t;i++){
        int n = 20;
        cout << rnd.next(1, n) << endl;
    }
}
