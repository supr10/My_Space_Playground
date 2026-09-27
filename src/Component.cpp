//
// Created by bazin on 9/16/2026.
//

#include "Component.h"

Component::Component(const Vector2 pos, const Vector2 vel, const int mas, const Color col, const int rad)
{
    position = pos;
    velocity = vel;
    color = col;
    mass = mas;
    radius = rad;
}

void Component::Display() const
{
    DrawCircleV(position, static_cast<float>(radius), color);
}

void Component::UpdatePosition()
{
    position.x+=velocity.x;
    position.y+=velocity.y;
}