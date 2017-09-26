
#include <stdlib.h>
#include <string.h>
#include "../src/sc_types.h"
#include "NightPhantomMachine.h"
#include "NightPhantomMachineRequired.h"
/*! \file Implementation of the state machine 'NightPhantomMachine'
*/

/* prototypes of all internal functions */
static sc_boolean nightPhantomMachine_check_main_region_running_lr2_lr2(const NightPhantomMachine* handle);
static sc_boolean nightPhantomMachine_check_main_region_running_r0_reading_sensitivity_tr0_tr0(const NightPhantomMachine* handle);
static sc_boolean nightPhantomMachine_check_main_region_running_r0_menacing__region0_doing_menacing_glow_lr1_lr1(const NightPhantomMachine* handle);
static sc_boolean nightPhantomMachine_check_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_waxing_glow_lr0_lr0(const NightPhantomMachine* handle);
static sc_boolean nightPhantomMachine_check_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_waxing_glow_tr0_tr0(const NightPhantomMachine* handle);
static sc_boolean nightPhantomMachine_check_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_wainging_glow_lr0_lr0(const NightPhantomMachine* handle);
static sc_boolean nightPhantomMachine_check_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_wainging_glow_tr0_tr0(const NightPhantomMachine* handle);
static sc_boolean nightPhantomMachine_check_main_region_running_r0_lurking_tr0_tr0(const NightPhantomMachine* handle);
static sc_boolean nightPhantomMachine_check_main_region_running_r0__choice_0_tr0_tr0(const NightPhantomMachine* handle);
static sc_boolean nightPhantomMachine_check_main_region_running_r0__choice_0_tr1(const NightPhantomMachine* handle);
static void nightPhantomMachine_effect_main_region_running_lr2_lr2(NightPhantomMachine* handle);
static void nightPhantomMachine_effect_main_region_running_tr0(NightPhantomMachine* handle);
static void nightPhantomMachine_effect_main_region_running_r0_reading_sensitivity_tr0(NightPhantomMachine* handle);
static void nightPhantomMachine_effect_main_region_running_r0_menacing_tr0(NightPhantomMachine* handle);
static void nightPhantomMachine_effect_main_region_running_r0_menacing__region0_doing_menacing_glow_lr1_lr1(NightPhantomMachine* handle);
static void nightPhantomMachine_effect_main_region_running_r0_menacing__region0_doing_menacing_glow_tr0(NightPhantomMachine* handle);
static void nightPhantomMachine_effect_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_waxing_glow_lr0_lr0(NightPhantomMachine* handle);
static void nightPhantomMachine_effect_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_waxing_glow_tr0(NightPhantomMachine* handle);
static void nightPhantomMachine_effect_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_wainging_glow_lr0_lr0(NightPhantomMachine* handle);
static void nightPhantomMachine_effect_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_wainging_glow_tr0(NightPhantomMachine* handle);
static void nightPhantomMachine_effect_main_region_running_r0_lurking_tr0(NightPhantomMachine* handle);
static void nightPhantomMachine_effect_main_region_running_r0__choice_0_tr0(NightPhantomMachine* handle);
static void nightPhantomMachine_effect_main_region_running_r0__choice_0_tr1(NightPhantomMachine* handle);
static void nightPhantomMachine_enact_main_region_running(NightPhantomMachine* handle);
static void nightPhantomMachine_enact_main_region_running_r0_reading_sensitivity(NightPhantomMachine* handle);
static void nightPhantomMachine_enact_main_region_running_r0_menacing__region0_doing_menacing_glow(NightPhantomMachine* handle);
static void nightPhantomMachine_enact_main_region_running_r0_lurking(NightPhantomMachine* handle);
static void nightPhantomMachine_exact_main_region_running(NightPhantomMachine* handle);
static void nightPhantomMachine_exact_main_region_running_r0_menacing__region0_doing_menacing_glow(NightPhantomMachine* handle);
static void nightPhantomMachine_enseq_main_region_running_default(NightPhantomMachine* handle);
static void nightPhantomMachine_enseq_main_region_running_r0_reading_sensitivity_default(NightPhantomMachine* handle);
static void nightPhantomMachine_enseq_main_region_running_r0_menacing_default(NightPhantomMachine* handle);
static void nightPhantomMachine_enseq_main_region_running_r0_menacing__region0_doing_menacing_glow_default(NightPhantomMachine* handle);
static void nightPhantomMachine_enseq_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_waxing_glow_default(NightPhantomMachine* handle);
static void nightPhantomMachine_enseq_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_wainging_glow_default(NightPhantomMachine* handle);
static void nightPhantomMachine_enseq_main_region_running_r0_lurking_default(NightPhantomMachine* handle);
static void nightPhantomMachine_enseq_main_region__final__default(NightPhantomMachine* handle);
static void nightPhantomMachine_enseq_main_region_default(NightPhantomMachine* handle);
static void nightPhantomMachine_enseq_main_region_running_r0_default(NightPhantomMachine* handle);
static void nightPhantomMachine_enseq_main_region_running_r0_menacing__region0_default(NightPhantomMachine* handle);
static void nightPhantomMachine_enseq_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_default(NightPhantomMachine* handle);
static void nightPhantomMachine_exseq_main_region_running(NightPhantomMachine* handle);
static void nightPhantomMachine_exseq_main_region_running_r0_reading_sensitivity(NightPhantomMachine* handle);
static void nightPhantomMachine_exseq_main_region_running_r0_menacing(NightPhantomMachine* handle);
static void nightPhantomMachine_exseq_main_region_running_r0_menacing__region0_doing_menacing_glow(NightPhantomMachine* handle);
static void nightPhantomMachine_exseq_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_waxing_glow(NightPhantomMachine* handle);
static void nightPhantomMachine_exseq_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_wainging_glow(NightPhantomMachine* handle);
static void nightPhantomMachine_exseq_main_region_running_r0_lurking(NightPhantomMachine* handle);
static void nightPhantomMachine_exseq_main_region__final_(NightPhantomMachine* handle);
static void nightPhantomMachine_exseq_main_region(NightPhantomMachine* handle);
static void nightPhantomMachine_exseq_main_region_running_r0(NightPhantomMachine* handle);
static void nightPhantomMachine_exseq_main_region_running_r0_menacing__region0(NightPhantomMachine* handle);
static void nightPhantomMachine_exseq_main_region_running_r0_menacing__region0_doing_menacing_glow__region0(NightPhantomMachine* handle);
static void nightPhantomMachine_react_main_region_running_r0_reading_sensitivity(NightPhantomMachine* handle);
static void nightPhantomMachine_react_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_waxing_glow(NightPhantomMachine* handle);
static void nightPhantomMachine_react_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_wainging_glow(NightPhantomMachine* handle);
static void nightPhantomMachine_react_main_region_running_r0_lurking(NightPhantomMachine* handle);
static void nightPhantomMachine_react_main_region__final_(NightPhantomMachine* handle);
static void nightPhantomMachine_react_main_region_running_r0__choice_0(NightPhantomMachine* handle);
static void nightPhantomMachine_react_main_region__entry_Default(NightPhantomMachine* handle);
static void nightPhantomMachine_react_main_region_running_r0__entry_Default(NightPhantomMachine* handle);
static void nightPhantomMachine_react_main_region_running_r0_menacing__region0_doing_menacing_glow__region0__entry_Default(NightPhantomMachine* handle);
static void nightPhantomMachine_react_main_region_running_r0_menacing__region0__entry_Default(NightPhantomMachine* handle);
static void nightPhantomMachine_react_main_region_running_r0_vampire_sleep(NightPhantomMachine* handle);
static void nightPhantomMachine_react_main_region_running_r0_menacing__region0__exit_Default(NightPhantomMachine* handle);
static void nightPhantomMachine_react_main_region_running_r0_menacing__region0_doing_menacing_glow__region0__exit_Default(NightPhantomMachine* handle);
static void nightPhantomMachine_clearInEvents(NightPhantomMachine* handle);
static void nightPhantomMachine_clearOutEvents(NightPhantomMachine* handle);


