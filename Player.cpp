#include "Player.h"
#include <iostream>
#include <vector>

using namespace std;


void Player::playerStart()                                      /// Called to assign each of the players cards by
{                                                               /// subsequently calling the randCardGen function
    vector <int> cardOne;
    vector <int> cardTwo;

    cardOne = randCardGen();
    card1.push_back(cardOne[0]);
    card1.push_back(cardOne[1]);

    cardTwo = randCardGen();
    card2.push_back(cardTwo[0]);
    card2.push_back(cardTwo[1]);
}


vector <int> Player::randCardGen()                              /// Called by the playerStart function to randomly
{                                                               /// generate cards and check if they have already been
    vector <int> card;                                          /// used, if not the function keeps track of the cards
    card.clear();                                               /// dealt in the cardsUsed array
    bool cardNotFound = true;
                                                                /// bool value for cardNotFound used in while loop
    while(cardNotFound)                                         /// To make sure repeated cards are not used
        {
        int s = rand()%4;
        int d = rand()%13;
        if(cardsUsed[s][d] == 0)
        {
            cardsUsed[s][d] = 1;
            card.push_back(s);
            card.push_back(d);
            cardNotFound = false;
        }
        }
    return card;
}


void Player::displayCards()
{
    int cd1 = card1[1];
    int cs1 = card1[0];
    int cd2 = card2[1];
    int cs2 = card2[0];
    cout << "Your Hand:" << endl;
    cout << "Card 1: " << whichDenom[cd1] << whichSuit[cs1] << endl;
    cout << "Card 2: " << whichDenom[cd2] << whichSuit[cs2] << endl;
}

void Player::matrixOfUsedCards()
{
    cout << "Used Cards Matrix:" << endl;
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 13; j++)
        {
            cout << cardsUsed[i][j] << ", ";
        }
        cout << endl;
    }
}