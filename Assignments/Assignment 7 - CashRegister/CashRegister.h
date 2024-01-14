#ifndef CASHREGISTER_H_INCLUDED
#define CASHREGISTER_H_INCLUDED
using namespace std;

class CashRegister
{
    private:
        static const double PROFIT = 0.3;    //Profit of 30% of the item cost
        static const double TAXRATE = 0.06;  //Sales tax rate collected on each item
        double subtotal;                     //Subtotal of items being purchased
        double tax;                          //Cost of tax on items being purchased
        double total;                        //Total cost of items being purchased

    protected:

    public:
        //Constructor
        CashRegister();

        //Destructor
        ~CashRegister();

        //Mutator Functions
        void CalcSubtotal(double cost, int qty);
        void CalcTax(double subtotal);
        void CalcTotal();

        //Accessor Functions
        double GetSubtotal() const;
        double GetTax() const;
        double GetTotal() const;
};

#endif // CASHREGISTER_H_INCLUDED
