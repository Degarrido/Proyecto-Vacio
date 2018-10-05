#include <raylib.h>
#include "Screens.h"

void InitCreditsScreen() {
	framesCounter = 0;
	finishScreen = 0;
}
void UpdateCreditsScreen() {
	if (IsKeyPressed(KEY_ENTER) || IsGestureDetected(GESTURE_TAP))
	{
		currentScreen = TITLE;
	}
}
void DrawCreditsScreen() {
	DrawText("THANKS FOR PLAYING", 350, 220, 20, ORANGE);
	DrawRectangle(0, 0, screenWidth, screenHeight, BLUE);
}
int FinishCreditsScreen(void) {
	return finishScreen;
}