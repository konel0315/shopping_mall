#include "shopping.h"

using namespace std;

void handle_shopping(unique_ptr<Customer>& customerPtr, int& orderIndex) {
    // ���ο� Order ��ü�� `orders` ���Ϳ� �߰�
    customerPtr->orders.push_back(make_unique<Order>());
    customerPtr->orders.back()->order_info.order_num = orderIndex; // �ֹ���ȣ
    customerPtr->orders.back()->order_info.order_date = print_current_time();

    // `routine_2()`���� ��ȯ�� ��ǰ�� �߰�
    customerPtr->orders.back()->order_info.product.push_back(routine_2());

    // �ֹ� ������ ���
    cout << "�ֹ� ��ǰ : " << customerPtr->orders.back()->order_info.product[0]->product_info.product_name << endl;
    cout << "�ֹ� ��ǰ ��ȣ : " << customerPtr->orders.back()->order_info.order_num << endl;

    // �ֹ� ��ȣ ����
    orderIndex++;
}
void update_order_state(std::unique_ptr<Customer>& customerPtr) {
    // �ش� �ֹ��� ���¸� ������Ʈ
    for(int i=0;i< customerPtr->orders.size();i++)
    {
    OrderState currentState = customerPtr->orders[i]->order_info.order_state;

    // ���°� `delivered`�̸� �� �̻� ���¸� ������Ű�� ����
    if (currentState < delivered) {
        // ���� ����
        customerPtr->orders[i]->order_info.order_state = static_cast<OrderState>(currentState + 1);
    }
    }
    
}
const char* transEnum(int i)
{
    if (i == 0)
    {
        return "pending";
    }
    else if (i == 1)
    {
        return "shipped";
    }
    else if (i == 2)
    {
        return "delivered";
    }
    else
    {
        return "unknown"; // �� ���� ���� "unknown"
    }
}


