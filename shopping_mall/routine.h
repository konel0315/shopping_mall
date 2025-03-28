#pragma once
#include <iostream>
#include "Product.h"
#include <vector>
#include <chrono>
#include "shopping.h"
using namespace std;
using namespace chrono;
enum select_enum
{
	shopping = 1,
	list,
	admin,
	End
};


int routine_1();
shared_ptr<Product> routine_2();
void routine_3();
