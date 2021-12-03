/*
 * Vehicle.cpp
 *
 *  Created on: Dec 3, 2021
 *      Author: keith
 */

#include "Vehicle.h"

Vehicle::Vehicle():spare(0) {
	//add paint color
	//add winshiels
	
	//add tires
	for(int i=0;i<4;i++)
		mv.push_back(new Tire());
	
	//add a spare
	spare = new Tire();
		
}
bool  Vehicle::changeTire(){
	//no point changing a tire if spare is flat
	if(spare->get_pressure()==0)
		return false;

	//tire 0 is flat, change it
	Tire *p=mv[0];   //2 pointers pointing to tire 0
	mv[0]=spare;	//2 pointers pointing to spare
	spare=p;
	return true;
}

bool Vehicle::doIHaveAFlat(){
	bool ret= false;
	for(std::vector<Tire*>::iterator it = mv.begin(); it != mv.end(); ++it) {
		if( (*it)->get_pressure()==0)
			ret=true;
	}	
	return ret;
}
void Vehicle::flattentire(){
	mv[0]->set_pressure(0);
}

Vehicle::~Vehicle() {
	if(spare)
		delete spare;
	
	for(std::vector<Tire*>::iterator it = mv.begin(); it != mv.end(); ++it) {
			delete (*it);
		}	
}

