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

//writes the given data to the register address

int8_t bmi160_set_regs(uint8_t reg_addr, uin8_t *data, uint16_t len, const struct bmi160_dev *dev );

// soft reset

int8_t bmi160_soft_reset(struct bmi160_dev *dev);

// power mode , range, bandwidth

int8_t bmi160_set_sens_conf(struct bmi160_dev *dev);


// set power mode of the sensor

int8_t bmi160_set_power_mode(struct bmi160_dev *dev);


//get power mode of the sensor

int8_t bmi160_get_power_mode(struct bmi160_dev *dev);


//get sensor data

int8_t bmi160_get_sensor_data(uint8_t select_sensor, struct bmi160_sensor_data *accel,struct bmi160_sensor_data *gyro,const struct bmi160_dev *dev );

//sets necessary interrupt based on the user setting..

int8_t bmi160_set_int_config(struct bmi160_int_settg *int_config,struct bmi160_dev *dev);

// step count enable /disable

int8_t bmi160_set_step_counter(uint8_t step_cnt_enable, const struct bmi160_dev *dev );

//reads step counter value

int8_t bmi160_read_step_counter(uint16_t *step_val, const struct bmi160_dev *dev);

// auxilary read

int8_t bmi160_aux_read(uint8_t reg_addr, uint8_t *aux_data, uint16_t len,const struct bmi160_dev *dev );

// auxilary write

int8_t bmi160_aux_write(uint8_t reg_addr, uint8_t *aux_data, uint16_t len, const struct bmi160_dev *dev);


// aux init

int8_t bmi160_aux_init(const struct bmi160_dev *dev);

// aux sensor in auto mode

int8_t bmi160_set_aux_auto_mode(uint8_t *data_addr, struct bmi160_dev *dev);

//auxilary sensor manual enable or disable

int8_t bmi160_config_aux_mode(const struct bmi160_dev *dev);

//reads aux data

int8_t bmi160_read_aux_data_auto_mode(uint8_t *aux_data, const struct bmi160_dev *dev);


//self test

int8_t bmi160_perform_self_test(uint8_t select_sensor, struct bmi160_dev  *dev );

//get fifo data

int8_t bmi160_get_fifo_data(struct bmi160_dev const *dev );

//set fifo flush

int8_t bmi160_set_fifo_flush(const struct bmi160_dev *dev);

//set fifo config

int8_t bmi160_set_fifo_config(uint8_t config, uint8_t enable, struct bmi160_dev const *dev);

// set fifo down

int8_t bmi160_set_fifo_down(uint8_t fifo_down, const struct bmi160_dev *dev);

// set fifo water mark

int8_t bmi160_set_fifo_wm(uint8_t fifo_wm, const struct bmi160_dev *dev);

// extract the accelertometer fifo frames

int8_t bmi160_extract_accel(struct bmi160_sensor_data *accel_data, uint8_t accel_length, struct bmi160_dev const *dev);



// extract the gyro fifo frames

int8_t bmi160_extract_accel(struct bmi160_sensor_data *gyro_data, uint8_t gyro_length, struct bmi160_dev const *dev);


// extract the aux fifo frames

int8_t bmi160_extract_accel(struct bmi160_sensor_data *aux_data, uint8_t aux_len, struct bmi160_dev const *dev);


//start offset compensation

int8_t bmi160_start_foc(const struct bmi160_foc_conf *foc_conf, struct bmi160_offsets *offset, struct bmi160_dev const *dev);


//get offsets

int8_t bmi160_get_offsets(struct bmi160_foc_conf *foc_conf, const struct bmi160_dev *dev);


//set offsets

int8_t bmi160_set_offsets(const struct bmi160_foc_conf *foc_conf, struct bmi160_offsets *offset, struct bmi160_dev const *dev);

//nvm update

int8_t bmi160_update_nvm(struct bmi160_dev const *dev);

//get interrupt status

int8_t bmi160_get_int_status(enum bmi160_int_status_sel int_status_sel, union bmi160_int_status *int_status, struct bmi160_dev const *dev);




#ifdef __cplusplus

}

#endif

#endif













 