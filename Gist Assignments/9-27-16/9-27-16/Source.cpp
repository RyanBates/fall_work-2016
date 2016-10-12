#include <iostream>

class Weapon
{
public:
	float damage = 5;
	
};

float GetDps(Weapon w)
{
	float ct;	//current timein seconds
	float pt;	//previous time in seconds
	float dt = ct - pt;		//delta time
	
	float dps =	w.damage * dt;  //damage per

	return dps;
}



void main()
{

	GetDps();
	system("pause");
}