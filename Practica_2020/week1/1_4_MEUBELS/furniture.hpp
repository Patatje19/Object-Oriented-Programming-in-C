#ifndef FURNITURE_HPP
#define FURNITURE_HPP

//
// Je moet 3 aparte HPP's maken een voor stool, een voor table en een voor furniture
// als ik in hergebruik alleen stool wil gebruiken krijg ik de rest erbij. En dat is 
// niet de bedoeling
// 

#include <iostream>


class stool {
private:
	int n_legs;
	int n_seats;
	
public:
	stool(
		const int & n_legs,
		const int & n_seats
	):
		n_legs( n_legs ),
		n_seats( n_seats )
	{}
	
	void decrease_leg(stool & stool_0);
	
	void print_stool();
	
};

//
// Idem
// 

class table {
private:
	int n_legs;
	int length;
	int width;
	
public:
	table(
		const int & n_legs,
		const int & length,
		const int & width
	):
		n_legs( n_legs ),
		length( length ),
		width( width )
	{}
	
	void increase_leg(table & table_0);
	
	void print_table();
	
};

//
// Idem
//

class furniture {
private:
	table table_1;
	
	stool stool_1;
	stool stool_2;
	stool stool_3;
	stool stool_4;
	
	void decrease_leg(stool & stool_0);
	void increase_leg(table & table_0);
	
	void print_stool();
	void print_table();
	
public:
	furniture ():
		table_1(6, 800, 200),
		
		stool_1(4, 1),
		stool_2(4, 1),
		stool_3(4, 1),
		stool_4(4, 1)
	{}
	
	void print_furniture();
	void print_more_hipster();
	
	void make_more_hipster();
	
};


#endif // FURNITURE_HPP
