#ifndef GAME_H
#define GAME_H

class Game {
public:
    void start();
    void update();
    void render();

private:
    // Add private member variables to manage game state
    int score;
    bool isRunning;
};

#endif // GAME_H