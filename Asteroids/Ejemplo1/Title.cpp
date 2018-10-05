#include <raylib.h>
#include "Screens.h"

void InitTitleScreen() {
	framesCounter = 0;
	finishScreen = 0;
}
void UpdateTitleScreen() {
	if (IsKeyPressed(KEY_ENTER) || IsGestureDetected(GESTURE_TAP))
	{
		finishScreen = GAMEPLAY;
	}
}
void DrawTitleScreen() {
	DrawRectangle(0, 0, screenWidth, screenHeight, RED);
	DrawText("MENU", 20, 20, 40, DARKGREEN);
}
int FinishTitleScreen(void) {
	return finishScreen;
}