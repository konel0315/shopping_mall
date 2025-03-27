#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Order.h"  // Order Ŭ������ ��� ������ ����

using namespace std;

class Customer
{
public:
    string name;
    string email;
    vector<shared_ptr<Order>> orders;  // �ֹ��� vector<Order>�� ����

    // �����ڿ��� name�� email�� �ʱ�ȭ
    Customer(string name, string email) : name(name), email(email) {}
};