void nightPhantomMachine_init(NightPhantomMachine* handle)
{
		sc_integer i;
	
		for (i = 0; i < NIGHTPHANTOMMACHINE_MAX_ORTHOGONAL_STATES; ++i)
		{
			handle->stateConfVector[i] = NightPhantomMachine_last_state;
		}
		
		
		handle->stateConfVectorPosition = 0;
	
		nightPhantomMachine_clearInEvents(handle);
		nightPhantomMachine_clearOutEvents(handle);
	
		/* Default init sequence for statechart NightPhantomMachine */
		handle->internal.glow_intensity = 0.0;
}

void nightPhantomMachine_enter(NightPhantomMachine* handle)
{
	/* Default enter sequence for statechart NightPhantomMachine */
	nightPhantomMachine_enseq_main_region_default(handle);
}

void nightPhantomMachine_exit(NightPhantomMachine* handle)
{
	/* Default exit sequence for statechart NightPhantomMachine */
	nightPhantomMachine_exseq_main_region(handle);
}

sc_boolean nightPhantomMachine_isActive(const NightPhantomMachine* handle)
{
	sc_boolean result = bool_false;
	int i;
	
	for(i = 0; i < NIGHTPHANTOMMACHINE_MAX_ORTHOGONAL_STATES; i++)
	{
		result = result || handle->stateConfVector[i] != NightPhantomMachine_last_state;
	}
	
	return result;
}

sc_boolean nightPhantomMachine_isFinal(const NightPhantomMachine* handle)
{
	return (handle->stateConfVector[0] == NightPhantomMachine_main_region__final_);

}

static void nightPhantomMachine_clearInEvents(NightPhantomMachine* handle)
{
	handle->ifaceAdc.acquisition_complete_raised = bool_false;
}

