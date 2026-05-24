#include "raylib.h"
#include "models/player_model.h"
#include "controllers/player_controller.h"

int main() {

    const int screen_width = 1920;
    const int screen_height = 1080;

    SetConfigFlags(FLAG_WINDOW_UNDECORATED | FLAG_WINDOW_RESIZABLE);
    InitWindow(screen_width, screen_height, "Hello");

    SetTargetFPS(60);
    PLAYER player = CreatePlayer((Vector2){400, 300}, 200.0f, 20.0f, RED);

    while (!WindowShouldClose()) {
        HandlePlayerInput(&player);
        UpdatePlayer(&player, GetFrameTime());
        BeginDrawing();
        
        ClearBackground(WHITE);
        DrawPlayer(&player);
        
        EndDrawing();

    }

    CloseWindow();
}