#include "product_collection.h"

// 전역 변수 정의
vector<shared_ptr<Product>> productList = {
    make_shared<Product>("아이폰", 5000000, 10),
    make_shared<Product>("갤럭시", 1000000, 10),
    make_shared<Product>("샤오미", 2000000, 10),
    make_shared<Product>("모토로라", 3000000, 10)
};
