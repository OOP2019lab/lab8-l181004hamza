#include<iostream>
using namespace std;

class Date
{
	int date;
	int year;
	int month; 


public:

	Date(int m,int d,int y);
	Date();
	friend istream & operator >> (istream &in,  Date &c); 
	friend ostream & operator << (ostream &os, Date &d);
	friend bool operator==( const Date &d1, const Date &d2 );
	friend Date & operator+ (Date &d,int add);
	Date& operator--();
	Date& operator--(int newobj); 
	int operator [](int num);

};