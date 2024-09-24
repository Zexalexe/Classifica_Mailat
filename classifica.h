//
// Created by Elisei Mailat on 24/09/24.
//

#ifndef CLASSIFICA_MAILAT_CLASSIFICA_H
#define CLASSIFICA_MAILAT_CLASSIFICA_H

#include <string>

const int DIM_CLASSIFICA = 10;
const int MAX_NOME = 15;
const int MAX_PUNTEGGIO = 10;

typedef struct {
    std::string nome;
    int punteggio;
} Player;

void initClassifica(Player classifica[]);

void mostraClassifica(Player classifica[]);

void shiftClassifica(Player classifica[], int index);

void inserisciGiocatore(Player classifica[], std::string nome, int punteggio);

#endif //CLASSIFICA_MAILAT_CLASSIFICA_H
