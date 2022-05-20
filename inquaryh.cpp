#include "inquaryh.h"
#include "reservationh.h"
#include "customerh.h"
#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

Inquiry::Inquiry() {
	inquiry_ID = "";
	inquiry_date = "";
	inquiry_description = "";

};
void Inquiry::setInquiry(string i_ID, string i_date, string i_description) {
	inquiry_ID = i_ID;
	inquiry_date = i_date;
	inquiry_description = i_description;
};

Inquiry::Inquiry(string inquiry_ID,customer*cust,Reservation*Resrv)
{
};

void Inquiry::Displayinquiry() {

};
void Inquiry::addinquiry() {

};
Inquiry::~Inquiry()
{       
       for (int i = 0; i < SIZE; i++)
		delete Inquiry[i];
	cout << "Everything is deleted" << endl;
};
