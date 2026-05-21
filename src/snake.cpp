#include "snake.h"

Snake::Snake()
{
    body = {Vector2{500, 750}, Vector2{480, 750}, Vector2{460, 750}};
    direction = Vector2{20, 0};
}

void Snake::Draw()
{
    for (size_t i = 0; i < body.size(); i++)
    {
        Color farbe = (i == 0) ? LIME : GREEN;
        DrawRectangle(body[i].x, body[i].y, 18, 18, farbe);
    }
}

void Snake::Move()
{
    Vector2 nextHead = Vector2{body[0].x + direction.x, body[0].y + direction.y};
    body.insert(body.begin(), nextHead);
    body.pop_back();
}

void Snake::ChangeDirection(Vector2 newDirection)
{
    direction = newDirection;
}

void Snake::GrowUp()
{
    Vector2 nextHead = Vector2{body[0].x + direction.x, body[0].y + direction.y};
    body.insert(body.begin(), nextHead);
}
