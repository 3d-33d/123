#include <stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	int n = 0;
	int count = 0;
	for(i = 0;i <= 5;i++)
	{
		for(j = 0; j <= 5; j++)
		{
			for(k = 0;k <= 5; k++)
			{
				for(n = 0; n <= 5; n++)
				{
					if(i+j+k+n <= 5)
					{
						count++;
					}
				}
			}
		}
	}
	printf("%d\n",count);
	return 0;
}