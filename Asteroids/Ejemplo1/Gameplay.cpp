#include <raylib.h>
#include "Screens.h"

void InitGameplayScreen() {
	framesCounter = 0;
	finishScreen = 0;
}
void UpdateGameplayScreen() {
	if (IsKeyPressed(KEY_ENTER) || IsGestureDetected(GESTURE_TAP))
	{
		finishScreen = ENDING;
	}
}
void DrawGameplayScreen() {
	DrawRectangle(0, 0, screenWidth, screenHeight, PURPLE);
	DrawText("PRESS ENTER to JUMP to ENDING SCREEN", 130, 220, 20, MAROON);
}
int FinishGameplayScreen(void) {
	return finishScreen;
}