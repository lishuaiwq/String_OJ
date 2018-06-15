左旋字符串窜

汇编语言中有一种移位指令叫做循环左移（ROL），现在有个简单的任务，就是用字符串模拟这个指令的运算结果。对于一个给定的字符序列S，请你把其循环左移K位后的序列输出。例如，字符序列S = ”abcXYZdef”, 要求输出循环左移3位后的结果，即“XYZdefabc”。是不是很简单？OK，搞定它！

算法：

1.需要做辅助空间。将我们移动的n位字符串保存起来，然后将原空间的字符串同一往前挪动，然后将保存的字符串续在原字符串后面。

这个算法是我自己想的比较挫

class Solution {
public:
	string LeftRotateString(string str, int n) {
		string src;
		int size = str.size();
		int i = 0;
		int m = n;
		while (n--)
		{
			src.push_back(str[i++]);//保存前n个字符
		}
		int j = 0;

		while (i<size)
			str[j++] = str[i++];
		i = 0;
		while (i<m)
		{
			str[j++] = src[i++];
		}
		return str;
	}
};

2.大神思路

将字符串复制一遍，即有两个字符串，然后需要左移多少位则使用substr函数截取字符串就可以了！！

简直牛逼啊，下面给出代码
class Solution {
public:
	string LeftRotateString(string str, int n) {
		int len = str.length();
		if (len == 0) return "";
		n = n % len;
		str += str;
		return str.substr(n, len);
	}
};
