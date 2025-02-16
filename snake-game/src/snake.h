#ifndef SNAKE_H
#define SNAKE_H

#include <vector>
#include <utility>

class Snake {
public:
    Snake(int initialLength);
    void move(int direction);
    void grow();
    std::vector<std::pair<int, int>> getPosition() const;

private:
    std::vector<std::pair<int, int>> body; // Snake's body represented as a vector of (x, y) positions
    int direction; // Current direction of the snake
};

#endif // SNAKE_H