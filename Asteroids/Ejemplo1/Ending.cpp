#include <raylib.h>
#include "Screens.h"

void InitEndingScreen() {
	framesCounter = 0;
	finishScreen = 0;
}
void UpdateEndingScreen() {
	if (IsKeyPressed(KEY_ENTER) || IsGestureDetected(GESTURE_TAP))
	{
		currentScreen = TITLE;
	}
}
void DrawEndingScreen() {
	DrawRectangle(0, 0, screenWidth, screenHeight, BLUE);
}
int FinishEndingScreen(void) {
	return finishScreen;
}