static void nightPhantomMachine_clearOutEvents(NightPhantomMachine* handle)
{
	handle->ifaceAdc.start_acquire_trimpot_raised = bool_false;
	handle->ifaceRand.set_seed_raised = bool_false;
}

void nightPhantomMachine_runCycle(NightPhantomMachine* handle)
{
	
	nightPhantomMachine_clearOutEvents(handle);
	for (handle->stateConfVectorPosition = 0;
		handle->stateConfVectorPosition < NIGHTPHANTOMMACHINE_MAX_ORTHOGONAL_STATES;
		handle->stateConfVectorPosition++)
		{
			
		switch (handle->stateConfVector[handle->stateConfVectorPosition])
		{
		case NightPhantomMachine_main_region_running_r0_reading_sensitivity:
		{
			nightPhantomMachine_react_main_region_running_r0_reading_sensitivity(handle);
			break;
		}
		case NightPhantomMachine_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_waxing_glow:
		{
			nightPhantomMachine_react_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_waxing_glow(handle);
			break;
		}
		case NightPhantomMachine_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_wainging_glow:
		{
			nightPhantomMachine_react_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_wainging_glow(handle);
			break;
		}
		case NightPhantomMachine_main_region_running_r0_lurking:
		{
			nightPhantomMachine_react_main_region_running_r0_lurking(handle);
			break;
		}
		case NightPhantomMachine_main_region__final_:
		{
			nightPhantomMachine_react_main_region__final_(handle);
			break;
		}
		default:
			break;
		}
	}
	
	nightPhantomMachine_clearInEvents(handle);
}


sc_boolean nightPhantomMachine_isStateActive(const NightPhantomMachine* handle, NightPhantomMachineStates state)
{
	sc_boolean result = bool_false;
	switch (state)
	{
		case NightPhantomMachine_main_region_running :
			result = (sc_boolean) (handle->stateConfVector[SCVI_NIGHTPHANTOMMACHINE_MAIN_REGION_RUNNING] >= NightPhantomMachine_main_region_running
				&& handle->stateConfVector[SCVI_NIGHTPHANTOMMACHINE_MAIN_REGION_RUNNING] <= NightPhantomMachine_main_region_running_r0_lurking);
			break;
		case NightPhantomMachine_main_region_running_r0_reading_sensitivity :
			result = (sc_boolean) (handle->stateConfVector[SCVI_NIGHTPHANTOMMACHINE_MAIN_REGION_RUNNING_R0_READING_SENSITIVITY] == NightPhantomMachine_main_region_running_r0_reading_sensitivity
			);
			break;
		case NightPhantomMachine_main_region_running_r0_menacing :
			result = (sc_boolean) (handle->stateConfVector[SCVI_NIGHTPHANTOMMACHINE_MAIN_REGION_RUNNING_R0_MENACING] >= NightPhantomMachine_main_region_running_r0_menacing
				&& handle->stateConfVector[SCVI_NIGHTPHANTOMMACHINE_MAIN_REGION_RUNNING_R0_MENACING] <= NightPhantomMachine_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_wainging_glow);
			break;
		case NightPhantomMachine_main_region_running_r0_menacing__region0_doing_menacing_glow :
			result = (sc_boolean) (handle->stateConfVector[SCVI_NIGHTPHANTOMMACHINE_MAIN_REGION_RUNNING_R0_MENACING__REGION0_DOING_MENACING_GLOW] >= NightPhantomMachine_main_region_running_r0_menacing__region0_doing_menacing_glow
				&& handle->stateConfVector[SCVI_NIGHTPHANTOMMACHINE_MAIN_REGION_RUNNING_R0_MENACING__REGION0_DOING_MENACING_GLOW] <= NightPhantomMachine_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_wainging_glow);
			break;
		case NightPhantomMachine_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_waxing_glow :
			result = (sc_boolean) (handle->stateConfVector[SCVI_NIGHTPHANTOMMACHINE_MAIN_REGION_RUNNING_R0_MENACING__REGION0_DOING_MENACING_GLOW__REGION0_WAXING_GLOW] == NightPhantomMachine_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_waxing_glow
			);
			break;
		case NightPhantomMachine_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_wainging_glow :
			result = (sc_boolean) (handle->stateConfVector[SCVI_NIGHTPHANTOMMACHINE_MAIN_REGION_RUNNING_R0_MENACING__REGION0_DOING_MENACING_GLOW__REGION0_WAINGING_GLOW] == NightPhantomMachine_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_wainging_glow
			);
			break;
		case NightPhantomMachine_main_region_running_r0_lurking :
			result = (sc_boolean) (handle->stateConfVector[SCVI_NIGHTPHANTOMMACHINE_MAIN_REGION_RUNNING_R0_LURKING] == NightPhantomMachine_main_region_running_r0_lurking
			);
			break;
		case NightPhantomMachine_main_region__final_ :
			result = (sc_boolean) (handle->stateConfVector[SCVI_NIGHTPHANTOMMACHINE_MAIN_REGION__FINAL_] == NightPhantomMachine_main_region__final_
			);
			break;
		default:
			result = bool_false;
			break;
	}
	return result;
}



