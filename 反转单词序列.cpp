��ת��������

��Ŀ����
ţ���������һ����Ա��Fish��ÿ���糿���ǻ�����һ��Ӣ����־��дЩ�����ڱ����ϡ�ͬ��Cat��Fishд�������ĸ���Ȥ����һ������Fish������������ȴ������������˼�����磬��student.a am I������������ʶ������һ�ԭ���Ѿ��ӵ��ʵ�˳��ת�ˣ���ȷ�ľ���Ӧ���ǡ�I am a student.����Cat��һһ�ķ�ת��Щ����˳��ɲ����У����ܰ�����ô��

�㷨��

һ������һ������ƴ�ӣ�������
student.a am I


ret = ' 'student;
ret = ' 'a' 'student;

string ReverseSentence(string str) {
	int size = str.size();
	string ret = "";
	string src = "";
	for (int i = 0; i<size; i++)
	{
		if (str[i] == ' ')//һ�����ʱ�������
		{
			ret = ' ' + src + ret;
			src = "";
		}
		else
		{
			src += str[i];
		}
	}
	if (str.size())
		ret = src + ret;
	return ret;
}