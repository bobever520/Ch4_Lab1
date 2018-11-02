#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define size 7

int main()
{
	int face, roll;
	int f[size] = { 0 };

	srand(time(NULL));

	for (roll = 1; roll <= 6000; roll++)
	{
		face = 1 + rand() % 6;

		f[face] = f[face]++;
	}

	printf("%s%17s\n", "Face", "f");

	for (face = 1; face < size; face++)
		printf("%4d%17d\n", face, f[face]);

	system("pause");

	return 0;

}