void nightPhantomMachineIfaceAdc_raise_acquisition_complete(NightPhantomMachine* handle, sc_real value)
{
	handle->ifaceAdc.acquisition_complete_value = value;
	handle->ifaceAdc.acquisition_complete_raised = bool_true;
}

sc_boolean nightPhantomMachineIfaceAdc_israised_start_acquire_trimpot(const NightPhantomMachine* handle)
{
	return handle->ifaceAdc.start_acquire_trimpot_raised;
}






sc_boolean nightPhantomMachineIfaceRand_israised_set_seed(const NightPhantomMachine* handle)
{
	return handle->ifaceRand.set_seed_raised;
}
sc_real nightPhantomMachineIfaceRand_get_set_seed_value(const NightPhantomMachine* handle)
{
	return handle->ifaceRand.set_seed_value;
}


/* implementations of all internal functions */

static sc_boolean nightPhantomMachine_check_main_region_running_lr2_lr2(const NightPhantomMachine* handle)
{
	return bool_true;
}

static sc_boolean nightPhantomMachine_check_main_region_running_r0_reading_sensitivity_tr0_tr0(const NightPhantomMachine* handle)
{
	return handle->ifaceAdc.acquisition_complete_raised;
}

static sc_boolean nightPhantomMachine_check_main_region_running_r0_menacing__region0_doing_menacing_glow_lr1_lr1(const NightPhantomMachine* handle)
{
	return bool_true;
}

static sc_boolean nightPhantomMachine_check_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_waxing_glow_lr0_lr0(const NightPhantomMachine* handle)
{
	return bool_true;
}

static sc_boolean nightPhantomMachine_check_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_waxing_glow_tr0_tr0(const NightPhantomMachine* handle)
{
	return (handle->internal.glow_intensity >= 1.0) ? bool_true : bool_false;
}

static sc_boolean nightPhantomMachine_check_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_wainging_glow_lr0_lr0(const NightPhantomMachine* handle)
{
	return bool_true;
}

static sc_boolean nightPhantomMachine_check_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_wainging_glow_tr0_tr0(const NightPhantomMachine* handle)
{
	return (handle->internal.glow_intensity <= 0.0) ? bool_true : bool_false;
}

static sc_boolean nightPhantomMachine_check_main_region_running_r0_lurking_tr0_tr0(const NightPhantomMachine* handle)
{
	return bool_true;
}

static sc_boolean nightPhantomMachine_check_main_region_running_r0__choice_0_tr0_tr0(const NightPhantomMachine* handle)
{
	return (!nightPhantomMachineIfaceDaylight_sensor_is_nighttime(handle)) ? bool_true : bool_false;
}

static sc_boolean nightPhantomMachine_check_main_region_running_r0__choice_0_tr1(const NightPhantomMachine* handle)
{
	return bool_true;
}

static void nightPhantomMachine_effect_main_region_running_lr2_lr2(NightPhantomMachine* handle)
{
	nightPhantomMachineIfaceWdt_reset(handle);
}

static void nightPhantomMachine_effect_main_region_running_tr0(NightPhantomMachine* handle)
{
	nightPhantomMachine_exseq_main_region_running(handle);
	nightPhantomMachine_enseq_main_region__final__default(handle);
}

static void nightPhantomMachine_effect_main_region_running_r0_reading_sensitivity_tr0(NightPhantomMachine* handle)
{
	nightPhantomMachine_exseq_main_region_running_r0_reading_sensitivity(handle);
	nightPhantomMachineIfaceDaylight_sensor_set_sensitivity(handle, handle->ifaceAdc.acquisition_complete_value);
	handle->ifaceRand.set_seed_value = handle->ifaceAdc.acquisition_complete_value;
	handle->ifaceRand.set_seed_raised = bool_true;
	nightPhantomMachine_react_main_region_running_r0__choice_0(handle);
}

static void nightPhantomMachine_effect_main_region_running_r0_menacing_tr0(NightPhantomMachine* handle)
{
	nightPhantomMachine_exseq_main_region_running_r0_menacing(handle);
	nightPhantomMachine_enseq_main_region_running_r0_lurking_default(handle);
}

static void nightPhantomMachine_effect_main_region_running_r0_menacing__region0_doing_menacing_glow_lr1_lr1(NightPhantomMachine* handle)
{
	nightPhantomMachineIfaceEyes_set_intensity(handle, handle->internal.glow_intensity);
}

static void nightPhantomMachine_effect_main_region_running_r0_menacing__region0_doing_menacing_glow_tr0(NightPhantomMachine* handle)
{
	nightPhantomMachine_exseq_main_region_running_r0_menacing__region0_doing_menacing_glow(handle);
	nightPhantomMachine_react_main_region_running_r0_menacing__region0__exit_Default(handle);
}

static void nightPhantomMachine_effect_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_waxing_glow_lr0_lr0(NightPhantomMachine* handle)
{
	handle->internal.glow_intensity += 1.0E-4;
}

