// Raylib docs/cheatsheet
// https://www.raylib.com/cheatsheet/cheatsheet.html

#include <raylib.h>

#define SCREEN_WIDTH (800)
#define SCREEN_HEIGHT (450)

#define FONT_SIZE 20
#define TEXT "OMG! IT WORKS!"


int main() {
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, TEXT);
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        // do your drawing here

        DrawTriangle(
            {SCREEN_WIDTH / 4,     3 * SCREEN_HEIGHT / 4},  // point a
            {3 * SCREEN_WIDTH / 4, 3 * SCREEN_HEIGHT / 4},  // point b
            {SCREEN_WIDTH / 2,     SCREEN_HEIGHT / 4    },  // point c
            BLUE                                            //  color
        );


        // output some text

        const Vector2 text_size = MeasureTextEx(
            GetFontDefault(), // font
            TEXT,             // text
            FONT_SIZE,        // fontSize
            1                 // spacing
        );
        const int x = SCREEN_WIDTH / 2 - text_size.x / 2;
        const int y = SCREEN_HEIGHT / 2 + text_size.y / 2 + 10;
        DrawText(
            TEXT,      // text
            x,         // posX
            y,         // posY
            FONT_SIZE, // fontSize
            WHITE      // color
        );

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
