/* C  standard libraries
 written by saitez, using Cypress PSOC6 WIFI-BT 
usage : PEDOMETER , etc */
 

#include "tez_bmi160.h"

/*
what is a lookup table? 
Well a lookup table is simply an initialized array that contains precalculated information. 
They are typically used to avoid performing complex (and hence time consuming) calculations. 
For example, it is well known that the speed of CRC calculations may be significantly increased by use of a lookup table. 
A suitable lookup table for computing the CRC used in SMBUS calculations is shown below. 
(Note that the SMBUS consortium refers to their CRC as a PEC)
*/

/*
If static was omitted, then this table would be allocated and initialized on the stack every time the function is called. 
This is very slow (and hence self defeating) and will most likely lead to a stack overflow on smaller systems.
As a result, a lookup table that is not declared static is almost certainly a mistake.
The only exception that I am aware of to this rule is when the lookup table must be used by multiple modules- and hence must be declared so as to have global scope.
*/

/*
By definition a lookup table is used to read data. As a result, writing to a lookup table is almost always a mistake.
(There are exceptions, but you really need to know what you are doing if you are dynamically altering lookup tables). 
Thus to help catch unintended writes to a lookup table, one should always declare the array as const.
*/

/*
The use of a size specific data type such as uint8_t
Almost by definition lookup tables can consume a lot of space.
As a result it is very important that you be aware of exactly how much space is being consumed. 
The best way to do this is to use the C99 data types so that you know for sure what the underlying storage unit is.
As a result, if your data type is ‘int’ then I’d suggest that you are doing yourself a disservice.
*/


const uint8_t int_mask_lookup_table[13] = {

          BMI160_INT1_SLOPE_MASK, BMI160_INT2_SLOPE_MASK, BMI160_INT2_LOW_STEP_DETECT_MASK,                            




















