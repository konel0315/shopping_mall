#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Order.h"  // Order 클래스의 헤더 파일을 포함

using namespace std;

class Customer
{
public:
    string name;
    string email;
    vector<shared_ptr<Order>> orders;  // 주문은 vector<Order>로 관리

    // 생성자에서 name과 email을 초기화
    Customer(string name, string email) : name(name), email(email) {}
};
