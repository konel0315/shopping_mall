#include "routine.h"
#include "product_collection.h"
#include "Customer.h"
#include "sign_up.h"
#include "time.h"
#include "Admin.h"
int routine_1()
{

	cout << "--회원가입완료후 메인화면--"<<endl;
	cout<<"1. 쇼핑" << endl;
	cout << "2. 주문목록" << endl;
	cout << "3. 관리자" << endl;
	cout << "4. 종료" << endl;
	int i = 0;
	cin >> i;
	return i;
}



shared_ptr<Product> routine_2()
{
	cout << "상품번호|   상품명    |  가격     |" << endl;
	for (int i = 0;i < productList.size();i++)
	{
		cout << i << "    |" << productList[i]->product_info.product_name << "    |" << productList[i]->product_info.product_price << "|" << endl;
	}
	cout << "원하는 상품 번호를 입력하면 주문이 완료 됩니다." << endl;
	int i = 0;
	cin >> i;
	return productList[i];
}




void routine_3() {
	unique_ptr<Customer> customerPtr = move(start());
	int orderIndex = 0;
	int select = 0;
	while (select != End)
	{
	select = routine_1();
		if (select == shopping)
		{
			system("cls");
			update_order_state(customerPtr);
			handle_shopping(customerPtr, orderIndex);
			cout << "\n";
		}
		else if (select == list)
		{
			system("cls");
			cout << "주문번호  |   상품명    |     주문일자   |     주문상태   |" << endl;
			if (customerPtr->orders.size() > 0)
			{
				for (int i = 0;i < customerPtr->orders.size();i++)
				{
					cout << customerPtr->orders[i]->order_info.order_num << "|" << customerPtr->orders[i]->order_info.product[0]->product_info.product_name << "|" << customerPtr->orders[i]->order_info.order_date << "|" << transEnum(customerPtr->orders[i]->order_info.order_state) << endl;

				}
				cout << "\n";
			}
		}
		else if (select == admin)
		{
			AdminDisplay(customerPtr);
		}
	}
}

