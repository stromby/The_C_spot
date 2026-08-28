#include <stdio.h>
#include <unistd.h>

int hm_strcmp(char *str1, char *str2);

int main() {

	char bone[20], type[20], food[20];

	scanf("%s%s%s", bone, type, food);

	if (hm_strcmp(bone, "vertebrado") == 0)
	{
		if (hm_strcmp(type, "ave") == 0)
		{
			if (hm_strcmp(food, "carnivoro") == 0)
				printf("aguia");
			else
				printf("pomba");
		}
		else
		{
			if (hm_strcmp(food, "onivoro") == 0)
				printf("homem");
			else
				printf("vaca");
		}
	}
	else
	{
		if (hm_strcmp(type, "inseto") == 0)
		{
			if (hm_strcmp(food, "hematofago") == 0)
				printf("pulga");
			else
				printf("lagarta");
		}
		else
		{
			if (hm_strcmp(food, "hematofago") == 0)
				printf("sanguessuga");
			else
				printf("minhoca");
		}
	}

	printf("\n");

    return 0;
}

int hm_strcmp(char *str1, char *str2)
{
	while(*str1 && *str2 &&  *str1 == *str2)
	{
		str1++;
		str2++;
	}

	return (*str1 - *str2);
}