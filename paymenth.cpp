#include "paymenth.h"
#include <iostream>
#include "customerh.h"
#include "hotel.h"
#include <cstring>
#include <iomanip>

using namespace std;

Payment::Payment()
{
    Payment_ID = "";
    Payment_amount = "";
    Payment_date = "";
    Payment_method = "";
    Payment_receiptNo = "";
};

void Payment::setPayment(string PayID, string Pay_amount, string Pay_date, string Pay_method, string Pay_reciptNo)
{
    Payment_ID = PayID;
    Payment_amount = Pay_amount;
    Payment_date = Pay_date;
    Payment_method = Pay_method;
    Payment_receiptNo = Pay_reciptNo;

};
void Payment::addhotel(hotel*H)
{
};

void Payment::DisplayPaymentDetails()
{
	for(int i=0; i<SIZE;i++)
	{
		cus[i]->DisplayCustomerDetails();}
};

void Payment::ConfirmPayment()
{
};

void Payment::CheckPaymentDetails()
{
};

void addcustomer(customer* c1, customer* c2)
{
    cus[0] = c1;
    cus[1] = c2;
};

Payment::~Payment()
{
   cout << "Everything is deleted" << endl;
}

