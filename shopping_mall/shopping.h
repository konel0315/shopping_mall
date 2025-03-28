#pragma once
#include "Customer.h"
#include "Product.h"
#include <memory>
#include "product_collection.h"
#include "time.h"
#include "routine.h"
void handle_shopping(std::unique_ptr<Customer>& customerPtr, int& orderIndex);
void update_order_state(std::unique_ptr<Customer>& customerPtr);
const char* transEnum(int i);