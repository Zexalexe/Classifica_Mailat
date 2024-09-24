#include <iostream>
#include <string>
#include "classifica.h"

void Menu(){
    std::cout << std::endl;
    std::cout << " _______________________________________________________\n";
    std::cout << "|           CLASSIFICA - Elisei Mailat 4AI              |\n";
    std::cout << "|-------------------------------------------------------|\n";
    std::cout << "| [1] Visualizza classifica     [2] Inserisci giocatore |\n";
    std::cout << "| [0] Exit.                                             |\n";
    std::cout << "|_______________________________________________________|\n";
    std::cout << " Scelta -> ";
}


int main() {

    Player classifica[DIM_CLASSIFICA];
    initClassifica(classifica);

    while(true) {

        Player giocatore;

        int userInput;
        Menu();
        std::cin >> userInput;

        //Se l'input non e' valido (es. l'utente inserisce una lettera)
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "\n----------------------------------------------\n";
            std::cout << "Errore: Input non valido, inserisci un numero!\n";
            continue;
        }

        switch(userInput){
            case 1:
                mostraClassifica(classifica);
                break;
            case 2:

                std::cout << " _______________________________________________________\n";
                std::cout << "|                  INSERISCI GIOCATORE                  |\n";
                std::cout << " -------------------------------------------------------\n";

                std::cout << "Inserisci il nome -> ";
                std::cin >> giocatore.nome;

                std::cout << "("<<giocatore.nome<<") Inserisci il punteggio -> ";
                std::cin >> giocatore.punteggio;

                while (!(std::cin >> giocatore.punteggio)) {
                    std::cout << "Errore: Input non valido. Inserisci un numero!" << std::endl;
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "Inserisci il punteggio -> ";
                }

                inserisciGiocatore(classifica, giocatore.nome, giocatore.punteggio);

                break;
            case 0:
                return 0;
        }
    }
}
