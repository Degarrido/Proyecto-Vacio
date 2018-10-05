#pragma once
#include "raylib.h"
#include <iostream>

using namespace std;

enum GameScreen {
	LOGO = 0,
	TITLE,
	GAMEPLAY,
	CREDITS,
	ENDING
};
extern GameScreen currentScreen;
int framesCounter;
int finishScreen;
int screenWidth;
int screenHeight;

void InitLogoScreen(void);
void UpdateLogoScreen(void);
void DrawLogoScreen(void);
int FinishLogoScreen(void);

void InitTitleScreen(void);
void UpdateTitleScreen(void);
void DrawTitleScreen(void);
int FinishTitleScreen(void);

void InitGameplayScreen(void);
void UpdateGameplayScreen(void);
void DrawGameplayScreen(void);
int FinishGameplayScreen(void);

void InitCreditsScreen(void);
void UpdateCreditsScreen(void);
void DrawCreditsScreen(void);
int FinishCreditsScreen(void);

void InitEndingScreen(void);
void UpdateEndingScreen(void);
void DrawEndingScreen(void);
int FinishEndingScreen(void);




