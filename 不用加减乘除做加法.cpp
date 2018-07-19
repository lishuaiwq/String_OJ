不用加减乘除做加法

写一个函数，求两个整数之和，要求在函数体内不得使用 + 、 - 、*、 / 四则运算符号。

1.两个异或则是两个数字单纯相加不算进位
2.两个相与然后左移则是求出每一个对应的进位
然后将其相加，

循环上述步骤直到进位为0则加出来才是最后a+b的结果

class Solution {
public:

	int Add(int num1, int num2)
	{
		while (num2 != 0)
		{
			int a = num1^num2;//求和不算进位
			int b = (num1&num2) << 1;
			num1 = a;
			num2 = b;
		}
		//跳出来就没有进位了
		return num1;
	}
};