#include <iostream>

using namespace std;

int main(){
    int i = 0;
    for (i = 0; i<100; ++i){
        string num="";
        if(i%3==0) num="Fizz";
        if(i%5==0) num+="Buzz";
        if(num=="") num = to_string(i);
        cout<<num+'\n';
    }
    return 0;
}
