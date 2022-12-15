#pragma once
const int WIDE = 1280;
const int HIGH = 720;
typedef struct Vector2 {
	float x;
	float y;
}Vector2;
typedef struct OBJ {
	Vector2 pos;
	Vector2 fpos;
	Vector2 size;
	float speed;
}OBJ;
typedef struct BULLET {
	OBJ bullet;
	bool IsBulletShot;
	int timer;
}BULLET;
typedef enum scene {
	TITLE,
	TUTORIAL,
	STAGESLECT,
	LODEING,
	GAME,
	CLEAR,
	GAMEOVER
}scene;
