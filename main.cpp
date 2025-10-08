#include <iostream>

using namespace std;

const string RESET   = "\033[0m";   // Reset

void Menu1() {
    cout<<"\033[1;37m"<< "+========================================+\n";
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

    cout<<"\033[1;36m"<<"### Questo programma è stato creato per \n";
    cout<<"### centralizzare tutte le risorse utili \n";
    cout<<"### per il proseguimento del corso di \n";
    cout<<"### laurea triennale di Informatica \n";
}

void Menu2() {
    cout<<"\033[1;91m"<<"\n\nScegli una delle seguenti opzioni:\n";
    cout<<"\033[1;33m"<<"1) Link Unige Informatica Megathread\n";
    cout<<"2) Progetti condivisi su GitHub\n";

    cout<<"3) Open source del programma\n\n";

    cout<<"4) Esci dal programma\n\n";
}

int SCL(int scl) {
    switch (scl) {
        case 1:
            system("clear"); //Sostituire cls se si vuole usare Windows.
            cout<<"\033[1;33m"<<"\nLink di Unige Informatica Megathread: \n";
            cout<<RESET<<"https://www.notion.so/Unige-Informatica-Megathread-281732e65edc8095a21df1b5224b491e?source=copy_link\n";
            break;
        case 2:
            system("clear");
            cout<<"\033[1;33m"<<"\nProgetti ancora non disponibili...\n\n";
            break;
        case 3:
            system("clear");
            cout<<"\033[1;33m"<<"\nLink del programma open source: \n";
            cout<<RESET<<"https://github.com/AleStoCactus/unige_centralized\n";
            break;
        case 4:
            system("clear");
            cout<<RESET;
            break;
        default:
            system("clear");
            cout<<"\033[1;91m"<<"\nOpzione scelta non valida\n\n";
            break;
    }

    return scl;
}

int main()
{
    Menu1();

    tp:

    Menu2();

    int scelta;
    cin>>scelta;

    SCL(scelta);
    if (scelta == 1 || scelta == 2 || scelta == 3) {
        goto tp;
    } else {
        cout<<RESET;
        return 0;
    }
}