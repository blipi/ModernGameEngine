#pragma once

#include "Updater.hpp"
#include "core.hpp"

class Window;
class Program;

class Game : public Core::Updater
{
public:
    Game(Window* window);

    virtual int update() override;

    void initializeGL();
    void onResize(int width, int height);
    void onMouseMove(double x, double y, uint8_t mouse);
    void draw();

private:
    Window* _window;
    Program* _program;

    double xRot;
    double yRot;
    double zRot;

    double lastX;
    double lastY;
};
