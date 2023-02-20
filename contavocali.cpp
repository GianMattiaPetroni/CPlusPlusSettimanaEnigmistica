#include <iostream>
#include <string>
using namespace std;

int cercaVocali(string parola)
{
    int risultato = 0;
    for (int i = 0; i <= parola.length(); i++)
    {
        
        if (parola[i] == 'a')
        {
            risultato += 1;
        }

        if (parola[i] == 'e')
        {
            risultato += 1;
        }
        if (parola[i] == 'i')
        {
            risultato += 1;
        }
        if (parola[i] == 'o')
        {
            risultato += 1;
        }
        if (parola[i] == 'u')
        {
            risultato += 1;
        }

       
    }
    return risultato;
}
int main()
{
    cout << cercaVocali("giallo");
}