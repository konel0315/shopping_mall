#pragma once
#include <string>
using namespace std;

class Product
{
public:
    // 구조체로 제품 정보를 정의
    struct ProductInfo
    {
        string product_name;  // 제품 이름은 문자열로 저장
        int product_price;         // 제품 가격
        int product_count;         // 제품 개수
    };
    Product(string product_name, int product_price, int product_count ) 
    {
        this->product_info.product_count = product_count;
        this->product_info.product_price = product_price;
        this->product_info.product_name = product_name;
    }
    // ProductInfo 구조체를 멤버 변수로 선언
    ProductInfo product_info;
};
