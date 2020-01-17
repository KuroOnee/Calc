#pragma once
#ifndef Calc_h
#define Calc_h
struct complex
{
	float real;
	float img;
};
void add(struct complex f, struct complex s, struct complex *r);
void sub(struct complex f, struct complex s, struct complex *r);
void mult(struct complex f, struct complex s, struct complex *r);
void div(struct complex f, struct complex s, struct complex *r);
#endif