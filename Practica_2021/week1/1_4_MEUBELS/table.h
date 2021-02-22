#ifndef TABLE_H
#define TABLE_H

class table {
private:
	int _n_legs;
	
	int _amount;
	
	double _length;
	double _width;
	
public:
	table(int n_legs, double length, double width) : _n_legs(n_legs), _length(length), _width(width) {};
	
	void change_legs_table(const int& _amount);
	
	int get_legs_table();
	
};

#endif // TABLE_HPP
