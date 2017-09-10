
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
	- nightPhantomMachineIfaceEyes_start_glowing
	- nightPhantomMachineIfaceEyes_is_glowing
	- nightPhantomMachineIfaceEyes_stop_glowing
	- nightPhantomMachineIfaceWdt_enable
	- nightPhantomMachineIfaceWdt_disable
	- nightPhantomMachineIfaceWdt_reset
are defined.

These functions will be called during a 'run to completion step' (runCycle) of the statechart. 
There are some constraints that have to be considered for the implementation of these functions:
	- never call the statechart API functions from within these functions.
	- make sure that the execution time is as short as possible.
 
*/
extern void nightPhantomMachineIfaceDaylight_sensor_set_sensitivity(const NightPhantomMachine* handle, const sc_real sensitivity);
extern sc_boolean nightPhantomMachineIfaceDaylight_sensor_is_nighttime(const NightPhantomMachine* handle);


extern void nightPhantomMachineIfaceEyes_start_glowing(const NightPhantomMachine* handle);
extern sc_boolean nightPhantomMachineIfaceEyes_is_glowing(const NightPhantomMachine* handle);
extern void nightPhantomMachineIfaceEyes_stop_glowing(const NightPhantomMachine* handle);

extern void nightPhantomMachineIfaceWdt_enable(const NightPhantomMachine* handle);
extern void nightPhantomMachineIfaceWdt_disable(const NightPhantomMachine* handle);
extern void nightPhantomMachineIfaceWdt_reset(const NightPhantomMachine* handle);




#ifdef __cplusplus
}
#endif 

#endif /* NIGHTPHANTOMMACHINEREQUIRED_H_ */
