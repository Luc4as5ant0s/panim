#include <stdio.h>
#include <raylib.h>
int main () {
  InitWindow(800, 600, "Panim");

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(RED);
    EndDrawing();
  } 
  CloseWindow();
  return 0;
}