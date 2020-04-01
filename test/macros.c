#include <stdio.h>

#include <math.h>

//first
#define SUM_MASS for(int count = 0; count < (sizeof(mass) / sizeof(int)); count++) sum+=mass[count]
#define SHOW_MASS for(int count = 0; count < (sizeof(mass) / sizeof(int)); count++) printf("%i\n", mass[count])

//second
#define S_SQUARE(side) printf("%s%.f\n", "S of the Square: ", pow(side, 2))
#define S_RECTANGLE(side_one, side_two) printf("%s%.f\n", "S of the Rectangle: ", side_one * side_two)
#define S_CIRCLE(radius) printf("%s%f\n", "S of the Circle: ", (M_PI * pow(radius, 2)))


int main()
{

	int mass[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	float sum = 0, uside1 = 0, uside2 = 0, uradius = 0;

	printf("%s\n", "First");

	#ifdef SUM_MASS

	SUM_MASS;

	printf("%.f\n", sum);

	printf("\n");

	#else

	printf("%s\n", "Constant SUM_MASS has been not defined.");

	#endif

	#ifdef SHOW_MASS

	SHOW_MASS;

	#else

	printf("%s\n", "Constant SHOW_MASS has been not defined.");

	#endif

	printf("%s\n", "Second");

	#ifdef S_SQUARE

	printf("%s\n", "Enter side of the Square...");

	scanf("%f", &uside1);

	S_SQUARE(uside1);

	#else

	printf("%s\n", "Constant S_SQUARE has been not defined.");

	#endif

	#ifdef S_RECTANGLE

	printf("%s\n", "Enter side of the Reactangle one...");

	scanf("%f", &uside1);

	printf("%s\n", "Enter side of the Reactangle two...");

	scanf("%f", &uside2);

	S_RECTANGLE(uside1, uside2);

	#else

	printf("%s\n", "Constant S_RECTANGLE has been not defined.");

	#endif

	#ifdef S_CIRCLE

	printf("%s\n", "Enter radius of the Circle...");

	scanf("%f", &uradius);

	S_CIRCLE(uradius);

	#else

	printf("%s\n", "Constant S_CIRCLE has been not defined.");

	#endif

	return 0;
}
