//
// Created by Elisei Mailat on 24/09/24.
//

#include <iostream>
#include <string>
#include "classifica.h"

void initClassifica(Player classifica[]){
    for(int i=0; i < DIM_CLASSIFICA; i++){
        classifica[i].nome = "Unknown";
        classifica[i].punteggio = 0;
}
    }

void mostraClassifica(Player classifica[]){

    std::cout << "--------------------------------------------------\n";
    std::cout << "                    CLASSIFICA\n";
    std::cout << "--------------------------------------------------\n";
    for(int i = 0; i < DIM_CLASSIFICA; i++){
        if(i != DIM_CLASSIFICA-1){
            std::cout << " " << i+1 << "  | ";
        }
        else{
            std::cout << i+1 << "  | ";
        }

        std::cout <<classifica[i].nome << " | " << classifica[i].punteggio << std::endl;
    }
}

void shiftClassifica(Player classifica[], int index){
    for(int i = DIM_CLASSIFICA-1; i > index; i--){
        classifica[i].nome = classifica[i-1].nome;
        classifica[i].punteggio = classifica[i-1].punteggio;
    }
}

