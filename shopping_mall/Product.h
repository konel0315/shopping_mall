#pragma once
#include <string>
using namespace std;

class Product
{
public:
    // ����ü�� ��ǰ ������ ����
    struct ProductInfo
    {
        string product_name;  // ��ǰ �̸��� ���ڿ��� ����
        int product_price;         // ��ǰ ����
        int product_count;         // ��ǰ ����
    };
    Product(string product_name, int product_price, int product_count ) 
    {
        this->product_info.product_count = product_count;
        this->product_info.product_price = product_price;
        this->product_info.product_name = product_name;
    }
    // ProductInfo ����ü�� ��� ������ ����
    ProductInfo product_info;
};
