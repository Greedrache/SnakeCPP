#pragma once
#include "raylib.h"
#include <vector>

class Snake
{
public:
    void Move();
    void ChangeDirection();
    void GrowUp();

private:
    void AutoDirection();
    int snakeSize;
};