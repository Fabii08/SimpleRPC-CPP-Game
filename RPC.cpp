/*
Copyright © 2024 https://github.com/Fabii08?tab=repositories  
All rights reserved.  

Unauthorized copying, modification, or distribution of this file,  
via any medium, is strictly prohibited.  

DO NOT DISTRIBUTE.
*/

#include <iostream>
#include <random> // Für Zufallszahlen
#include <ctime>  // Für die Initialisierung des Zufallsgenerators


using namespace std;
int main() {
cout << "Welcome to the Rock, Paper, Scissors Game!" << std::endl;
    int i = 0;
    int score = 0;
    while (i < 5) {
    // Initialisiere den Zufallsgenerator mit der aktuellen Zeit
   mt19937 rng(std::time(0));

    // Definiere den Bereich der Zufallszahl 
   uniform_int_distribution<int> dist(1, 3);

    // Generiere eine Zufallszahl
    int random_number = dist(rng);


int rpc_number;

cout << "Please choose one of the following options:" << std::endl;
cout << "1) Rock" << std::endl;
cout << "2) Paper" << std::endl;
cout << "3) Scissors" << std::endl;
cout << "Enter your choice: ";
cin >> rpc_number;



if (random_number == rpc_number) {
    cout << "It's a tie!" << std::endl;
} else if ((rpc_number == 1 && random_number == 3) || (rpc_number == 2 && random_number == 1) || (rpc_number == 3 && random_number == 2)) {
    cout << "You win!" << std::endl;
    score++;
} else {
    cout << "You lose!" << std::endl;
}



if (random_number == 1) {
    cout << "The computer chose: Rock" << std::endl;
} else if (random_number == 2) {
    cout << "The computer chose: Paper" << std::endl;
} else if (random_number == 3) {
    cout << "The computer chose: Scissors" << std::endl;
}  
i++;
    }
cout << "Your final score is: " << score << std::endl;
    return 0;
}

