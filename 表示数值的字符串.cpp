��ʾ��ֵ���ַ���

��Ŀ����
��ʵ��һ�����������ж��ַ����Ƿ��ʾ��ֵ������������С������
���磬�ַ���"+100", "5e2", "-123", "3.1416"��"-1E-16"����ʾ��ֵ�� 
����"12e", "1a3.14", "1.2.3", "+-5"��"12e+4.3"������

//�㷨��������˼ά���������ҷ��ϵ��ַ�������ô���ܲ��Ǻܺ����֣���ô�����в����ϵ��ų����Ϳ�����

//�����ַ����� ���ܳ���'e','E','+','-','.'

1.������'e' || 'E'
e�����������Ļ���û�о��Ǵ��󣬻���e����������Ҳ�Ǵ��

2.�������˼Ӽ���
1.�ڶ��γ����Ҳ��Ǹ���e����Ϊ��
2.��һ�γ��֣������������ַ���Ҳ����e����Ϊ��

3.�����˵�
���������λ�����e������Ϊ��

4.��������Ϊ��


����ѭ����Ϊ�档
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
					return false;//eΪ���һ���ַ�
				if (isE)
					return false;
				isE = true;
			}
			else if (string[i] == '+' || string[i] == '-')
			{
				if (hasdev&&string[i - 1] != 'e'&&string[i - 1] != 'E')//�ڶ��γ��ֱ�����e����
					return false;
				if (!hasdev&&i>0 && string[i - 1] != 'e'&&string[i - 1] != 'E')//���ǵ�һ��
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