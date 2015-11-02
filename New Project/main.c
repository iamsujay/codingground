#include <stdio.h>
char t[9], i, j;
void display_board()
{
	for(i=1;i<10;i++)
	{
		printf("  %c  ",t[i]);
		if(i%3 != 0)
			printf("|");
		else
		{
			printf("\n");
			if(i==9)
				break;
			for(j=1;j<4;j++)
			{
				printf("_____");
				if(j%3 != 0)
					printf("|"); 
			}
			printf("\n");
		} 
	}
}
void ini()
{
	for(i=1;i<=9;i++)
	{
		t[i] = i+48;
	}
}
main()
{
	ini();
	display_board();
}
