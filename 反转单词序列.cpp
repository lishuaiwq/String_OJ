��ת��������

��Ŀ����
ţ���������һ����Ա��Fish��ÿ���糿���ǻ�����һ��Ӣ����־��дЩ�����ڱ����ϡ�ͬ��Cat��Fishд�������ĸ���Ȥ����һ������Fish������������ȴ������������˼�����磬��student.a am I������������ʶ������һ�ԭ���Ѿ��ӵ��ʵ�˳��ת�ˣ���ȷ�ľ���Ӧ���ǡ�I am a student.����Cat��һһ�ķ�ת��Щ����˳��ɲ����У����ܰ�����ô��

�㷨��

����ջ������ȥʵ�֣��Ե���Ϊ��λ����ѹ��ջ��Ȼ���ٴ�ջ�е����Ϳ����ˣ�ע����ͳ���������ʵ�ʱ�򣬲�����Ҫstr[i] != ' '���һ���i<size��Ϊ�ߵ����û��str[i] == " ",�����Խ��
���룺

class Solution {
public:
	string ReverseSentence(string str) {
		string src;
		int i = 0;
		int size = str.size();//������/0
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