static void nightPhantomMachine_effect_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_waxing_glow_tr0(NightPhantomMachine* handle)
{
	nightPhantomMachine_exseq_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_waxing_glow(handle);
	nightPhantomMachine_enseq_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_wainging_glow_default(handle);
}

static void nightPhantomMachine_effect_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_wainging_glow_lr0_lr0(NightPhantomMachine* handle)
{
	handle->internal.glow_intensity -= 1.0E-4;
}

static void nightPhantomMachine_effect_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_wainging_glow_tr0(NightPhantomMachine* handle)
{
	nightPhantomMachine_exseq_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_wainging_glow(handle);
	nightPhantomMachine_react_main_region_running_r0_menacing__region0_doing_menacing_glow__region0__exit_Default(handle);
}

static void nightPhantomMachine_effect_main_region_running_r0_lurking_tr0(NightPhantomMachine* handle)
{
	nightPhantomMachine_exseq_main_region_running_r0_lurking(handle);
	nightPhantomMachine_react_main_region_running_r0__choice_0(handle);
}

static void nightPhantomMachine_effect_main_region_running_r0__choice_0_tr0(NightPhantomMachine* handle)
{
	nightPhantomMachine_react_main_region_running_r0_vampire_sleep(handle);
}

static void nightPhantomMachine_effect_main_region_running_r0__choice_0_tr1(NightPhantomMachine* handle)
{
	nightPhantomMachine_enseq_main_region_running_r0_menacing_default(handle);
}

/* Entry action for state 'running'. */
static void nightPhantomMachine_enact_main_region_running(NightPhantomMachine* handle)
{
	/* Entry action for state 'running'. */
	nightPhantomMachineIfaceWdt_enable(handle);
}

/* Entry action for state 'reading sensitivity'. */
static void nightPhantomMachine_enact_main_region_running_r0_reading_sensitivity(NightPhantomMachine* handle)
{
	/* Entry action for state 'reading sensitivity'. */
	handle->ifaceAdc.start_acquire_trimpot_raised = bool_true;
}

/* Entry action for state 'doing menacing glow'. */
static void nightPhantomMachine_enact_main_region_running_r0_menacing__region0_doing_menacing_glow(NightPhantomMachine* handle)
{
	/* Entry action for state 'doing menacing glow'. */
	nightPhantomMachineIfaceEyes_enable(handle, bool_true);
	handle->internal.glow_intensity = 0.0;
}

/* Entry action for state 'lurking'. */
static void nightPhantomMachine_enact_main_region_running_r0_lurking(NightPhantomMachine* handle)
{
	/* Entry action for state 'lurking'. */
	nightPhantomMachineIfaceRand_lurk(handle, 25, 3);
}

/* Exit action for state 'running'. */
static void nightPhantomMachine_exact_main_region_running(NightPhantomMachine* handle)
{
	/* Exit action for state 'running'. */
	nightPhantomMachineIfaceWdt_disable(handle);
}

/* Exit action for state 'doing menacing glow'. */
static void nightPhantomMachine_exact_main_region_running_r0_menacing__region0_doing_menacing_glow(NightPhantomMachine* handle)
{
	/* Exit action for state 'doing menacing glow'. */
	nightPhantomMachineIfaceEyes_enable(handle, bool_false);
}

/* 'default' enter sequence for state running */
static void nightPhantomMachine_enseq_main_region_running_default(NightPhantomMachine* handle)
{
	/* 'default' enter sequence for state running */
	nightPhantomMachine_enact_main_region_running(handle);
	nightPhantomMachine_enseq_main_region_running_r0_default(handle);
}

/* 'default' enter sequence for state reading sensitivity */
static void nightPhantomMachine_enseq_main_region_running_r0_reading_sensitivity_default(NightPhantomMachine* handle)
{
	/* 'default' enter sequence for state reading sensitivity */
	nightPhantomMachine_enact_main_region_running_r0_reading_sensitivity(handle);
	handle->stateConfVector[0] = NightPhantomMachine_main_region_running_r0_reading_sensitivity;
	handle->stateConfVectorPosition = 0;
}

/* 'default' enter sequence for state menacing */
static void nightPhantomMachine_enseq_main_region_running_r0_menacing_default(NightPhantomMachine* handle)
{
	/* 'default' enter sequence for state menacing */
	nightPhantomMachine_enseq_main_region_running_r0_menacing__region0_default(handle);
}

/* 'default' enter sequence for state doing menacing glow */
static void nightPhantomMachine_enseq_main_region_running_r0_menacing__region0_doing_menacing_glow_default(NightPhantomMachine* handle)
{
	/* 'default' enter sequence for state doing menacing glow */
	nightPhantomMachine_enact_main_region_running_r0_menacing__region0_doing_menacing_glow(handle);
	nightPhantomMachine_enseq_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_default(handle);
}

