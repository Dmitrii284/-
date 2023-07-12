#include<iostream>
#include"Header.h"


int main()
{


	Base a("object");
	Item i("chair", 15.3);
	Creature c("cat", 3.5);
	Robot r{};
	r.Item::setName("Wall-e");
	r.Creature::setName("Bazzer");
	/*F00(a);
	F00(i);
	F00(c);
	F00(r);*/
	r.setName{"EVA"};
	
	return 0;
}