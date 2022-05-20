#include <cstring>
#include "reservationh.h"
#include "customerh.h"
using namespace std;

class Inquiry
{
private:
	string inquiry_ID;
	string inquiry_date;
	string inquiry_description;
	Reservation*Res;
	customer*cus;

public:
	Inquiry();//Default constructor
	Inquiry(string inquiry_ID,customer*cust,Reservation*Resrv);//overload constructor
	void setInquiry(string i_ID, string i_date, string i_description);
	void Displayinquiry();
	void addinquiry();
	~Inquiry();//destructor
};

