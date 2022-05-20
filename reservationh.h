//Reservation class
#include <string>
#include "inquaryh.h"
#include "customerh.h"
#include "hotel.h"

using namespace std;

class Reservation
{
private:
	string Reservation_ID;
	string Reservation_date;
	string Res_hotelid;
	string Res_weddingDate;
	string Res_customerName;
	string Res_customerNumber;
	string Res_Email;
	string Res_noOfservings;
	string Res_weddingType;
	Inquiry*inq[SIZE];
	customer*cus;
	hotel*htl;

public:
	Reservation();//Default constructor
	Reservation(string Reservation_ID,hotel*htel,customer*cust);//overload constructor
	void setReservationDetails(string R_ID, string R_date, string R_hotelID, string R_weddingDate, string R_cname, string R_c_no, string R_email, string R_Sno, string R_wType);
	void addInquiry(Inquiry*I);
	void DisplayReservationDetails();
	void EditReservationDetails();
	void CalcReservation();
	void DisplayReservationStatus();
	~Reservation();//destructor
};


