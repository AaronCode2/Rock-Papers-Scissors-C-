#include <iostream>
#include <ctime>

char getUserChoice() {
    
    char choice;
    std::cout << "Rock Papers Scissors Game!\n";

   do {

    std::cout << "Choose one of the following\n";
    std::cout << "--------------------------\n";

    std::cout << "'r' for rock\n";
    std::cout << "'p' for paper\n";
    std::cout << "'s' for scissors\n";

    std::cin >> choice;

   } while (choice != 'r' && choice != 'p' && choice != 's');

    return choice;
}

char getComChoice() {

    srand(time(nullptr));
    int num = rand() % 3 + 1;

    switch(num) {

        case 1: return 'r';
            break;

        case 2: return 'p';
            break;

        case 3: return 's';
            break;

    }

    return 0;
}

void showChoice(char choice) {

    switch(choice) {
        
        case 'r': std::cout << "Rock\n";
            break;

        case 'p': std::cout << "Paper\n";
            break;

        case 's': std::cout << "Scissors\n";
            break;

    }

}

void chooseWinner(char player, char computer) {

    switch(player) {

        case 'r': {
            if(computer == 'r') std::cout << "Its a tie!\n";
            else if(computer == 'p') std::cout << "You lose!\n";
            else std::cout << "Winner winner chicken for dinner!\n";
        } break;

        case 'p': {
            if(computer == 'p') std::cout << "Its a tie!\n";
            else if(computer == 's') std::cout << "You lose!\n";
            else std::cout << "Winner winner chicken for dinner!\n";
        } break;

        case 's': {
            if(computer == 's') std::cout << "Its a tie!\n";
            else if(computer == 'r') std::cout << "You lose!\n";
            else std::cout << "Winner winner chicken for dinner!\n";
        } break;

    }

}

int main() {

    char player;
    char computer;
    bool running = true;
    char continuer;

do {
    player = getUserChoice();
    std::cout << "You choice: ";
    showChoice(player);

    computer = getComChoice();
    std::cout << "Computer choice: ";
    showChoice(computer);

    chooseWinner(player, computer);

    std::cout << "Do you want to continue Y/N: ";
    std::cin >> continuer;

    continuer == 'Y' ? running = true : running = false;

} while(running);

    std::cout << "Ended Process";

    return 0;
}
