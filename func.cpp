#include "func.h"
#include<Novice.h>
#include"map.h"


extern char keys[256] = { 0 };
extern char preKeys[256] = { 0 };
void Q(int a, int b, int c, int d, int e, int f, int g, int h, int i) {
	Novice::DrawQuad(a, b, a + c, b, a, b + d, a + c, b + d, e, f, g, h, i, WHITE);
}
void OBJ_Q(OBJ a, int b, int c, int d, int e, int f) {
	Q(a.pos.x, a.pos.y, a.size.x, a.size.y, b, c, d, e, f);
};
void OBJ_Q(OBJ a, int b, int c, int d, int e, int f, int g, int h) {
	Q(a.pos.x + g, a.pos.y + h, a.size.x, a.size.y, b, c, d, e, f);
};