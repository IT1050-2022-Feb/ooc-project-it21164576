#include <string>
#include "customerh.h"
#include "hotel.h"

using namespace std;

class Payment
{
private:
    string Payment_ID;
    string Payment_amount;
    string Payment_date;
    string Payment_method;
    string Payment_receiptNo;
    customer* cus[SIZE];
    hotel *htl;
    


public:
    Payment();//Default constructor
    void setPayment(string PayID, string Pay_amount, string Pay_date, string Pay_method, string Pay_reciptNo);
    void addhotel(hotel*H);
    void DisplayPaymentDetails();
    void ConfirmPayment();
    void CheckPaymentDetails();
    void addcustomer(customer *c1, customer *c2);
    ~Payment();//destructor
};
