#include <stdio.h>
struct complex
{
	float real;
	float img;
};

void add(struct complex f, struct complex s, struct complex *r){
	r -> real = f.real + s.real;
	r -> img = f.img + s.img;
};
void sub(struct complex f, struct complex s, struct complex *r){
	r -> real = f.real - s.real;
	r -> img = f.img - s.img;
};
void mult(struct complex f, struct complex s, struct complex *r){
	r -> real = ((f.real * s.real) - (f.img * s.img));
	r -> img = ((f.real * s.img) + (f.img * s.real));
};
void div(struct complex f, struct complex s, struct complex *r){
	r -> real = ((f.real * s.real) + (f.img * s.img))/((s.real*s.real)+(s.img*s.img));
	r -> img = ((f.img * s.real) - (f.real * s.img))/((s.real*s.real)+(s.img*s.img));
};

int main ()
{
    int run = 1;
    int menu_selection = 0;
	struct complex first, second, result;
	struct complex *r;
	r = &result;
    do
    {
		printf("1.Add\n2.Sub\n3.Mult\n4.Div\n5.Exit\n");
		scanf("%d",&menu_selection);
		if (menu_selection != 5)
		{
			printf("Enter first number:\n");
			printf("Real: ");
			scanf("%f",&first.real);
			printf("Imaginary: ");
			scanf("%f",&first.img);
			printf("Enter second number:\n");
			printf("Real: ");
			scanf("%f",&second.real);
			printf("Imaginary: ");
			scanf("%f",&second.img);
			switch (menu_selection)
			{
			    case 1:
					add(first,second,r);
					printf("Real:%f\nImaginary:%f\n", result.real,result.img);
					break;
			    case 2:
					sub(first,second,r);
					printf("Real:%f\nImaginary:%f\n", result.real,result.img);
					break;
			    case 3:
					mult(first,second,r);
					printf("Real:%f\nImaginary:%f\n", result.real,result.img);
					break;
			    case 4:
					div(first,second,r);
					printf("Real:%f\nImaginary:%f\n", result.real,result.img);
					break;
				default:
					printf("Error\n");
			}
		}
		else
			run = 0;
    }while(run);
    return 0;
}