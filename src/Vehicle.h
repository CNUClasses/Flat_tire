/*
 * Vehicle.h
 *
 *  Created on: Dec 3, 2021
 *      Author: keith
 */

#ifndef VEHICLE_H_
#define VEHICLE_H_
#include <vector>
#include "Tire.h"

class Vehicle {
private:
	std::vector<Tire*> mv;
	Tire *spare;
public:
	Vehicle();
	virtual ~Vehicle();
	
	void flattentire();
	bool doIHaveAFlat();	
	bool changeTire();
};

#endif /* VEHICLE_H_ */
