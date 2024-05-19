#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXSIZE 10

int main()
{
	const char pass[MAXSIZE] = {"password"};
	int x,y;
	y = strlen(pass) - 2;  // Password length without first and last index
	x = strlen(pass) - 1; 
	char sort[2] = ""; 
	char temp[y];
	char comb[strlen(pass)];

	sort[0] = pass[0];
	sort[1] = pass[x];

	for(int i = 1; i <= strlen(pass) - 2; i++)
	{
		temp[i] = pass[i]; 
		if(i == strlen(pass) -2)
		{
			for(int j = 1; j <= 1; j++)
			{
				comb[0] = pass[0];
				comb[strlen(pass) - 1] = pass[strlen(pass) - 1];

				for(int k = 0; k <= strlen(pass) - 1; k++)
				{
					if(k == 0)
					{
						comb[k] = pass[0];

						printf("%c", comb[k]);
					} 
					else if(k >= 1 && k != strlen(pass) - 1)
					{
						comb[k] = '*';

						printf("%c", comb[k]);
					}
					else
					{
						comb[k] = pass[7];

						printf("%c", comb[k]);
					}
				}
			}
		}	
	}
}
