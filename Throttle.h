/*
 * throttle.h
 *
 * Parent class for all throttle controllers, be they canbus or pot or hall effect, etc
 * Though, actually right now it can't be canbus. There are no plans to support canbus throttles at the moment
 * Created: 2/05/2013
 *  Author: Collin Kidder
 */

#ifndef THROTTLE_H_
#define THROTTLE_H_

#include <Arduino.h>
#include "config.h"
#include "Device.h"

class Throttle: public Device {
public:
	Throttle();
	Device::DeviceType getType();
	virtual int getLevel();

protected:
	signed int level; //the final signed throttle level. [-1000, 1000] in tenths of a percent of maximum
};

#endif
