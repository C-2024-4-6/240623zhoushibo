#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    char ch;
    int letters = 0, spaces = 0, digits = 0, others = 0;
    cout << "������һ���ַ���" << endl;
    while (cin.get(ch))
    {
        if (ch == '\n')
        {
            break;
        }
        if (isalpha(ch))
        {
            letters++;
        }
        else if (isspace(ch))
        {
            spaces++;
        }
        else if (isdigit(ch))
        {
            digits++;
        }
        else
        {
            others++;
        }
    }
    cout << "Ӣ����ĸ����: " << letters << endl;
    cout << "�ո����: " << spaces << endl;
    cout << "�����ַ�����: " << digits << endl;
    cout << "�����ַ�����: " << others << endl;
    return 0;
}