正则表达式匹配

请实现一个函数用来匹配包括'.'和'*'的正则表达式。
模式中的字符'.'表示任意一个字符，而'*'表示它前面的字符可以出现任意次（包含0次）。
在本题中，匹配是指字符串的所有字符匹配整个模式。
例如，字符串"aaa"与模式"a.a"和"ab*ac*a"匹配，但是与"aa.a"和"ab*a"均不匹配

算法：主要重点在等于'*'，因为'.'就默认等于了。

str和pattern同时遍历完则为真
str没有遍历完，pattern遍历完了，为假

如果当前字符pattern下一个字符不是‘*’

当前字符str如果相等的话或者patter == '.'(默认相等)
return match(str + 1, pattern + 1)；
否则为假

如果当前字符是'*'；

如果当前的str==pattern的话
那么可能匹配0次或者多次return mach(str, pattern + 2) || mach(str+1,pattern)

不相等的话直接从下一个开始匹配

return match(str,pattern+2

class Solution {
public:
	bool match(char* str, char* pattern)//pattern
	{
		if (*str == '\0'&&*pattern == '\0')
			return true;
		if (*str != '\0'&&*pattern == '\0')
			return false;
		if (*(pattern + 1) != '*')
		{
			if (*str == *pattern || (*str != '\0'&&*pattern == '.'))
			{
				return match(str + 1, pattern + 1);
			}
			else
				return false;
		}
		else//第二个是*
		{
			if (*str == *pattern || (*str != '\0'&&*pattern == '.'))
			{
				return match(str, pattern + 2) || match(str + 1, pattern);
				//如果相等的话则会匹配0次，或者多次
			}
			else
			{
				return match(str, pattern + 2);//第一个完全不相等,默认匹配0次，从第二个开始匹配
			}
		}
	}
};

