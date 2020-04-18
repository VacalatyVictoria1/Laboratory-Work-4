#include<iostream>
#include<string>
#include <regex>

using namespace std;

void Basic_Level()
{
	// В заданой строке вместо первого символа поставить пробел.
	cout << "Basic level:" << endl;
	char str[50] = "NBe a voice not an echo!";
	char rezult[50];
	cout << str << endl;
	const char* p = str;
	char* t = rezult;
	do
	{
		*t++ = (*p == str[0] ? ' ' : *p);
	} while (*p++);

	cout << rezult << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
}

void Average_Level()
{
	// В заданой строке заменить каждую русскукю букву символом "*"
	cout << "Average level:" << endl;
	setlocale(LC_ALL, "Russian");
	wstring s = L"Do not squander время - this is stuff жизнь is made of!";
	wcout << s << endl;
	s = regex_replace(s, wregex(L"[а-я,А-Я]"), wstring(L"*"));
	wcout << s << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
}

void High_Level()
{
	// Построить новую строку, состоящую из символов
	// которые входят в первую но не входят во вторую.
	cout << "High level:" << endl;
	string str1, str2;
	cout << "Enter first string:" << endl;
	getline(cin, str1);
	cout << "Enter second string:" << endl;
	getline(cin, str2);

	int N = str1.length();
	string* str3 = new string[N];
	int k = 0, count = 0;

	for (int i = 0; i < str1.length(); i++)
	{
		count = 0;
		for (int j = 0; j < str2.length(); j++)
		{
			if (str1[i] != str2[j])
			{
				count++;
			}
			else
			{
				count = 0;
				break;
			}
		}
		if (count != 0)
		{
			str3[k] = str1[i];
			k++;
		}
	}
	cout << "Result: ";
	for (int i = 0; i < k; i++)
	{
		cout << str3[i];
	}
	cout << endl;
	delete[] str3;
	system("pause");
}



int main()
{
	Basic_Level();
	Average_Level();
	High_Level();
}
