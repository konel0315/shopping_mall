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
        //    int Customer_Order_Count = customerPtr->orders.size();//i��° �մ��� ��Ų �ֹ��� ��
            for (int j = 0;j < customerPtr->orders.size();j++)
            {
                string Admin_Product_Name = customerPtr->orders[j]->order_info.product[0]->product_info.product_name;//i��° �մ��� ��Ų j��° �ֹ��� ��ǰ�� �̸�
                if (Admin_Product_Name == "������")
                {
                    Admin_Product_All[0].All_Order_count++;
                    // �ֹ� ���¿� ���� ī��Ʈ ����
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
                else if (Admin_Product_Name == "������")
                {
                    // ������ �ֹ� �� ����
                    Admin_Product_All[1].All_Order_count++;  // Admin_Product_All[1]�� Admin ��ü
                    // �ֹ� ���¿� ���� ī��Ʈ ����
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
                else if (Admin_Product_Name == "������")
                {
                    // ������ �ֹ� �� ����
                    Admin_Product_All[2].All_Order_count++;  // Admin_Product_All[2]�� Admin ��ü
                    // �ֹ� ���¿� ���� ī��Ʈ ����
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
                else if (Admin_Product_Name == "����ζ�")
                {
                    // �����е� �ֹ� �� ����
                    Admin_Product_All[3].All_Order_count++;  // Admin_Product_All[3]�� Admin ��ü
                    // �ֹ� ���¿� ���� ī��Ʈ ����
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
        
        cout << "��ǰ��ȣ | ��ǰ��   | �ֹ���  | ��۴���� | ����� | ��ۿϷ�" << endl;

        // ������
        cout << "0       | ������   | " << Admin_Product_All[0].All_Order_count << "    | "
            << Admin_Product_All[0].All_pending_count << "        | "
            << Admin_Product_All[0].All_shipped_count << "    | "
            << Admin_Product_All[0].All_delivered_count << endl;

        // ������
        cout << "1       | ������   | " << Admin_Product_All[1].All_Order_count << "    | "
            << Admin_Product_All[1].All_pending_count << "        | "
            << Admin_Product_All[1].All_shipped_count << "    | "
            << Admin_Product_All[1].All_delivered_count << endl;

        // ������
        cout << "2       | ������   | " << Admin_Product_All[2].All_Order_count << "    | "
            << Admin_Product_All[2].All_pending_count << "        | "
            << Admin_Product_All[2].All_shipped_count << "    | "
            << Admin_Product_All[2].All_delivered_count << endl;

        // ����ζ�
        cout << "3       | ����ζ� | " << Admin_Product_All[3].All_Order_count << "    | "
            << Admin_Product_All[3].All_pending_count << "        | "
            << Admin_Product_All[3].All_shipped_count << "    | "
            << Admin_Product_All[3].All_delivered_count << endl;
    }
