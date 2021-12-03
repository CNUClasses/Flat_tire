/*
 * Tire.cpp
 *
 *  Created on: Dec 3, 2021
 *      Author: keith
 */

#include "Tire.h"

const int FULL=32;
Tire::Tire():pressure(0) {
	set_pressure(FULL);
}

void Tire::set_pressure(int pressure){
	this->pressure = pressure;
}
int Tire::get_pressure(){
	return pressure;
}

