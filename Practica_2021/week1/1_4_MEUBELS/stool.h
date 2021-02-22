#ifndef STOOL_H
#define STOOL_H

class stool {
private:
	int _n_legs;
	int _n_seats;
	
	int _amount;
	
public:
	stool(int n_legs, int n_seats) : _n_legs(n_legs), _n_seats(n_seats) {};
	
	void change_legs_stool(const int& _amount);
	
	int get_legs_stool();
	
};

#endif // STOOL_HPP
