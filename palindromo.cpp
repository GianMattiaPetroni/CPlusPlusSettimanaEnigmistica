#include <iostream>
#include <string>
using namespace std;
int i = 0;
int main()
{
    string carattere;
    cout << "inserisci una stringa di caratteri" << endl;
    cin >> carattere;
    for (int i = carattere.length(); i <= carattere.length(); i--)
        cout << carattere[i - 1];
        if (carattere[i - 1] == carattere[i]) {
            cout<< carattere[i] <<" si è palindromo" <<endl; 
        } else {
            cout<< carattere[i] <<" no non è palindromo" <<endl;
        }
}