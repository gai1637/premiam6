#pragma once
#include"player.h"
extern char keys[256];
extern char preKeys[256];
// <summary>MyMethod is a method in the MyClass class.
/// <para>
/// 左上x
/// 左上y
/// 横幅
/// 縦幅
/// 画像左上x
/// 画像左上y
/// 画像横サイズ
/// 画像縦サイズ
/// グラフハンドル
/// </para>
/// <seealso cref="MyClass::MyMethod2"/>
/// </summary>
void Q(int a, int b, int c, int d, int e, int f, int g, int h, int i);
// <summary>MyMethod is a method in the MyClass class.
/// <para>
/// OBJ
/// 画像左上x
/// 画像左上y
/// 画像横サイズ
/// 画像縦サイズ
/// グラフハンドル
/// </para>
/// <seealso cref="MyClass::MyMethod2"/>
/// </summary>
void OBJ_Q(OBJ a, int b, int c, int d, int e, int f);
void OBJ_Q(OBJ a, int b, int c, int d, int e, int f, int g, int h);