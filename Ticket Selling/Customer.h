#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer {

private:
	std::vector<Reservation> purchased;
	String name;
	String phone;

public:
	void add(int name, int phone);
};

#endif