/* 'default' enter sequence for state waxing glow */
static void nightPhantomMachine_enseq_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_waxing_glow_default(NightPhantomMachine* handle)
{
	/* 'default' enter sequence for state waxing glow */
	handle->stateConfVector[0] = NightPhantomMachine_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_waxing_glow;
	handle->stateConfVectorPosition = 0;
}

/* 'default' enter sequence for state wainging glow */
static void nightPhantomMachine_enseq_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_wainging_glow_default(NightPhantomMachine* handle)
{
	/* 'default' enter sequence for state wainging glow */
	handle->stateConfVector[0] = NightPhantomMachine_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_wainging_glow;
	handle->stateConfVectorPosition = 0;
}

/* 'default' enter sequence for state lurking */
static void nightPhantomMachine_enseq_main_region_running_r0_lurking_default(NightPhantomMachine* handle)
{
	/* 'default' enter sequence for state lurking */
	nightPhantomMachine_enact_main_region_running_r0_lurking(handle);
	handle->stateConfVector[0] = NightPhantomMachine_main_region_running_r0_lurking;
	handle->stateConfVectorPosition = 0;
}

/* Default enter sequence for state null */
static void nightPhantomMachine_enseq_main_region__final__default(NightPhantomMachine* handle)
{
	/* Default enter sequence for state null */
	handle->stateConfVector[0] = NightPhantomMachine_main_region__final_;
	handle->stateConfVectorPosition = 0;
}

/* 'default' enter sequence for region main region */
static void nightPhantomMachine_enseq_main_region_default(NightPhantomMachine* handle)
{
	/* 'default' enter sequence for region main region */
	nightPhantomMachine_react_main_region__entry_Default(handle);
}

/* 'default' enter sequence for region r0 */
static void nightPhantomMachine_enseq_main_region_running_r0_default(NightPhantomMachine* handle)
{
	/* 'default' enter sequence for region r0 */
	nightPhantomMachine_react_main_region_running_r0__entry_Default(handle);
}

/* 'default' enter sequence for region null */
static void nightPhantomMachine_enseq_main_region_running_r0_menacing__region0_default(NightPhantomMachine* handle)
{
	/* 'default' enter sequence for region null */
	nightPhantomMachine_react_main_region_running_r0_menacing__region0__entry_Default(handle);
}

/* 'default' enter sequence for region null */
static void nightPhantomMachine_enseq_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_default(NightPhantomMachine* handle)
{
	/* 'default' enter sequence for region null */
	nightPhantomMachine_react_main_region_running_r0_menacing__region0_doing_menacing_glow__region0__entry_Default(handle);
}

/* Default exit sequence for state running */
static void nightPhantomMachine_exseq_main_region_running(NightPhantomMachine* handle)
{
	/* Default exit sequence for state running */
	nightPhantomMachine_exseq_main_region_running_r0(handle);
	nightPhantomMachine_exact_main_region_running(handle);
}

/* Default exit sequence for state reading sensitivity */
static void nightPhantomMachine_exseq_main_region_running_r0_reading_sensitivity(NightPhantomMachine* handle)
{
	/* Default exit sequence for state reading sensitivity */
	handle->stateConfVector[0] = NightPhantomMachine_last_state;
	handle->stateConfVectorPosition = 0;
}

/* Default exit sequence for state menacing */
static void nightPhantomMachine_exseq_main_region_running_r0_menacing(NightPhantomMachine* handle)
{
	/* Default exit sequence for state menacing */
	nightPhantomMachine_exseq_main_region_running_r0_menacing__region0(handle);
}

/* Default exit sequence for state doing menacing glow */
static void nightPhantomMachine_exseq_main_region_running_r0_menacing__region0_doing_menacing_glow(NightPhantomMachine* handle)
{
	/* Default exit sequence for state doing menacing glow */
	nightPhantomMachine_exseq_main_region_running_r0_menacing__region0_doing_menacing_glow__region0(handle);
	nightPhantomMachine_exact_main_region_running_r0_menacing__region0_doing_menacing_glow(handle);
}

/* Default exit sequence for state waxing glow */
static void nightPhantomMachine_exseq_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_waxing_glow(NightPhantomMachine* handle)
{
	/* Default exit sequence for state waxing glow */
	handle->stateConfVector[0] = NightPhantomMachine_last_state;
	handle->stateConfVectorPosition = 0;
}

/* Default exit sequence for state wainging glow */
static void nightPhantomMachine_exseq_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_wainging_glow(NightPhantomMachine* handle)
{
	/* Default exit sequence for state wainging glow */
	handle->stateConfVector[0] = NightPhantomMachine_last_state;
	handle->stateConfVectorPosition = 0;
}

/* Default exit sequence for state lurking */
static void nightPhantomMachine_exseq_main_region_running_r0_lurking(NightPhantomMachine* handle)
{
	/* Default exit sequence for state lurking */
	handle->stateConfVector[0] = NightPhantomMachine_last_state;
	handle->stateConfVectorPosition = 0;
}

