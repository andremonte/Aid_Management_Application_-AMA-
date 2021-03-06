// Final Project Milestone 3 - iProduct Interface
// Version 3.3
// Allocator.cpp
// 2018-03-10
// Authors	Fardad Soleimanloo, Chris Szalwinski
//
// For you final test before submission:
//      DO NOT MODIFY THIS FILE IN ANY WAY
//
// Revision History
// -----------------------------------------------------------
// Name               Date                 Reason
/////////////////////////////////////////////////////////////////
#include "MyProduct.h"
#include "iProduct.h"

namespace AMA {

	iProduct* iProduct::CreateProduct() {
		return new MyProduct("Product");
	}
	iProduct* iProduct::CreatePerishable() {
		return new MyProduct("Perishable");
	}
}