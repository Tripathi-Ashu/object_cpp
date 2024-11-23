#include <iostream>
using namespace std;

int* prepareChai(int cups)
{
    int* order = new int[cups];
    for(int i =0; i <cups; i++)
    {
        order[i] = (i +1)*10;
    }
    return order;
}


int main(){
    int cups = 7;
    int* chai = prepareChai(cups);

    for(int i =0; i<cups; i++)
    {
        cout<< "Cups:" << i + 1<<"has" << chai[i]<< endl;
    }

    delete[] chai;
    return 0;
}