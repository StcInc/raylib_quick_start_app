// #include "raylib.h"

#include <raylib.h>
#include <stdlib.h>

#define SCREEN_WIDTH (800)
#define SCREEN_HEIGHT (450)

#define TEXT "OMG! IT WORKS!"


int main() {
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, TEXT);
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        // do your drawing here
        DrawTriangle(
            {SCREEN_WIDTH / 4, 3 * SCREEN_HEIGHT / 4},  // point a
            {3 * SCREEN_WIDTH / 4, 3 * SCREEN_HEIGHT / 4},  // point b
            {SCREEN_WIDTH / 2, SCREEN_HEIGHT / 4}, // point c
            BLUE       //  color
        );
        // output some text
        const Vector2 text_size = MeasureTextEx(GetFontDefault(), TEXT, 20, 1);
        DrawText(TEXT, SCREEN_WIDTH / 2 - text_size.x / 2, SCREEN_HEIGHT / 2 + text_size.y / 2 + 10, 20, WHITE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
