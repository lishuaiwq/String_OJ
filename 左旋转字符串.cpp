�����ַ�����

�����������һ����λָ�����ѭ�����ƣ�ROL���������и��򵥵����񣬾������ַ���ģ�����ָ���������������һ���������ַ�����S���������ѭ������Kλ���������������磬�ַ�����S = ��abcXYZdef��, Ҫ�����ѭ������3λ��Ľ��������XYZdefabc�����ǲ��Ǻܼ򵥣�OK���㶨����

�㷨��

1.��Ҫ�������ռ䡣�������ƶ���nλ�ַ�������������Ȼ��ԭ�ռ���ַ���ͬһ��ǰŲ����Ȼ�󽫱�����ַ�������ԭ�ַ������档

����㷨�����Լ���ıȽϴ�

class Solution {
public:
	string LeftRotateString(string str, int n) {
		string src;
		int size = str.size();
		int i = 0;
		int m = n;
		while (n--)
		{
			src.push_back(str[i++]);//����ǰn���ַ�
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

2.����˼·

���ַ�������һ�飬���������ַ�����Ȼ����Ҫ���ƶ���λ��ʹ��substr������ȡ�ַ����Ϳ����ˣ���

��ֱţ�ư��������������
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
