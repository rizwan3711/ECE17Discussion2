#include <iostream>
using namespace std;

void printer(int first, int second, int imax, int inc){
    for(int i = 1; i < imax; i = i + inc){
        if(i%first==0 && i%second==0){
            cout << "FizzBuzz" << endl;
        }
        else if(i%first==0){
            cout << "Fizz" << endl;
        }
        else if(i%second==0){
            cout << "Buzz" << endl;
        }
        else{
            cout << i << endl;
        }
    }
}

int main(){
    printer(7,11,500,2);
    return 0;
}