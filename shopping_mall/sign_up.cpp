#include <string>
#include "Customer.h"
#include <sstream>
#include "sign_up.h"

using namespace std;
unique_ptr<Customer> start()
{
	cout << "안녕하세요. XXX몰에 오신걸 환영합니다." << endl;
	cout << "회원가입을 진행합니다." << endl;
	while (true) {
		cout << "이름과 이메일을 입력하세요.[,]로 구분해주세요." << endl;


		string name_email;
		cin >> name_email;


		name_email = name_email.substr(1, name_email.size() - 2);//[]지우기

		stringstream ss(name_email);
		string name, email;

		if (getline(ss, name, ',') && getline(ss, email, ','))
		{
			unique_ptr<Customer> CustomerPtr = make_unique<Customer>(name, email);
			return CustomerPtr;
		}
		else
		{
			cout << "회원가입 실패";
		}
	}
}
