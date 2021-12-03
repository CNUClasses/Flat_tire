//============================================================================
// Name        : Flat_tire.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Truck.h"
#include "Car.h"
using namespace std;

int main() {
	Car mc;
	Truck mt;
	
	for (int miles=0;miles<100;miles++){
		
		cout<<"Traveling, mile="<<miles<<endl;
		
		//get a flat at 10 miles
		if(miles==10){
			cout<<"Getting a flat"<<endl;
			mc.flattentire();
			mt.flattentire();
		}
		
		//dang it another flat!
		if(miles==20){
			cout<<"Getting a flat"<<endl;
			mc.flattentire();
			mt.flattentire();
		}
		
		//If I have a flat then fix it
		if(mc.doIHaveAFlat()){
			cout<<"oh no I have a flat need to change the tire"<<endl;
			if (mc.changeTire())
				cout<<"Tire changed, back to traveling"<<endl;
			else{
				cout<<"OH NO! Cannot change a tire because my spare is also flat!, my trip is over!"<<endl;
				break;
			}
		}
		
		if(mt.doIHaveAFlat())
			mt.changeTire();
	}
		
	return 0;
}
