#include <iostream>

using namespace std;

/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, 
we get 3, 5, 6 and 9.  The sum of these multiples is 23. 
Find the sum of all the multiples of 3 or 5 below 1000
*/

int func(){
    int i = 0;
    int sum = 0;

    while(i < 10 ){
        if(i/3 == 0 || i/5 == 0){
            sum = sum + i;
        } else{
            return 0;
        }

    }

    return sum;
}

int main(){
    cout << "the sum  is:" + func();
}