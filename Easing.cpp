#include "Easing.h"
#define _USE_MATH_DEFINES
#include<math.h>
void EASINGPOSITION_A(OBJ& a, float b, Vector2 c, float t) {
	a.pos.x = (1.0f - t) * a.fpos.x + t * c.x;
	a.pos.y = (1.0f - t) * a.fpos.y + t * c.y;
};
void EASINGPOSITION::NOMAL(OBJ& a, float b, Vector2 c, float& t) {
	t += b;
	EASINGPOSITION_A(a, b, c, t);
};
void EASINGPOSITION::IN(OBJ& a, float b, Vector2 c, float& t) {
	t += b;
	EASINGPOSITION_A(a, b, c, t * t);
};
void EASINGPOSITION::OUT(OBJ& a, float b, Vector2 c, float& t) {
	t += b;
	EASINGPOSITION_A(a, b, c, 1.f - powf(1.f - t, 3.f));
};
void EASINGPOSITION::IN_OUT(OBJ& a, float b, Vector2 c, float& t) {
	t += b;
	EASINGPOSITION_A(a, b, c, -(cosf(M_PI * t) - 1.f) / 2.f);
};
