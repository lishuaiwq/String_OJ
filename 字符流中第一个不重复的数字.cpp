�ַ����е�һ�����ظ����ַ�

��ʵ��һ�����������ҳ��ַ����е�һ��ֻ����һ�ε��ַ���
���磬�����ַ�����ֻ����ǰ�����ַ�"go"ʱ����һ��ֻ����һ�ε��ַ���"g"��
���Ӹ��ַ����ж���ǰ�����ַ���google"ʱ����һ��ֻ����һ�ε��ַ���"l"��

�㷨�����������ַ����е��⣬���Ǵ�����������ַ������ظ�����Ӧ�Ľ����

������㷨˼����ʹ��set��list����������set���������ظ���Ԫ�صģ��ܲ��뵽set�����һ���ǲ��ظ���
����Ͳ��list���棬�������ʧ����ɾ��list�е�Ԫ�أ���󷵻�list��һ�����ǵ�һ�γ��ֲ��ظ���Ԫ��

class Solution
{
public:
	list<char> list;
	set<char> s;
	//Insert one char from stringstream
	void Insert(char ch)
	{
		pair<set<char>::iterator, bool> ret;
		ret = s.insert(ch);//����
		if (ret.second == true)//����ɹ�
		{
			list.push_back(ch);
		}
		else
		{
			list.remove(ch);
		}
	}
	//return the first appearence once char in current stringstream
	char FirstAppearingOnce()
	{
		if (list.empty())
			return '#';
		return list.front();
	}
};

