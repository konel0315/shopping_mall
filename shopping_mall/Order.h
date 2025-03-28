#pragma once
#include "Product.h"
#include <vector>

using namespace std;


enum OrderState
{
    pending,   // �߼۴����
    shipped,   // �����
    delivered  // ��ۿϷ�
};

class Order
{
public:

    struct OrderInfo
    {
        int order_num;     // �ֹ� ��ȣ
        char* order_date;    // �ֹ� ��¥
        OrderState order_state;  // �ֹ� ����
        vector<shared_ptr<Product>> product; // �ֹ��� ��ǰ ����Ʈ
    };
    Order() 
    {
        order_info.order_num = 0; // ����: �⺻�� ����
        order_info.order_date = 0; // ����: �⺻�� ����
        order_info.order_state = pending;
    
    };

    OrderInfo order_info;
};