/* Default exit sequence for final state. */
static void nightPhantomMachine_exseq_main_region__final_(NightPhantomMachine* handle)
{
	/* Default exit sequence for final state. */
	handle->stateConfVector[0] = NightPhantomMachine_last_state;
	handle->stateConfVectorPosition = 0;
}

/* Default exit sequence for region main region */
static void nightPhantomMachine_exseq_main_region(NightPhantomMachine* handle)
{
	/* Default exit sequence for region main region */
	/* Handle exit of all possible states (of NightPhantomMachine.main_region) at position 0... */
	switch(handle->stateConfVector[ 0 ])
	{
		case NightPhantomMachine_main_region_running_r0_reading_sensitivity :
		{
			nightPhantomMachine_exseq_main_region_running_r0_reading_sensitivity(handle);
			nightPhantomMachine_exact_main_region_running(handle);
			break;
		}
		case NightPhantomMachine_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_waxing_glow :
		{
			nightPhantomMachine_exseq_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_waxing_glow(handle);
			nightPhantomMachine_exact_main_region_running_r0_menacing__region0_doing_menacing_glow(handle);
			nightPhantomMachine_exact_main_region_running(handle);
			break;
		}
		case NightPhantomMachine_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_wainging_glow :
		{
			nightPhantomMachine_exseq_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_wainging_glow(handle);
			nightPhantomMachine_exact_main_region_running_r0_menacing__region0_doing_menacing_glow(handle);
			nightPhantomMachine_exact_main_region_running(handle);
			break;
		}
		case NightPhantomMachine_main_region_running_r0_lurking :
		{
			nightPhantomMachine_exseq_main_region_running_r0_lurking(handle);
			nightPhantomMachine_exact_main_region_running(handle);
			break;
		}
		case NightPhantomMachine_main_region__final_ :
		{
			nightPhantomMachine_exseq_main_region__final_(handle);
			break;
		}
		default: break;
	}
}

/* Default exit sequence for region r0 */
static void nightPhantomMachine_exseq_main_region_running_r0(NightPhantomMachine* handle)
{
	/* Default exit sequence for region r0 */
	/* Handle exit of all possible states (of NightPhantomMachine.main_region.running.r0) at position 0... */
	switch(handle->stateConfVector[ 0 ])
	{
		case NightPhantomMachine_main_region_running_r0_reading_sensitivity :
		{
			nightPhantomMachine_exseq_main_region_running_r0_reading_sensitivity(handle);
			break;
		}
		case NightPhantomMachine_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_waxing_glow :
		{
			nightPhantomMachine_exseq_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_waxing_glow(handle);
			nightPhantomMachine_exact_main_region_running_r0_menacing__region0_doing_menacing_glow(handle);
			break;
		}
		case NightPhantomMachine_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_wainging_glow :
		{
			nightPhantomMachine_exseq_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_wainging_glow(handle);
			nightPhantomMachine_exact_main_region_running_r0_menacing__region0_doing_menacing_glow(handle);
			break;
		}
		case NightPhantomMachine_main_region_running_r0_lurking :
		{
			nightPhantomMachine_exseq_main_region_running_r0_lurking(handle);
			break;
		}
		default: break;
	}
}

/* Default exit sequence for region null */
static void nightPhantomMachine_exseq_main_region_running_r0_menacing__region0(NightPhantomMachine* handle)
{
	/* Default exit sequence for region null */
	/* Handle exit of all possible states (of NightPhantomMachine.main_region.running.r0.menacing._region0) at position 0... */
	switch(handle->stateConfVector[ 0 ])
	{
		case NightPhantomMachine_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_waxing_glow :
		{
			nightPhantomMachine_exseq_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_waxing_glow(handle);
			nightPhantomMachine_exact_main_region_running_r0_menacing__region0_doing_menacing_glow(handle);
			break;
		}
		case NightPhantomMachine_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_wainging_glow :
		{
			nightPhantomMachine_exseq_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_wainging_glow(handle);
			nightPhantomMachine_exact_main_region_running_r0_menacing__region0_doing_menacing_glow(handle);
			break;
		}
		default: break;
	}
}

/* Default exit sequence for region null */
static void nightPhantomMachine_exseq_main_region_running_r0_menacing__region0_doing_menacing_glow__region0(NightPhantomMachine* handle)
{
	/* Default exit sequence for region null */
	/* Handle exit of all possible states (of NightPhantomMachine.main_region.running.r0.menacing._region0.doing_menacing_glow._region0) at position 0... */
	switch(handle->stateConfVector[ 0 ])
	{
		case NightPhantomMachine_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_waxing_glow :
		{
			nightPhantomMachine_exseq_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_waxing_glow(handle);
			break;
		}
		case NightPhantomMachine_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_wainging_glow :
		{
			nightPhantomMachine_exseq_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_wainging_glow(handle);
			break;
		}
		default: break;
	}
}

