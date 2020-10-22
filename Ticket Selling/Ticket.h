#ifndef TICKET_H
#define TICKET_H

class Ticket {

private:
	boolean available;

public:
	void sell(Customer c);

	void exchange();
};

#endif
