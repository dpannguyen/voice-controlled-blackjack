#ifndef DECK_H
#define DECK_H

#include <iostream>
#include <string>
#include <vector>
#include "Card.h"

using namespace std;

class Deck {
    private:
      vector<Card> cards;
      int pos;

    public:
      Deck();
      //Deck(vector<Card> cardDeck);

      int myRand(int i);
      void shuffleDeck();
      Card getNextCard();

      ~Deck();
};
#endif
