#include "CashRegister.h"

/************************************************************
* Function Name : CashRegister::CashRegister
* Description : Default Constructor
************************************************************/
CashRegister::CashRegister()
{
    subtotal = 0.0;
    tax = 0.0;
    total = 0.0;
}

/************************************************************
* Function Name : CashRegister::~CashRegister
* Description : Destructor
************************************************************/
CashRegister::~CashRegister()
{

}

/************************************************************
* Function Name : CashRegister::CalcSubtotal
* Description : Calculates the subtotal of the purchase
************************************************************/
void CashRegister::CalcSubtotal(double cost, int qty)
{
    subtotal = (cost + (cost*PROFIT)) * qty;
}

/************************************************************
* Function Name : CashRegister::CalcTax
* Description : Calculates the tax on the purchase
************************************************************/
void CashRegister::CalcTax(double subtotal)
{
    tax = subtotal * TAXRATE;
}

/************************************************************
* Function Name : CashRegister::CalcTotal
* Description : Calculates the total of the purchase
************************************************************/
void CashRegister::CalcTotal()
{
    total = subtotal + tax;
}

/************************************************************
* Function Name : CashRegister::GetSubtotal
* Description : Returns the CashRegister purchase subtotal
*               as a double
************************************************************/
double CashRegister::GetSubtotal() const
{
    return subtotal;
}

/************************************************************
* Function Name : CashRegister::GetTax
* Description : Returns the CashRegister purchase tax as a
*               double
************************************************************/
double CashRegister::GetTax() const
{
    return tax;
}

/************************************************************
* Function Name : CashRegister::GetTotal
* Description : Returns the CashRegister purchase total as a
*               double
************************************************************/
double CashRegister::GetTotal() const
{
    return total;
}
