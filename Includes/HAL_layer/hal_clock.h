/*
 * hal_clock.h
 *
 *  Created on: Jun 2, 2024
 *      Author: Viet Ha
 */

/*******************************************************************************
 * Header guards
 ******************************************************************************/
#ifndef INCLUDES_HAL_LAYER_HAL_CLOCK_H_
#define INCLUDES_HAL_LAYER_HAL_CLOCK_H_

/*******************************************************************************
 * Include
 ******************************************************************************/
#include "MKL46Z4.h"

/*******************************************************************************
 * Prototype
 ******************************************************************************/
/**
 * @brief Setup clock for PORTx.
 *
 * This function enables the clock for PORTx.
 */
void HAL_PORT_EnableClock(PORT_Type *port);

#endif /* INCLUDES_HAL_LAYER_HAL_CLOCK_H_ */
