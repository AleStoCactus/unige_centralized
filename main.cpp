#include <iostream>

using namespace std;

void Menu() {
    cout<< "+========================================+\n";
    cout<< "|  _   _    _  _    ___     ___     ___  |\n";
    cout<< "| | | | |  | || |  |_ _|   / __|   | __| |\n";
    cout<< "| | |_| |  | .` |   | |   | (_ |   | _|  |\n";
    cout<< "|  |___|   |_||_|  |___|   |___|   |___| |\n";
    cout<< "|_|^^^^^|_|^^^^^|_|^^^^^|_|^^^^^|_|^^^^^||\n";
    cout<< "|^`-0-0-'^`-0-0-'^`-0-0-'^`-0-0-'^`-0-0-'|\n";
    cout<< "+========================================+\n";
    cout<<"| U N I V E R S I T À   D I        |\n";
    cout<<"| G E N O V A                      |\n";
    cout<<"+----------------------------------+\n\n";

    cout<<"### Questo programma è stato creato per \n";
    cout<<"### centralizzare tutte le risorse utili \n";
    cout<<"### per il proseguimento del corso di \n";
    cout<<"### laurea triennale di Informatica \n";

    cout<<"\n\nScegli una delle seguenti opzioni:\n";
    cout<<"1) Link Unige Informatica Megathread\n";
    cout<<"2) Progetti condivisi su GitHub\n";

    cout<<"\nOpen source del programma:\n";
    cout<<"3) Open Source\n\n";
}

int main()
{
    Menu();
    int scelta;
    cin>>scelta;
    switch (scelta) {
        case 1:
            cout<<"https://www.notion.so/Unige-Informatica-Megathread-281732e65edc8095a21df1b5224b491e?source=copy_link\n";
        case 2:
            cout<<"Progetti ancora non disponibili...\n";
        case 3:
            cout<<"https://github.com/AleStoCactus\n";
        default:
            cout<<"Opzione non valida\n";
    }

    return 0;
}