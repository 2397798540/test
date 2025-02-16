#include "snake.h"

Snake::Snake() {
    // Initialize the snake with a starting position and length
    body.push_back({0, 0}); // Starting position
    length = 1;
}

void Snake::move(int direction) {
    // Move the snake in the specified direction
    Position head = body.front();
    switch (direction) {
        case UP:
            head.y--;
            break;
        case DOWN:
            head.y++;
            break;
        case LEFT:
            head.x--;
            break;
        case RIGHT:
            head.x++;
            break;
    }
    body.push_front(head); // Add new head position
    if (body.size() > length) {
        body.pop_back(); // Remove the tail if the snake is longer than its length
    }
}

void Snake::grow() {
    // Increase the length of the snake
    length++;
}

std::deque<Position> Snake::getPosition() const {
    return body; // Return the current positions of the snake's body
}