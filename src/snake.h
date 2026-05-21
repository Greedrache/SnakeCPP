#pragma once
#include "raylib.h"
#include <vector>

class Snake
{
public:
    Snake();

    void Draw();
    void Move();
    void ChangeDirection(Vector2 newDirection); // was ist vector2 warum mit 2 was ist vector?
    void GrowUp();

private:
    std::vector<Vector2> body; // was wird hier gemacht ???
    
    Vector2 direction; // keine ahnung
};