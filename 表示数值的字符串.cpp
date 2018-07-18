表示数值的字符串

题目描述
请实现一个函数用来判断字符串是否表示数值（包括整数和小数）。
例如，字符串"+100", "5e2", "-123", "3.1416"和"-1E-16"都表示数值。 
但是"12e", "1a3.14", "1.2.3", "+-5"和"12e+4.3"都不是

//算法采用逆向思维，它让你找符合的字符串，那么可能不是很好下手，那么把所有不符合的排除不就可以了

//首先字符串中 可能出现'e','E','+','-','.'

1.当出现'e' || 'E'
e后面是其他的或者没有就是错误，或者e出现了两次也是错的

2.当遇见了加减号
1.第二次出现且不是跟在e后面为错
2.第一次出现，但不是在首字符，也不是e后面为错

3.遇见了点
出现了两次或者在e后面则为错

4.不是数字为错


跳出循环就为真。
class Solution {
public:
	bool isNumeric(char* string)
	{
		if (string == NULL)
			return false;
		bool haspoint = false;
		bool hasdev = false;
		bool isE = false;
		for (int i = 0; i<strlen(string); i++)
		{
			if (string[i] == 'e' || string[i] == 'E')
			{
				if (i == strlen(string) - 1)
					return false;//e为最后一个字符
				if (isE)
					return false;
				isE = true;
			}
			else if (string[i] == '+' || string[i] == '-')
			{
				if (hasdev&&string[i - 1] != 'e'&&string[i - 1] != 'E')//第二次出现必须在e后面
					return false;
				if (!hasdev&&i>0 && string[i - 1] != 'e'&&string[i - 1] != 'E')//不是第一次
					return false;
				hasdev = true;
			}
			else if (string[i] == '.')
			{
				if (isE || haspoint)
					return false;
				haspoint = true;
			}
			else if (string[i]<'0' || string[i]>'9')
				return false;
		}
		return true;
	}
};