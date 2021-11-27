#ifndef POKER_PLAYER_H
#define POKER_PLAYER_H
#include <iostream>
#include <vector>

using namespace std;

                        /// HEARTS, DIAMONDS, CLUBS, SPADES
string whichSuit[] = {" of Hearts", " of Diamonds", " of Clubs", " of Spades"};

/// TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE
string whichDenom[] = {"Two", "Three", "Four", "Five", "Six", "Seven", "Eight",
                       "Nine", "Ten", "Jack", "Queen", "King", "Ace"};

int cardsUsed[4][13];

class Player
        {
        private:
            vector <int> card1;
            vector <int> card2;
            double money = 100;
        public:
            void playerStart();
            vector <int> randCardGen();
            void displayCards();
            void matrixOfUsedCards();
        };


#endif //POKER_PLAYER_H
