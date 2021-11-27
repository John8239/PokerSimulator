#include <iostream>
#include <string>
#include <cstdlib>
#include "funcs.cpp"


using namespace std;

int a, b, c, d, e, f, g, h, i, j;  /// Not really sure if I need these but I'm gonna hang on to them for now
string card1, card2, card3, card4, card5;
int cardsOnTable[5][2] = {{a, b}, {c, d}, {e, f}, {g, h}, {i, j}};

void firstRoundFlop();
void secondRoundTurn();
void thirdRoundRiver();

void firstRoundFlop()                                           /// Calls the mainRandCardGen, displays the cards and
{                                                               /// then calls foldCardBet to see what the player will
    vector <int> tableCard1 = mainRandCardGen();                /// do
    vector <int> tableCard2 = mainRandCardGen();
    vector <int> tableCard3 = mainRandCardGen();
    card1 = whichDenom[tableCard1[1]] + whichSuit[tableCard1[0]];
    card2 = whichDenom[tableCard2[1]] + whichSuit[tableCard2[0]];
    card3 = whichDenom[tableCard3[1]] + whichSuit[tableCard3[0]];
    a = tableCard1[0];
    b = tableCard1[1];
    c = tableCard2[0];
    d = tableCard2[1];
    e = tableCard3[0];
    f = tableCard3[1];
    cout << "1st round: " << endl;
    cout << "Cards on the table: " << card1 << ", " << card2 << ", " << card3 << endl;
    cout << "Current betting pool: $" << betTotal << endl;

    foldCallBet();
}


void secondRoundTurn()                                          /// Does the same as the first round but shows all
{                                                               /// cards on the table
    vector <int> tableCard = mainRandCardGen();
    g = tableCard[0];
    h = tableCard[1];
    card4 = whichDenom[tableCard[1]] + whichSuit[tableCard[0]];
    cout << "2nd round: " << endl;
    cout << "Cards on the table: " << card1 << ", " << card2 << ", " << card3 << ", " << card4 << endl;
    cout << "Current betting pool: $" << betTotal << endl;

    foldCallBet();
}


void thirdRoundRiver()                                         /// Does the same as the second round but shows all
{                                                              /// cards on the table
    vector <int> tableCard = mainRandCardGen();
    i = tableCard[0];
    j = tableCard[1];
    card5 = whichDenom[tableCard[1]] + whichSuit[tableCard[0]];
    cout << "3rd round: " << endl;
    cout << "Cards on the table: " << card1 << ", " << card2 << ", " << card3 << ", " << card4 << ", " << card5 << endl;
    cout << "Current betting pool: $" << betTotal << endl;

    foldCallBet();
}
