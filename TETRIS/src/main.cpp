#include <raylib.h>


int main() 
{
    InitWindow(300,600, "TETRIS");
    SetTargetFPS(60);

    while(WindowShouldClose() == false) 
    {
        BeginDrawing();
        EndDrawing();
    }

    CloseWindow();
}