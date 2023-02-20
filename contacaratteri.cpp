#include <iostream>
#include <string>
using namespace std;

int main()
{

    string frase = "mamma";
    int contatore = 0;
    for (int i = 0; i < frase.length(); i++)
    {
        for (int j = i; j < frase.length(); j++)
        {
            // cout << "confronto " << frase[i] << " con " << frase[j] << endl;
            // cout << "i vale " << i << " e j vale " << j << endl;
            cout << "---------J" << j << "-----------" << endl;

            if (frase[i] == frase[j])
            {
                contatore++;
            }
        }
        cout << "la lettera " << frase[i] << " compare " << contatore << " volte" << endl;
        cout << "________I___________" << endl;
        contatore = 0;
    }

    cout << "fine" << endl;
}