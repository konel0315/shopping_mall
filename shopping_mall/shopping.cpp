#include "shopping.h"

using namespace std;

void handle_shopping(unique_ptr<Customer>& customerPtr, int& orderIndex) {
    // 새로운 Order 객체를 `orders` 벡터에 추가
    customerPtr->orders.push_back(make_unique<Order>());
    customerPtr->orders.back()->order_info.order_num = orderIndex; // 주문번호
    customerPtr->orders.back()->order_info.order_date = print_current_time();

    // `routine_2()`에서 반환된 상품을 추가
    customerPtr->orders.back()->order_info.product.push_back(routine_2());

    // 주문 정보를 출력
    cout << "주문 상품 : " << customerPtr->orders.back()->order_info.product[0]->product_info.product_name << endl;
    cout << "주문 상품 번호 : " << customerPtr->orders.back()->order_info.order_num << endl;

    // 주문 번호 증가
    orderIndex++;
}
void update_order_state(std::unique_ptr<Customer>& customerPtr) {
    // 해당 주문의 상태를 업데이트
    for(int i=0;i< customerPtr->orders.size();i++)
    {
    OrderState currentState = customerPtr->orders[i]->order_info.order_state;

    // 상태가 `delivered`이면 더 이상 상태를 증가시키지 않음
    if (currentState < delivered) {
        // 상태 증가
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
        return "unknown"; // 그 외의 값은 "unknown"
    }
}


