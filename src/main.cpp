#include <raylib.h>
#include <iostream>
#include "snake.h"

using namespace std;

int main()
{
    InitWindow(1000, 1500, "Greeake");
    SetTargetFPS(60);

    Snake snake;

    float lastUpdateTime = 0;

    while (!WindowShouldClose())
    {

        // --- 1. INPUT (Tastatur abfragen) ---
        if (IsKeyPressed(KEY_UP))
            snake.ChangeDirection({0, -20});
        if (IsKeyPressed(KEY_DOWN))
            snake.ChangeDirection({0, 20});
        if (IsKeyPressed(KEY_LEFT))
            snake.ChangeDirection({-20, 0});
        if (IsKeyPressed(KEY_RIGHT))
            snake.ChangeDirection({20, 0});

        // --- 2. UPDATE (Zeitsteuerung für die Bewegung) ---
        if (GetTime() - lastUpdateTime >= 0.2)
        { // Alle 0.2 Sekunden bewegen
            snake.Move();
            lastUpdateTime = GetTime();
        }

        // --- 3. DRAWING (Zeichnen) ---
        BeginDrawing();
        ClearBackground(BLACK); // Hintergrund sauber wischen

        snake.Draw(); // Hier rufen wir die public Funktion der Schlange auf!

        EndDrawing();
    }

    CloseWindow();
    return 0;
}