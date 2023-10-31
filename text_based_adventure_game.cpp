#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

class CaveAdventure {
public:
    CaveAdventure() : playerHealth(100), isGameOver(false) {}

    void start() {
        std::cout << "Welcome to the Cave Adventure!" << std::endl;
        std::cout << "You find yourself at the entrance of a mysterious cave." << std::endl;
        std::cout << "Your goal is to explore the cave and survive." << std::endl;

        while (!isGameOver) {
            std::cout << "\nOptions:" << std::endl;
            std::cout << "1. Go deeper into the cave." << std::endl;
            std::cout << "2. Rest and recover." << std::endl;
            std::cout << "3. Quit the game." << std::endl;
            std::cout << "Choose an option: ";

            int choice;
            std::cin >> choice;

            switch (choice) {
                case 1:
                    exploreCave();
                    break;
                case 2:
                    restAndRecover();
                    break;
                case 3:
                    quitGame();
                    break;
                default:
                    std::cout << "Invalid choice. Try again." << std::endl;
            }
        }

        if (playerHealth <= 0) {
            std::cout << "You ran out of health and didn't survive the cave adventure. Game over!" << std::endl;
        }
        else {
            std::cout << "You chose to quit the game. Thanks for playing!" << std::endl;
        }
    }

private:
    int playerHealth;
    bool isGameOver;

    void exploreCave() {
        int encounter = std::rand() % 3; // Simulate a random encounter

        if (encounter == 0) {
            std::cout << "You encountered a friendly cave dweller. They offer you food and restore your health!" << std::endl;
            playerHealth += 20;
        }
        else if (encounter == 1) {
            std::cout
