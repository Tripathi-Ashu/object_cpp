#include <iostream>
#include <vector>

using namespace std;

class Chai 
{
   public:
        string teaName;// name of tea
        int servings; //Number of servings
        vector<string> ingredines; //list of ingrediens for the tea
        
        // Member function  
        void displayChai() {
            cout<<"teaname" << teaName << endl;
            cout<<"serving" << servings << endl;
            cout<<"Ingrent" ;
            for (string ingrent :ingredines){
                cout << ingrent <<" ";
            };
            cout <<endl;
            
        }

    private:
            
};


int main(){
    
    Chai chaiOne; // Object

    chaiOne.teaName = "leman tea";
    chaiOne.servings = 2;
    chaiOne.ingredines= { "water " ,"lemon" ,"honey" ,"tea"};

    chaiOne.displayChai();
    
    Chai chaiTwo;
    chaiTwo.teaName = "Aadushds";
    chaiTwo.servings = 7;
    chaiTwo.ingredines  = {"water" ,"mial" ,"sdsbf", "ddsf"};
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
    chaiTwo.displayChai();

    return 0;
}
