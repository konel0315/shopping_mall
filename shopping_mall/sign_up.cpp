#include <string>
#include "Customer.h"
#include <sstream>
#include "sign_up.h"

using namespace std;
unique_ptr<Customer> start()
{
	cout << "�ȳ��ϼ���. XXX���� ���Ű� ȯ���մϴ�." << endl;
	cout << "ȸ�������� �����մϴ�." << endl;
	while (true) {
		cout << "�̸��� �̸����� �Է��ϼ���.[,]�� �������ּ���." << endl;


		string name_email;
		cin >> name_email;


		name_email = name_email.substr(1, name_email.size() - 2);//[]�����

		stringstream ss(name_email);
		string name, email;

		if (getline(ss, name, ',') && getline(ss, email, ','))
		{
			unique_ptr<Customer> CustomerPtr = make_unique<Customer>(name, email);
			return CustomerPtr;
		}
		else
		{
			cout << "ȸ������ ����";
		}
	}
}
