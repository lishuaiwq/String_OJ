������ʽƥ��

��ʵ��һ����������ƥ�����'.'��'*'��������ʽ��
ģʽ�е��ַ�'.'��ʾ����һ���ַ�����'*'��ʾ��ǰ����ַ����Գ�������Σ�����0�Σ���
�ڱ����У�ƥ����ָ�ַ����������ַ�ƥ������ģʽ��
���磬�ַ���"aaa"��ģʽ"a.a"��"ab*ac*a"ƥ�䣬������"aa.a"��"ab*a"����ƥ��

�㷨����Ҫ�ص��ڵ���'*'����Ϊ'.'��Ĭ�ϵ����ˡ�

str��patternͬʱ��������Ϊ��
strû�б����꣬pattern�������ˣ�Ϊ��

�����ǰ�ַ�pattern��һ���ַ����ǡ�*��

��ǰ�ַ�str�����ȵĻ�����patter == '.'(Ĭ�����)
return match(str + 1, pattern + 1)��
����Ϊ��

�����ǰ�ַ���'*'��

�����ǰ��str==pattern�Ļ�
��ô����ƥ��0�λ��߶��return mach(str, pattern + 2) || mach(str+1,pattern)

����ȵĻ�ֱ�Ӵ���һ����ʼƥ��

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
		else//�ڶ�����*
		{
			if (*str == *pattern || (*str != '\0'&&*pattern == '.'))
			{
				return match(str, pattern + 2) || match(str + 1, pattern);
				//�����ȵĻ����ƥ��0�Σ����߶��
			}
			else
			{
				return match(str, pattern + 2);//��һ����ȫ�����,Ĭ��ƥ��0�Σ��ӵڶ�����ʼƥ��
			}
		}
	}
};

