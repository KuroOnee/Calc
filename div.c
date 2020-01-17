#include "calc.h"

void div(struct complex f, struct complex s, struct complex *r){
	r -> real = ((f.real * s.real) + (f.img * s.img))/((s.real*s.real)+(s.img*s.img));
	r -> img = ((f.img * s.real) - (f.real * s.img))/((s.real*s.real)+(s.img*s.img));
};
