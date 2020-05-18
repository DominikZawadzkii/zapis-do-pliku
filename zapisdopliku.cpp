#include <iostream>
#include <fstream>
using namespace std;

int main()
{ 
int a;

    ofstream wyjscie;
    wyjscie.open("l.txt");
    wyjscie.close();
    
    ifstream wejscie;
    wejscie.open("lp.txt");
        if(wejscie.good()==false)
        {
            cout<<"Gdzie jest plik ?!";
            exit(0);
        }
	while (!eof(wejscie))
        {
            wejscie>>a;
            if (a%2 == 0 )   
            wyjscie<< a <<" "; 
        }
    return 0;
}
