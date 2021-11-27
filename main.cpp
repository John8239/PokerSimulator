#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>
#include "Player.h"
#include "Player.cpp"
#include "Rounds.cpp"

using namespace std;
using namespace this_thread;
using namespace chrono;

void home(Player player, Player cpu1, Player cpu2, Player cpu3);
void deck(int s, int d);
void startHands();


int main()
{
    srand(time(NULL));
    cout << "Hello! Welcome to Texas Hold em' Poker!" << endl;
    cout << endl;

    sleep_until(system_clock::now() + seconds(1));          /// To give some loading time for aesthetics

    Player player;
    player.playerStart();
    player.displayCards();
    cout << endl;

    Player cpu1;
    cpu1.playerStart();
    //cpu1.displayCards();

    Player cpu2;
    cpu2.playerStart();
    //cpu2.displayCards();

    Player cpu3;
    cpu3.playerStart();
    //cpu3.displayCards();

    sleep_until(system_clock::now() + seconds(1));

    firstRoundFlop();
    cout << endl;

    secondRoundTurn();
    cout << endl;

    thirdRoundRiver();
    cout << endl;

    player.matrixOfUsedCards();


    return 0;
}

