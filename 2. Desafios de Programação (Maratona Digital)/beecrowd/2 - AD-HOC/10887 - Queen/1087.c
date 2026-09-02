#include <stdio.h>


int diagonal_q2(int x1, int y1, int x2, int y2)
{
	while (x1 <= 8 && y2 <= 8)
	{
		if (x1 == x2 && y1 == y2)
			return (1);
		x1++;
		y2++;
	}
	return (0);
}

int diagonal_q4(int x1, int y1, int x2, int y2)
{
	while (x1 >= 0 && y2 >= 0)
	{
		if (x1 == x2 && y1 == y2)
			return (1);
		x1--;
		y2--;
	}
	return (0);
}

int diagonal_q1(int x1, int y1, int x2, int y2)
{
	while (x1 <= 8 && y2 >= 0)
	{
		if (x1 == x2 && y1 == y2)
			return (1);
		x1++;
		y2--;
	}
	return (0);
}

int diagonal_q3(int x1, int y1, int x2, int y2)
{
	while (x1 >= 0 && y2 <= 8)
	{
		if (x1 == x2 && y1 == y2)
			return (1);
		x1--;
		y2++;
	}
	return (0);
}


int main()
{
	int x1, y1, x2, y2;

	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

	while (1)
	{
		if (x1 == x2 && y1 == y2)
			printf("0\n");
		else if(x1 == x2 || y1 == y2 || diagonal_q1(x1, y1, x2, y2) || diagonal_q2(x1, y1, x2, y2) || diagonal_q3(x1, y1, x2, y2) || diagonal_q4(x1, y1, x2, y2))
			printf("1\n");
		else
			printf("2\n");

		fflush(stdout);

		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

		if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0)
			return (0);
	}

    return 0;
}