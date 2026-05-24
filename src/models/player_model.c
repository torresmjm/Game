#include "player_model.h"

PLAYER CreatePlayer(Vector2 starting_position, float speed, float radius, Color color) {
    PLAYER new_player = {0};
    new_player.position = starting_position;
    new_player.speed = speed;
    new_player.radius = radius;
    new_player.color = color;

    return new_player;
}

void UpdatePlayer(PLAYER *player, float deltaTime) {
    player -> position.x += player -> velocity.x * deltaTime;
    player -> position.y += player -> velocity.y * deltaTime;
}

void DrawPlayer(PLAYER *player) {
    DrawCircleV(player -> position, player -> radius, player -> color);
}