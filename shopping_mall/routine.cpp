#include "routine.h"
#include "product_collection.h"
#include "Customer.h"
#include "sign_up.h"

int routine_1()
{

	cout << "--ȸ�����ԿϷ��� ����ȭ��--"<<endl;
	cout<<"1. ����" << endl;
	cout << "2. �ֹ����" << endl;
	cout << "3. ������" << endl;
	cout << "4. ����" << endl;
	int i = 0;
	cin >> i;
	return i;
}



shared_ptr<Product> routine_2()
{
	cout << "��ǰ��ȣ|   ��ǰ��    |  ����     |" << endl;
	for (int i = 0;i < productList.size();i++)
	{
		cout << i << "    |" << productList[i]->product_info.product_name << "    |" << productList[i]->product_info.product_price << "|";
	}
	cout << "���ϴ� ��ǰ ��ȣ�� �Է��ϸ� �ֹ��� �Ϸ� �˴ϴ�." << endl;
	int i = 0;
	cin >> i;
	return productList[i];
}




void routine_3() {
	int i = 0;//�ֹ� Ƚ��
	unique_ptr<Customer> customerPtr = move(start());

	int select = routine_1();
	while (select != End)
	{

		if (select == shopping)
		{
			customerPtr->orders[i]->order_info.product.push_back(routine_2());//�մ��� i�� �ֹ���Ͼȿ� ��ǰ�������ִ� product
			i++;
			cout << "�ֹ� ��ǰ : " << customerPtr->orders[i]->order_info.product[0]->product_info.product_name<< endl;
			cout << "�ֹ� ��ǰ ��ȣ : " << customerPtr->orders[i]->order_info.order_num << endl;
		}
		else if (select == list)
		{
		}
		else if (select == admin)
		{
		}
		else if (select == End)
		{
			i = 0;
		}
	}
}