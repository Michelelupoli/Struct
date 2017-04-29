#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, opz, i;
    string dat, dat2;
    struct caffe
    {
        int numero;
        string nome;
        string cognome;
        int voto;
    };
    struct caffe deserto[30];
    while (n<1 || n>30)
    {
        cout << "Inserisci numero di record: ";
        cin >> n;
    }
    for (i=0; i<n; i++)
    {
        cout << "Inserisci numero: ";
        cin >> deserto[i].numero;
        cout << "Inserisci nome: ";
        cin >> deserto[i].nome;
        cout << "Inserisci cognome: ";
        cin >> deserto[i].cognome;
        cout << "Inserisci voto: ";
        cin >> deserto[i].voto;
    }
    cout << "Scegli cosa vuoi visualizzare: ";
    cout << "[0] Visualizza Nome e Cognome di un numero." << endl;
    cout << "[1] Visualizza il voto di un numero." << endl;
    cout << "[2] Visualizza il voto di un Nome e Cognome dato. " << endl;
    cout << "[3] Visualizza l'intero record da numero. " << endl;
    cout << "Inserisci opzione: ";
    cin >> opz;
    switch (opz)
    {
        case 0:
        {
            cout << "Inserisci numero: ";
            cin >> i;
            cout << deserto[i].nome << " " << deserto[i].cognome << endl;
        }
        case 1:
        {
            cout << "Inserisci numero: ";
            cin >> i;
            cout << deserto[i].voto << endl;      
        }
        case 2:
        {
            cout << "Inserisci Nome: ";
            cin >> dat;
            cout << "Inserisci Cognome: ";
            cin >> dat2;
            for (i=0; i<n; i++)
            {
                if (dat == deserto[i].nome && dat2 == deserto[i].cognome)
                {
                    cout << "Il voto di " << dat << " " << dat2 << " e' " << deserto[i].voto;
                }
            }
        }
        case 3:
        {
            cout << "Inserisci numero: ";
            cin >> dat;
            for (i=0; i<n; i++)
            {
                if (dat == deserto[i].numero)
                {
                    cout << deserto[i].numero << endl;
                    cout << deserto[i].nome << endl;
                    cout << deserto[i].cognome << endl;
                    cout << deserto[i].voto << endl;
                }
            }
        }
    }
    system("PAUSE");
    return 0;
}
