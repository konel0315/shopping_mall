#pragma once
#include "Product.h"
#include <vector>

using namespace std;


enum OrderState
{
    pending,   // 발송대기중
    shipped,   // 배송중
    delivered  // 배송완료
};

class Order
{
public:

    struct OrderInfo
    {
        int order_num;     // 주문 번호
        char* order_date;    // 주문 날짜
        OrderState order_state;  // 주문 상태
        vector<shared_ptr<Product>> product; // 주문한 상품 리스트
    };
    Order() 
    {
        order_info.order_num = 0; // 예시: 기본값 설정
        order_info.order_date = 0; // 예시: 기본값 설정
        order_info.order_state = pending;
    
    };

    OrderInfo order_info;
};
