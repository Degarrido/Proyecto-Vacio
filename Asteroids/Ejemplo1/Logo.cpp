#include <raylib.h>
#include "Screens.h"

void InitLogoScreen() {

	framesCounter = 0;
	finishScreen = 0;
}
void UpdateLogoScreen() {
	framesCounter++;
	if (framesCounter > 120)
	{
		finishScreen = TITLE;
	}
}
void DrawLogoScreen() {
	DrawText("ASTEROIDS", 350, 220, 20, GRAY);
}

int FinishLogoScreen() {
	return finishScreen;
}