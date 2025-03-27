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
        int order_date;    // �ֹ� ��¥
        OrderState order_state;  // �ֹ� ����
        vector<shared_ptr<Product>> product; // �ֹ��� ��ǰ ����Ʈ
    };
    Order();

    OrderInfo order_info;
};
