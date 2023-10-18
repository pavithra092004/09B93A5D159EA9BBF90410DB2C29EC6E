#include <iostream>

class Player {
public:
    virtual void play() {
        std::cout << "The player is playing cricket." << std::endl;
    }
};

class Batsman : public Player {
public:
    void play() override {
        std::cout << "The batsman is batting." << std::endl;
    }
};

class Bowler : public Player {
public:
    void play() override {
        std::cout << "The bowler is bowling." << std::endl;
    }
};

int main() {
    Batsman batsman;
    Bowler bowler;

    // Call play() for the Batsman
    std::cout << "Batsman: ";
    batsman.play();

    // Call play() for the Bowler
    std::cout << "Bowler: ";
    bowler.play();

    return 0;
}
