#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "\n ��������:  " << "�������� ����  " << "���� 2-5" << endl << endl;

	unsigned int inputNumber;

	cout << " ������� �����: ";
	cin >> inputNumber;

	cout << " �����: ";
	
    if (inputNumber % 2 == 0)
    {
        cout << "NO" << endl;
        return 0;
    }

    for (int i = 0,N = 0; i <= inputNumber; ++i)
    {
        N = (N * 10 + 1) % inputNumber;
        if (N==0)
        {
            for (int j = 0; j <= i ; ++j)
            {
                cout << 1;
            }
            cout << endl;
            return 0;
        }
    }
	cout << "NO" << endl;
}


