#include "reservationh.h"
#include "inquaryh.h"
#include "customerh.h"
#include "hotel.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

Reservation::Reservation()
{
    Reservation_ID = "";
    Reservation_date = "";
    Res_hotelid = "";
    Res_weddingDate = "";
    Res_customerName = "";
    Res_customerNumber = "";
    Res_Email = "";
    Res_noOfservings = "";
    Res_weddingType = "";
};

void Reservation::setReservationDetails(string R_ID, string R_date, string R_hotelID, string R_weddingDate, string R_cname, string R_c_no, string R_email, string R_Sno, string R_wType)
{
    Reservation_ID = R_ID;
    Reservation_date = R_date;
    Res_hotelid = R_hotelID;
    Res_weddingDate = R_weddingDate;
    Res_customerName = R_cname;
    Res_customerNumber = R_c_no;
    Res_Email = R_email;
    Res_noOfservings = R_Sno;
    Res_weddingType = R_wType;
};

Reservation::Reservation(string Reservation_ID,hotel*htel,customer*cust)
{
};
void Reservation::addInquiry(Inquiry*I)
{
};

void Reservation::DisplayReservationDetails()
{
};

void Reservation::EditReservationDetails()
{

};

void Reservation::CalcReservation()
{

};

void Reservation::DisplayReservationStatus() {

};

Reservation::~Reservation()
{
	for (int i = 0; i < SIZE; i++)
	delete Reservation[i];
	cout << "Everything is deleted" << endl;
};
