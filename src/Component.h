//
// Created by bazin on 9/16/2026.
//

#ifndef MY_SPACE_PLAYGROUND_COMPONENT_H
#define MY_SPACE_PLAYGROUND_COMPONENT_H

#include "raylib.h"
#include <string>

class Component
{
public:
    Component() = default;
    Component(Vector2, Vector2, int, Color, int);
    ~Component() = default;

    void Display() const;
    void UpdatePosition();

private:
    Vector2 position{};
    Vector2 velocity{};
    int mass;
    int radius;
    Color color{};


};


#endif //MY_SPACE_PLAYGROUND_COMPONENT_H
