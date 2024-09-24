//
// Created by Elisei Mailat on 24/09/24.
//

#ifndef CLASSIFICA_MAILAT_CLASSIFICA_H
#define CLASSIFICA_MAILAT_CLASSIFICA_H

#include <string>

const int DIM_CLASSIFICA = 10;

typedef struct {
    std::string nome;
    int punteggio;
} Player;

void initClassifica(Player classifica[]);

void mostraClassifica(Player classifica[]);

void inserisciGiocatore(Player classifica[]);

#endif //CLASSIFICA_MAILAT_CLASSIFICA_H
