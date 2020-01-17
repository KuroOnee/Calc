#include "calc.h"

void sub(struct complex f, struct complex s, struct complex *r){
	r -> real = f.real - s.real;
	r -> img = f.img - s.img;
};
