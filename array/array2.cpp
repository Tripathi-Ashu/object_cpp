#include <iostream>
using namespace std;

int totalChaiServe(int chai[] ,int size){
    int total= 0;
    for(int i =0; i<size ; i++)
    {
        total +=  total + chai[i];
    }
    return total;
}

int main(){
    int chaiServed[4] = {34, 56,67,89};
    int total = totalChaiServe(chaiServed ,4);

    cout<< total;
    return 0;
}