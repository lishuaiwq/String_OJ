字符流中第一个不重复的字符

请实现一个函数用来找出字符流中第一个只出现一次的字符。
例如，当从字符流中只读出前两个字符"go"时，第一个只出现一次的字符是"g"。
当从该字符流中读出前六个字符“google"时，第一个只出现一次的字符是"l"。

算法：对于这种字符流中的题，就是处理它输入的字符，返回给出对应的结果。

此题的算法思想是使用set和list两个容器，set用来过滤重复的元素的，能插入到set里面的一定是不重复的
，则就插进list里面，如果插入失败则删除list中的元素，最后返回list第一个就是第一次出现不重复的元素

class Solution
{
public:
	list<char> list;
	set<char> s;
	//Insert one char from stringstream
	void Insert(char ch)
	{
		pair<set<char>::iterator, bool> ret;
		ret = s.insert(ch);//插入
		if (ret.second == true)//插入成功
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

