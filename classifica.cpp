//
// Created by Elisei Mailat on 24/09/24.
//

#include <iostream>
#include <string>
#include "classifica.h"

void initClassifica(Player classifica[]){
    for(int i=0; i < DIM_CLASSIFICA; i++){
        classifica[i].nome = "---------------";
        classifica[i].punteggio = 0;
    }
}

void mostraClassifica(Player classifica[]) {
    std::cout << std::endl;
    std::cout << " ____________________________________\n";
    std::cout << "|             CLASSIFICA             | \n";
    std::cout << "|------------------------------------|\n";
    std::cout << "| Pos |      Nome       | Punteggio  |\n";

    for (int i = 0; i < DIM_CLASSIFICA; i++) {
        if(i < 9)
            std::cout << "| "<< i + 1 << "   | ";
        else
            std::cout << "| "<< i + 1 << "  | ";

        std::string nome = classifica[i].nome;
        if (nome.length() > MAX_NOME) {
            nome = nome.substr(0, MAX_NOME);
        }
        std::cout << nome;
        std::cout << std::string(MAX_NOME - nome.length(), ' ');  // Aggiunge spazi per allineare

        std::cout << " | ";

        std::string punteggioStr = std::to_string(classifica[i].punteggio);
        std::cout << std::string(MAX_PUNTEGGIO - punteggioStr.length(), ' ') << punteggioStr << " |";


        std::cout << std::endl;
    }
    std::cout << "|_____|_________________|____________|\n";
}

void shiftClassifica(Player classifica[], int index){
    for(int i = DIM_CLASSIFICA-1; i > index; i--){
        classifica[i].nome = classifica[i-1].nome;
        classifica[i].punteggio = classifica[i-1].punteggio;
    }
}

void inserisciGiocatore(Player classifica[], std::string nome, int punteggio){
    int i = 0;
    bool isUpdated = false;
    while(i < DIM_CLASSIFICA && !isUpdated){
        if(punteggio > classifica[i].punteggio) {
            shiftClassifica(classifica, i);
            classifica[i].nome = nome;
            classifica[i].punteggio = punteggio;
            isUpdated = true;
        }
        else if(punteggio == classifica[i].punteggio){
            shiftClassifica(classifica, i+1);
            classifica[i+1].nome = nome;
            classifica[i+1].punteggio = punteggio;
            isUpdated = true;
        }

        i++;
    }
}
