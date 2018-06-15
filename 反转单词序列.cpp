反转单词序列

题目描述
牛客最近来了一个新员工Fish，每天早晨总是会拿着一本英文杂志，写些句子在本子上。同事Cat对Fish写的内容颇感兴趣，有一天他向Fish借来翻看，但却读不懂它的意思。例如，“student.a am I”。后来才意识到，这家伙原来把句子单词的顺序翻转了，正确的句子应该是“I am a student.”。Cat对一一的翻转这些单词顺序可不在行，你能帮助他么？

算法：

借助栈的特性去实现，以单词为单位将其压入栈，然后再从栈中弹出就可以了，注意在统计整个单词的时候，不仅仅要str[i] != ' '而且还有i<size因为走到最后没有str[i] == " ",会产生越界
代码：

class Solution {
public:
	string ReverseSentence(string str) {
		string src;
		int i = 0;
		int size = str.size();//不包含/0
		stack<string> s;
		while (i<size)
		{
			string dest;
			while (i<size&&str[i] != ' ')
			{
				dest.push_back(str[i]);
				i++;
			}
			dest.push_back(str[i++]);
			s.push(dest);

		}
		while (!s.empty())
		{
			src += s.top();
			s.pop();
		}
		return src;
	}
};