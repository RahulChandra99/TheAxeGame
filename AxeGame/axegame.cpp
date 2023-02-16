
//Double quotes bcos its an external library and not cpp library
#include "raylib.h"

//x- start top left , y - start top left

int main()
{

    InitWindow(600,600,"The Axe Game");           //Width,Height

    while(!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(WHITE);

        DrawCircle(300,300,25,BLUE);
        EndDrawing();
    }
        

}