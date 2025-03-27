#pragma once
#include <iostream>
#include "Product.h"
using namespace std;

enum select_enum
{
	shopping = 1,
	list,
	admin,
	End
};


int routine_1();
shared_ptr<Product> routine_2();