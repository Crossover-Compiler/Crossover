#include <iostream>
using namespace std;

extern "C" {
    int fibaux(int x) {
        if((x==1)||(x==0)) {
            return(x);
        }else {
            return(fibaux(x-1)+fibaux(x-2));
        }
    }

    void fib() {
        int x , i=0;
        cout << "Enter the number of terms of series : ";
        cin >> x;
        cout << "\nFibonnaci Series : ";
        while(i < x) {
            cout << " " << fibaux(i);
            i++;
        }
        std::cout << std::endl;
        return;
    }
}