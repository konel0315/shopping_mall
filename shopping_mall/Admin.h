#pragma once
#include "Customer.h"

class Admin 
{
public:
	int All_Order_count;
	int All_pending_count;
	int All_shipped_count;
	int All_delivered_count;

	Admin();
	
};
void AdminDisplay(unique_ptr<Customer>& customerPtr);