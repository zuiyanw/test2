#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()        
{                           
//题目名称：猜名次
//题目内容：5位运动员 参加了10米台跳水比赛，有人让他们预测比赛结果：

//A说：B第二，我第三   
//B说：我第二，E第四
//C说：我第一，D第二 
//D说: C最后，我第三
//E说：我第四，A第一
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次	
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if (((b == 2) + (a == 3) == 1) &&
							((b == 2) + (e == 4) == 1) &&
							((c == 1) + (d == 2) == 1) &&
							((c == 5) + (d == 3) == 1) &&
							((e == 4) + (a == 1) == 1)&&((a*b*c*d*e)==120))
							
							printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
					}
				}
			}
		}
	}
	
	return 0;
}