#include "Admin.h"
#include "product_collection.h"

vector<Admin> Admin_Product_All(4);

	Admin::Admin() {
		All_Order_count=0;
		All_pending_count=0;
		All_shipped_count=0;
		All_delivered_count=0;
	}
    void AdminDisplay(unique_ptr<Customer>& customerPtr)
    {

        //for (int i = 0;i < CustomerList.size();i++)
        //{
        //
        //    int Customer_Order_Count = customerPtr->orders.size();//i번째 손님이 시킨 주문의 수
            for (int j = 0;j < customerPtr->orders.size();j++)
            {
                string Admin_Product_Name = customerPtr->orders[j]->order_info.product[0]->product_info.product_name;//i번째 손님이 시킨 j번째 주문의 상품의 이름
                if (Admin_Product_Name == "아이폰")
                {
                    Admin_Product_All[0].All_Order_count++;
                    // 주문 상태에 따른 카운트 증가
                    if (customerPtr->orders[j]->order_info.order_state == pending)
                    {
                        Admin_Product_All[0].All_pending_count++;
                    }
                    else if (customerPtr->orders[j]->order_info.order_state == shipped)
                    {
                        Admin_Product_All[0].All_shipped_count++;
                    }
                    else if (customerPtr->orders[j]->order_info.order_state == delivered)
                    {
                        Admin_Product_All[0].All_delivered_count++;
                    }
                }
                else if (Admin_Product_Name == "갤럭시")
                {
                    // 갤럭시 주문 수 증가
                    Admin_Product_All[1].All_Order_count++;  // Admin_Product_All[1]이 Admin 객체
                    // 주문 상태에 따른 카운트 증가
                    if (customerPtr->orders[j]->order_info.order_state == pending)
                    {
                        Admin_Product_All[1].All_pending_count++;
                    }
                    else if (customerPtr->orders[j]->order_info.order_state == shipped)
                    {
                        Admin_Product_All[1].All_shipped_count++;
                    }
                    else if (customerPtr->orders[j]->order_info.order_state == delivered)
                    {
                        Admin_Product_All[1].All_delivered_count++;
                    }
                }
                else if (Admin_Product_Name == "샤오미")
                {
                    // 에어팟 주문 수 증가
                    Admin_Product_All[2].All_Order_count++;  // Admin_Product_All[2]이 Admin 객체
                    // 주문 상태에 따른 카운트 증가
                    if (customerPtr->orders[j]->order_info.order_state == pending)
                    {
                        Admin_Product_All[2].All_pending_count++;
                    }
                    else if (customerPtr->orders[j]->order_info.order_state == shipped)
                    {
                        Admin_Product_All[2].All_shipped_count++;
                    }
                    else if (customerPtr->orders[j]->order_info.order_state == delivered)
                    {
                        Admin_Product_All[2].All_delivered_count++;
                    }
                }
                else if (Admin_Product_Name == "모토로라")
                {
                    // 아이패드 주문 수 증가
                    Admin_Product_All[3].All_Order_count++;  // Admin_Product_All[3]이 Admin 객체
                    // 주문 상태에 따른 카운트 증가
                    if (customerPtr->orders[j]->order_info.order_state == pending)
                    {
                        Admin_Product_All[3].All_pending_count++;
                    }
                    else if (customerPtr->orders[j]->order_info.order_state == shipped)
                    {
                        Admin_Product_All[3].All_shipped_count++;
                    }
                    else if (customerPtr->orders[j]->order_info.order_state == delivered)
                    {
                        Admin_Product_All[3].All_delivered_count++;
                    }
                }
            }
        
        cout << "상품번호 | 상품명   | 주문수  | 배송대기중 | 배송중 | 배송완료" << endl;

        // 아이폰
        cout << "0       | 아이폰   | " << Admin_Product_All[0].All_Order_count << "    | "
            << Admin_Product_All[0].All_pending_count << "        | "
            << Admin_Product_All[0].All_shipped_count << "    | "
            << Admin_Product_All[0].All_delivered_count << endl;

        // 갤럭시
        cout << "1       | 갤럭시   | " << Admin_Product_All[1].All_Order_count << "    | "
            << Admin_Product_All[1].All_pending_count << "        | "
            << Admin_Product_All[1].All_shipped_count << "    | "
            << Admin_Product_All[1].All_delivered_count << endl;

        // 샤오미
        cout << "2       | 샤오미   | " << Admin_Product_All[2].All_Order_count << "    | "
            << Admin_Product_All[2].All_pending_count << "        | "
            << Admin_Product_All[2].All_shipped_count << "    | "
            << Admin_Product_All[2].All_delivered_count << endl;

        // 모토로라
        cout << "3       | 모토로라 | " << Admin_Product_All[3].All_Order_count << "    | "
            << Admin_Product_All[3].All_pending_count << "        | "
            << Admin_Product_All[3].All_shipped_count << "    | "
            << Admin_Product_All[3].All_delivered_count << endl;
    }
