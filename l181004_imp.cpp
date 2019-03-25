#include"Header.h"

Date :: Date()
{
	date = 1;
	month = 1;
	year = 2000;

}

Date :: Date (int m,int d,int y)
{
	if(d<=30)
	date=d;
	else
	date=1;
	if(m<=12)
	month=m;
	else
	month=1;
	if(y>=1000 && y<=9999)
	year=y;

}



istream &  operator >> (istream &in,  Date &c) 
{ 
	
	
	cout << "Enter month"; 
	in >> c.month; 
	
    cout << "Enter date "; 
	in >> c.date;

	cout<<"Enter year";
	in>>c.year;


	return in;

} 

ostream & operator << (ostream &os, Date &d)
{
	os<<d.month<<"/"<<d.date<<"/"<<d.year<<endl;

	return os;
}


bool operator==( const Date &d1, const Date &d2 )
{
	return  d1.date==d2.date;
	return  d1.month==d2.month;
	return  d1.year==d2.year;
}

Date & operator+ (Date &d,int add)
{
	d.date=d.date+add;
	if(d.date>30)
	{d.date=1;
		d.month=d.month+1;
	}
		if(d.month>12)
	{
		d.month=1;
		d.year=d.year+1;
	}

	return d;
}

Date &Date :: operator--()
{
	date=date-1;
	if(date<1)
	{
		date=30;
		month=month-1;
	}
	if(month<1)
	{
		month=12;
		year=year-1;
	}
	return *this;
}

Date &Date :: operator--(int newobj)
{
	Date temp=*this;
	date=date-1;
	if(date<1)
	{
		date=30;
		month=month-1;
	}
	if(month<1)
	{
		month=12;
		year=year-1;
	}

	return temp;

}

int Date ::  operator[](int num)
{
	if(num<0 && num>2)
	cout<<"index can only be 0, 1 or 2."<<endl;
	else
	{
		if(num==0)
			return date;
		if(num==1)
			return month;
		if(num==2)
			return year;
	}
}