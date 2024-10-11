// Decathlon2024-remade-using-c.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "raylib.h"
#include "Decathlon_100_meters.h"

int main()
{
    float X = 1;
    float Y = 1;
    
    SetTargetFPS(60);
    InitWindow(400, 500, "Alexander Sandberg");
    Sound sound;
    Texture2D  Spirt = LoadTexture("test.png");

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(DARKGRAY);
        DrawTexture(Spirt, X, Y,WHITE);
        DrawRectangle(0, 10, 600, 100, WHITE);

        DrawText(TextFormat("Please enter the competitor's name:" ), 1, 80, 20, BLACK);
        DrawRectangle(0,400, 400, 400, WHITE);
        DrawText(TextFormat("Alexander Sandberg:"), 1, 450, 20, BLACK);
     


        EndDrawing();
     }
 
 

 
    CloseWindow();
    std::string user;
    std::string name;

    std::cout << "Please enter the competitor's name:";
     std::cout << "Select discipline.";
  
    /*
    Select discipline.
1. Decathlon 100 meters. (Measured in seconds)
2. Decathlon 400 meters. (Measured in seconds)
3. Decathlon 110 meters hurdles. (Measured in seconds)
4. Decathlon 1500 meters. (Measured in minutes and seconds)
5. Decathlon Long Jump. (Measured in centimeters)
6. Decathlon High Jump. (Measured in centimeters)
7. Decathlon Pole Vault. (Measured in centimeters)
8. Decathlon Discus Throw. (Measured in meters)
9. Decathlon Javelin Throw. (Measured in meters)
10. Decathlon Shot Put. (Measured in meters)
11. Heptathlon 200 meters.
12. Heptathlon 800 meters.
13. Heptathlon 100 meters hurdles.
14. Heptathlon High Jump.
15. Heptathlon Long Jump.
16. Heptathlon Shot Put.
17. Heptathlon Javelin Throw.

    */
 
    return 0;
}

 