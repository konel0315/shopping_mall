#include "routine.h"
#include "product_collection.h"
#include "Customer.h"
#include "sign_up.h"

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
		cout << i << "    |" << productList[i]->product_info.product_name << "    |" << productList[i]->product_info.product_price << "|";
	}
	cout << "원하는 상품 번호를 입력하면 주문이 완료 됩니다." << endl;
	int i = 0;
	cin >> i;
	return productList[i];
}




void routine_3() {
	int i = 0;//주문 횟수
	unique_ptr<Customer> customerPtr = move(start());

	int select = routine_1();
	while (select != End)
	{

		if (select == shopping)
		{
			customerPtr->orders[i]->order_info.product.push_back(routine_2());//손님의 i번 주문목록안에 상품정보가있는 product
			i++;
			cout << "주문 상품 : " << customerPtr->orders[i]->order_info.product[0]->product_info.product_name<< endl;
			cout << "주문 상품 번호 : " << customerPtr->orders[i]->order_info.order_num << endl;
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