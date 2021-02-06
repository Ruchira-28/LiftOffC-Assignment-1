#include <stdio.h>

int main()
{
	float p, c, b, co, m, per;
	
	printf("input marks of five subjects\n");
	scanf("%f %f %f %f %f",&p,&c,&b,&co,&m);
	
	per= (p+c+b+co+m) / 5;
	
	if(per >=90)
	{
	printf("Grade A\n");
	}
	else
	{
		if(per >=80)
		{
			printf("Grade B\n");
		}
		else
		{
			if(per >=70)
			{
				printf("Grade C\n");
			}
			else
			{
				if(per >=60)
				{
					printf("Grade D\n");
				}
				else
				{
					if(per >=50)
					{
						printf("Grade E\n");
					}
					else
					{
						if(per >=40)
						{
							printf("Grade F\n");
						}
					}
				}
			}
		}
	}
return 0;
	}
