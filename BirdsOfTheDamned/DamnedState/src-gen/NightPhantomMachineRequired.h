
#ifndef NIGHTPHANTOMMACHINEREQUIRED_H_
#define NIGHTPHANTOMMACHINEREQUIRED_H_

#include "../src/sc_types.h"
#include "NightPhantomMachine.h"

#ifdef __cplusplus
extern "C"
{
#endif 

/*! \file This header defines prototypes for all functions that are required by the state machine implementation.

This state machine makes use of operations declared in the state machines interface or internal scopes. Thus the function prototypes:
	- nightPhantomMachineIfaceDaylight_sensor_set_sensitivity
	- nightPhantomMachineIfaceDaylight_sensor_is_nighttime
	- nightPhantomMachineIfaceEyes_enable
	- nightPhantomMachineIfaceEyes_set_intensity
	- nightPhantomMachineIfaceWdt_enable
	- nightPhantomMachineIfaceWdt_disable
	- nightPhantomMachineIfaceWdt_reset
	- nightPhantomMachineIfaceRand_lurk
are defined.

These functions will be called during a 'run to completion step' (runCycle) of the statechart. 
There are some constraints that have to be considered for the implementation of these functions:
	- never call the statechart API functions from within these functions.
	- make sure that the execution time is as short as possible.
 
*/
extern void nightPhantomMachineIfaceDaylight_sensor_set_sensitivity(const NightPhantomMachine* handle, const sc_real sensitivity);
extern sc_boolean nightPhantomMachineIfaceDaylight_sensor_is_nighttime(const NightPhantomMachine* handle);


extern void nightPhantomMachineIfaceEyes_enable(const NightPhantomMachine* handle, const sc_boolean enable);
extern void nightPhantomMachineIfaceEyes_set_intensity(const NightPhantomMachine* handle, const sc_real intensity);

extern void nightPhantomMachineIfaceWdt_enable(const NightPhantomMachine* handle);
extern void nightPhantomMachineIfaceWdt_disable(const NightPhantomMachine* handle);
extern void nightPhantomMachineIfaceWdt_reset(const NightPhantomMachine* handle);

extern void nightPhantomMachineIfaceRand_lurk(const NightPhantomMachine* handle, const sc_integer max_wait_sec, const sc_integer min_wait_sec);





#ifdef __cplusplus
}
#endif 

#endif /* NIGHTPHANTOMMACHINEREQUIRED_H_ */
