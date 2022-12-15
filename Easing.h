#pragma once
#include"map.h"
void EASINGPOSITION_A(OBJ& a, float b, Vector2 c,float t);
class EASINGPOSITION
{
public:
	static void NOMAL(OBJ& a, float b, Vector2 c, float& t);
	static void IN(OBJ& a, float b, Vector2 c, float& t);
	static void OUT(OBJ& a, float b, Vector2 c, float& t);
	static void IN_OUT(OBJ& a, float b, Vector2 c, float& t);

};

