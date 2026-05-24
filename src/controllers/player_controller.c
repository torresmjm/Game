#include "player_controller.h"
#include "raylib.h"
#include <math.h>

void HandlePlayerInput(PLAYER *player) {
    Vector2 input = {0};

    if (IsKeyDown(KEY_W)) input.y -= 1.0f;
    if (IsKeyDown(KEY_S)) input.y += 1.0f;
    if (IsKeyDown(KEY_A)) input.x -= 1.0f;
    if (IsKeyDown(KEY_D)) input.x += 1.0f;

    float len = sqrtf(input.x * input.x + input.y * input.y);

    if (len > 0.0f) {
        input.x /= len;
        input.y /= len;
    }

    player -> velocity.x = input.x * player -> speed;
    player -> velocity.y = input.y * player -> speed;
}