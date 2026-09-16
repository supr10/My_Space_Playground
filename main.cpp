#include "include/raylib.h"

int main(int argc, char** argv)
{
    InitWindow(800, 600, "My Space Playground");

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("text", 100, 100, 20, BLACK);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}