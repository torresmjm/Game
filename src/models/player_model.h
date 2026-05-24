#ifndef PLAYER_MODEL_H
#define PLAYER_MODEL_H

#include "raylib.h"

typedef struct {
    Vector2 position;
    Vector2 velocity;
    float speed;
    float radius;
    Color color;
} PLAYER;

PLAYER CreatePlayer(Vector2 starting_position, float speed, float radius, Color color);

void UpdatePlayer(PLAYER *player, float deltaTime);

void DrawPlayer(PLAYER *player);

#endif