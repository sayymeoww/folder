#include <../include/raylib.h>

// Window Sizes
const int width = 800;
const int height = 600;

void Program();

// Main Methods
void Init() {
    InitWindow(width, height, "window");
    SetTargetFPS(60);
}
bool Check() { return !WindowShouldClose(); }
void Loop() {
    BeginDrawing();
    Program();
    EndDrawing();
}
void End() { CloseWindow(); }

// Program Code
void Program() {
    DrawText("Meow!", width / 2.5, height / 2.5, 80, GRAY);
    ClearBackground(RAYWHITE);
}

// Run Method
void Run() {
    Init();
    while (Check()) Loop();
    End();
}

int main(void) {
    Run();
    return 0;
}