/* The reactions of state reading sensitivity. */
static void nightPhantomMachine_react_main_region_running_r0_reading_sensitivity(NightPhantomMachine* handle)
{
	/* The reactions of state reading sensitivity. */
	nightPhantomMachine_effect_main_region_running_lr2_lr2(handle);
	if (nightPhantomMachine_check_main_region_running_r0_reading_sensitivity_tr0_tr0(handle) == bool_true)
	{ 
		nightPhantomMachine_effect_main_region_running_r0_reading_sensitivity_tr0(handle);
	} 
}

/* The reactions of state waxing glow. */
static void nightPhantomMachine_react_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_waxing_glow(NightPhantomMachine* handle)
{
	/* The reactions of state waxing glow. */
	nightPhantomMachine_effect_main_region_running_lr2_lr2(handle);
	nightPhantomMachine_effect_main_region_running_r0_menacing__region0_doing_menacing_glow_lr1_lr1(handle);
	if (nightPhantomMachine_check_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_waxing_glow_tr0_tr0(handle) == bool_true)
	{ 
		nightPhantomMachine_effect_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_waxing_glow_tr0(handle);
	}  else
	{
		nightPhantomMachine_effect_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_waxing_glow_lr0_lr0(handle);
	}
}

/* The reactions of state wainging glow. */
static void nightPhantomMachine_react_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_wainging_glow(NightPhantomMachine* handle)
{
	/* The reactions of state wainging glow. */
	nightPhantomMachine_effect_main_region_running_lr2_lr2(handle);
	nightPhantomMachine_effect_main_region_running_r0_menacing__region0_doing_menacing_glow_lr1_lr1(handle);
	if (nightPhantomMachine_check_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_wainging_glow_tr0_tr0(handle) == bool_true)
	{ 
		nightPhantomMachine_effect_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_wainging_glow_tr0(handle);
	}  else
	{
		nightPhantomMachine_effect_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_wainging_glow_lr0_lr0(handle);
	}
}

/* The reactions of state lurking. */
static void nightPhantomMachine_react_main_region_running_r0_lurking(NightPhantomMachine* handle)
{
	/* The reactions of state lurking. */
	nightPhantomMachine_effect_main_region_running_lr2_lr2(handle);
	nightPhantomMachine_effect_main_region_running_r0_lurking_tr0(handle);
}

/* The reactions of state null. */
static void nightPhantomMachine_react_main_region__final_(NightPhantomMachine* handle)
{
}

/* The reactions of state null. */
static void nightPhantomMachine_react_main_region_running_r0__choice_0(NightPhantomMachine* handle)
{
	/* The reactions of state null. */
	if (nightPhantomMachine_check_main_region_running_r0__choice_0_tr0_tr0(handle) == bool_true)
	{ 
		nightPhantomMachine_effect_main_region_running_r0__choice_0_tr0(handle);
	}  else
	{
		nightPhantomMachine_effect_main_region_running_r0__choice_0_tr1(handle);
	}
}

/* Default react sequence for initial entry  */
static void nightPhantomMachine_react_main_region__entry_Default(NightPhantomMachine* handle)
{
	/* Default react sequence for initial entry  */
	nightPhantomMachine_enseq_main_region_running_default(handle);
}

/* Default react sequence for initial entry  */
static void nightPhantomMachine_react_main_region_running_r0__entry_Default(NightPhantomMachine* handle)
{
	/* Default react sequence for initial entry  */
	nightPhantomMachine_enseq_main_region_running_r0_reading_sensitivity_default(handle);
}

/* Default react sequence for initial entry  */
static void nightPhantomMachine_react_main_region_running_r0_menacing__region0_doing_menacing_glow__region0__entry_Default(NightPhantomMachine* handle)
{
	/* Default react sequence for initial entry  */
	nightPhantomMachine_enseq_main_region_running_r0_menacing__region0_doing_menacing_glow__region0_waxing_glow_default(handle);
}

/* Default react sequence for initial entry  */
static void nightPhantomMachine_react_main_region_running_r0_menacing__region0__entry_Default(NightPhantomMachine* handle)
{
	/* Default react sequence for initial entry  */
	nightPhantomMachine_enseq_main_region_running_r0_menacing__region0_doing_menacing_glow_default(handle);
}

/* The reactions of exit vampire_sleep. */
static void nightPhantomMachine_react_main_region_running_r0_vampire_sleep(NightPhantomMachine* handle)
{
	/* The reactions of exit vampire_sleep. */
	nightPhantomMachine_effect_main_region_running_tr0(handle);
}

/* The reactions of exit default. */
static void nightPhantomMachine_react_main_region_running_r0_menacing__region0__exit_Default(NightPhantomMachine* handle)
{
	/* The reactions of exit default. */
	nightPhantomMachine_effect_main_region_running_r0_menacing_tr0(handle);
}

/* The reactions of exit default. */
static void nightPhantomMachine_react_main_region_running_r0_menacing__region0_doing_menacing_glow__region0__exit_Default(NightPhantomMachine* handle)
{
	/* The reactions of exit default. */
	nightPhantomMachine_effect_main_region_running_r0_menacing__region0_doing_menacing_glow_tr0(handle);
}


