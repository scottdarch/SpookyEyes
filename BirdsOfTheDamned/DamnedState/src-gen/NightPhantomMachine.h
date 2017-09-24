
#ifndef NIGHTPHANTOMMACHINE_H_
#define NIGHTPHANTOMMACHINE_H_

#include "../src/sc_types.h"
		
#ifdef __cplusplus
extern "C" { 
#endif 

/*! \file Header of the state machine 'NightPhantomMachine'.
*/


/*! Enumeration of all states */ 
typedef enum
{
	NightPhantomMachine_last_state,
	NightPhantomMachine_main_region_running,
	NightPhantomMachine_main_region_running_r0_reading_sensitivity,
	NightPhantomMachine_main_region_running_r0_glowing,
	NightPhantomMachine_main_region_running_r0_lurking,
	NightPhantomMachine_main_region__final_
} NightPhantomMachineStates;

/*! Type definition of the data structure for the NightPhantomMachineIfaceTrimpot interface scope. */
typedef struct
{
	sc_boolean start_adc_conversion_raised;
	sc_boolean adc_conversion_complete_raised;
	sc_real adc_conversion_complete_value;
} NightPhantomMachineIfaceTrimpot;


/*! Define dimension of the state configuration vector for orthogonal states. */
#define NIGHTPHANTOMMACHINE_MAX_ORTHOGONAL_STATES 1

/*! Define indices of states in the StateConfVector */
#define SCVI_NIGHTPHANTOMMACHINE_MAIN_REGION_RUNNING 0
#define SCVI_NIGHTPHANTOMMACHINE_MAIN_REGION_RUNNING_R0_READING_SENSITIVITY 0
#define SCVI_NIGHTPHANTOMMACHINE_MAIN_REGION_RUNNING_R0_GLOWING 0
#define SCVI_NIGHTPHANTOMMACHINE_MAIN_REGION_RUNNING_R0_LURKING 0
#define SCVI_NIGHTPHANTOMMACHINE_MAIN_REGION__FINAL_ 0

/*! 
 * Type definition of the data structure for the NightPhantomMachine state machine.
 * This data structure has to be allocated by the client code. 
 */
typedef struct
{
	NightPhantomMachineStates stateConfVector[NIGHTPHANTOMMACHINE_MAX_ORTHOGONAL_STATES];
	sc_ushort stateConfVectorPosition; 
	
	NightPhantomMachineIfaceTrimpot ifaceTrimpot;
} NightPhantomMachine;


/*! Initializes the NightPhantomMachine state machine data structures. Must be called before first usage.*/
extern void nightPhantomMachine_init(NightPhantomMachine* handle);

/*! Activates the state machine */
extern void nightPhantomMachine_enter(NightPhantomMachine* handle);

/*! Deactivates the state machine */
extern void nightPhantomMachine_exit(NightPhantomMachine* handle);

/*! Performs a 'run to completion' step. */
extern void nightPhantomMachine_runCycle(NightPhantomMachine* handle);


/*! Checks if the out event 'start_adc_conversion' that is defined in the interface scope 'trimpot' has been raised. */ 
extern sc_boolean nightPhantomMachineIfaceTrimpot_israised_start_adc_conversion(const NightPhantomMachine* handle);

/*! Raises the in event 'adc_conversion_complete' that is defined in the interface scope 'trimpot'. */ 
extern void nightPhantomMachineIfaceTrimpot_raise_adc_conversion_complete(NightPhantomMachine* handle, sc_real value);


/*!
 * Checks whether the state machine is active (until 2.4.1 this method was used for states).
 * A state machine is active if it was entered. It is inactive if it has not been entered at all or if it has been exited.
 */
extern sc_boolean nightPhantomMachine_isActive(const NightPhantomMachine* handle);

/*!
 * Checks if all active states are final. 
 * If there are no active states then the state machine is considered being inactive. In this case this method returns false.
 */
extern sc_boolean nightPhantomMachine_isFinal(const NightPhantomMachine* handle);

/*! Checks if the specified state is active (until 2.4.1 the used method for states was called isActive()). */
extern sc_boolean nightPhantomMachine_isStateActive(const NightPhantomMachine* handle, NightPhantomMachineStates state);



#ifdef __cplusplus
}
#endif 

#endif /* NIGHTPHANTOMMACHINE_H_ */
