#include <stdio.h>

void add() {};
void sub(){};
void mult(){};
void div(){};

int main ()
{
    int run = 1;
    int menu_selection = 0;
    do
    {
	printf("1.Add\n2.Sub\n3.Mult\n4.Div\n5.Exit\n");
	scanf("%d",&menu_selection);
	switch (menu_selection)
	{
	    case 1:
		add();
	    case 2:
		sub();
	    case 3:
		mult();
	    case 4:
		div();
	    case 5:
		run = 0;
	    default:
		printf("error");
	}
    }while(run);
    return 0;
}