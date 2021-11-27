#include <iostream>
#include <string>
#include <cstdlib>
#include "Player.h"

using namespace std;

double betTotal;

void foldCallBet();
void bet();
vector <int> mainRandCardGen();



void foldCallBet()                                              /// Asks player whether they want to fold, call or bet
{                                                               /// and redirects the program accordingly
    char choice;
    cout << "What would you like to do? Fold ('F'), Call ('C') or Bet ('B'): " << endl;
    cin >> choice;

    if(choice == 'F' or choice == 'f')
    {
        cout << "You have folded, please play again!" << endl;
        exit(-1);
    }
    else if(choice == 'C' or choice == 'c')
    {

    }
    else if(choice == 'B' or choice == 'b')
    {
        bet();
    }
    else
    {
        cout << "Invalid answer, try again ---" << endl;
        foldCallBet();
    }
}


void bet()                                                      /// User enters a bet which is added to the global
{                                                               /// betTotal
    double bet;

    cout << "How much would you like to bet? $";
    cin >> bet;

    betTotal += bet;
    cout << "Current pool raised by $" << bet << " to $" << betTotal << endl;

    foldCallBet();
}


vector <int> mainRandCardGen()                                  /// Called by the playerStart function to randomly
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