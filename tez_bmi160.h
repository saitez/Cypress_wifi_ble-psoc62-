/* C  standard libraries
 written by saitez, using Cypress PSOC6 WIFI-BT 
usage : PEDOMETER , etc */
 

#ifndef TEZ_BMI160_H_
#define TEZ_BMI160_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "tez_bmi160_defs.h"
#include <math.h>
#include <string.h>
#include <stdlib.h>





// init function

int8_t bmi160_init(struct bmi160_dev *dev);

//reads the data from the given register

int8_t bmi160_get_regs(uint8_t reg_addr, uint8_t *data, uint16_t len, const struct struct bmi160_dev *dev );


 