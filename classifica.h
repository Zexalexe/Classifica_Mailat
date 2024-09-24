//
// Created by Elisei Mailat on 24/09/24.
//

#ifndef CLASSIFICA_MAILAT_CLASSIFICA_H
#define CLASSIFICA_MAILAT_CLASSIFICA_H

#include <string>

typedef struct {
    std::string nome;
    int punteggio;
} Player;

void mostraClassifica(Player player, Player classifica[]);

void inserisciGiocatore(Player player, Player classifica[]);

#endif //CLASSIFICA_MAILAT_CLASSIFICA_H
