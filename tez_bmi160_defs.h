/* C  standard libraries
 written by saitez, using Cypress PSOC6 WIFI-BT 
usage : PEDOMETER , etc */
 
#include <stdint.h>
#include <stddef.h>

/* Conditional statement  */ 
#ifndef TEZ_BMI160_DEFS_H
#define TEZ_BMI160_DEFS_H 

/* Common macros*/

if !defined(UINT8_C) && !defined(INT8_C)
#define INT8_C(x)    S8_C(x)
#define UINT8_C(x)   U8_C(x)
#endif 

if !defined(UINT16_C) && !defined(INT16_C)
#define INT16_C(x)    S16_C(x)
#define UINT16_C(x)   U16_C(x)
#endif  

if !defined(UINT32_C) && !defined(INT32_C)
#define INT32_C(x)    S32_C(x)
#define UINT32_C(x)   U32_C(x)
#endif 

if !defined(UINT64_C) && !defined(INT64_C)
#define INT64_C(x)    S64_C(x)
#define UINT64_C(x)   U64_C(x)
#endif 

/* C standard Macros*/

#ifndef NULL
#ifdef __cplusplus
#define NULL 0
#else
#define NULL ((void *) 0)
#endif
#endif

/*Sensor Macros ............. endian*/

#ifndef __ORDER_LITTLE_ENDIAN__
#define __ORDER_LITTLE_ENDIAN__ 0
#endif

#ifndef __BYTE_ORDER__
#define __BYTE_ORDER__
#endif

#if __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
#ifndef LITTLE_ENDIAN
#define LITTLE_ENDIAN
#endif

#elif __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__
#ifndef BIG_ENDIAN
#define BIG_ENDIANS
#endif
#else
#error "code does not support ENDIAN format of the processor"
#endif

/**
Masking is the process or operation to set bit on to off or off to on in a byte,nibble or word. Mask means to block. Masking is the process by which ,only required data is retained and the rest is masked (blocked) Masking can be done using Bitwise Operators. Most Commonly Used Bitwise Operator is AND(&) , OR(|)

**/

/** MASK definitions**/

#define BMI160_ACCEL_BW_MASK               UINT8_C(0x70)   //0111 0000
#define BMI160_ACCEL_ODR_MASK              UINT8_C(0x0F)   //0000 1111            
#define BMI160_ACCEL_UNDERSAMPLING_MASK    UINT8_C(0x80)   //1000 0000
#define BMI160_ACCEL_RANGE_MASK            UINT8_C(0x0F)   //0000 1111
#define BMI160_GYRO_BW_MASK                UINT8_C(0x30)   //0011 0000
#define BMI160_GYRO_ODR_MASK               UINT8_C(0x0F)   //0000 1111
#define BMI160_GYRO_RANGE_MASK             UINT8_C(0x07)   //0000 0111 
 




/*Interrupt Enable Registers INT_EN*/

#define BMI160_ANY_MOTION_X_INT_EN_MASK     UINT8_C(0x01)      // 0000 0001
#define BMI160_HIGH_G_X_INT_EN_MASK         UINT8_C(0x01)      // 0000 0001
#define BMI160_NO_MOTION_X_INT_EN_MASK      UINT8_C(0x01)      // 0000 0001

#define BMI160_ANY_MOTION_Y_INT_EN_MASK     UINT8_C(0x02)      // 0000 0010
#define BMI160_HIGH_G_Y_INT_EN_MASK         UINT8_C(0x02)      // 0000 0010
#define BMI160_NO_MOTION_Y_INT_EN_MASK      UINT8_C(0x02)      // 0000 0010

#define BMI160_ANY_MOTION_Z_INT_EN_MASK     UINT8_C(0x04)      // 0000 0100
#define BMI160_HIGH_G_Z_INT_EN_MASK         UINT8_C(0x04)      // 0000 0100
#define BMI160_NO_MOTION_Z_INT_EN_MASK      UINT8_C(0x04)      // 0000 0100


#define BMI160_SIG_MOTION_INT_EN_MASK       UINT8_C(0x07)      // 0000 0111
#define BMI160_ANY_MOTION_ALL_INT_EN_MASK   UINT8_C(0x07)      // 0000 0111
#define BMI160_STEP_DETECT_INT_EN_MASK      UINT8_C(0x08)      // 0000 1000              
#define BMI160_DOUBLE_TAP_INT_EN_MASK       UINT8_C(0x10)      // 0001 0000
#define BMI160_SINGLE_TAP_INT_EN_MASK       UINT8_C(0x20)      // 0010 0000
#define BMI160_FIFO_FULL_INT_EN_MASK        UINT8_C(0x20)      // 0010 0000
#define BMI160_ORIENT_INT_EN_MASK           UINT8_C(0x40)      // 0100 0000
#define BMI160_FIFO_WATERMARK_INT_EN_MASK   UINT8_C(0x40)      // 0100 0000
#define BMI160_LOW_G_INT_EN_MASK            UINT8_C(0x08)      // 0000 1000
#define BMI160_FLAT_INT_EN_MASK             UINT8_C(0x80)      // 1000 0000
#define BMI160_DATA_RDY_INT_EN_MASK         UINT8_C(0x10)      // 0001 0000



/*POWER MANAGEMENT UNIT(PMU) STATUS */

#define BMI160_AUX_PMU_SUSPEND	     UINT8_C(0x00)                                 //AUX ~ MAGNETOMETER              
#define BMI160_AUX_PMU_NORMAL        UINT8_C(0x01)
#define BMI160_AUX_PMU_LOW_POWER     UINT8_C(0x02)


#define BMI160_GYRO_PMU_SUSPEND      UINT8_C(0x00)
#define BMI160_GYRO_PMU_NORMAL       UINT8_C(0x01)
#define BMI160_GYRO_PMU_FSU          UINT8_C(0x03)


#define BMI160_ACCEL_PMU_SUSPEND       UINT8_C(0x00)
#define BMI160_ACCEL_PMU_NORMAL        UINT8_C(0x01)
#define BMI160_ACCEL_PMU_LOW_POWER     UINT8_C(0x02)


/*MASK definitions for INT_OUT_CTRL Register*/


#define BMI160_INT1_EDGE_CTRL_MASK      UINT8_C(0x01)
#define BMI160_INT1_OUTPUT_MODE_MASK    UINT8_C(0x04)     // IDK
#define BMI160_INT1_OUTPUT_TYPE_MASK    UINT8_C(0x02)      // IDK
#define BMI160_INT1_OUTPUT_EN_MASK      UINT8_C(0x08)
#define BMI160_INT2_EDGE_CTRL_MASK      UINT8_C(0x10)
#define BMI160_INT2_OUTPUT_MODE_MASK    UINT8_C(0x40)       // IDK
#define BMI160_INT2_OUTPUT_TYPE_MASK    UINT8_C(0x20)        // IDK
#define BMI160_INT2_OUTPUT_EN_MASK      UINT8_C(0x80)



/** Mask definitions for INT_LATCH register */
#define BMI160_INT1_INPUT_EN_MASK            UINT8_C(0x10)
#define BMI160_INT2_INPUT_EN_MASK            UINT8_C(0x20)
#define BMI160_INT_LATCH_MASK                UINT8_C(0x0F)




/* Mask definitions for INT_MAP register */

#define BMI160_INT1_LOW_G_MASK                    UINT8_C(0x01)
#define BMI160_INT1_HIGH_G_MASK                   UINT8_C(0x02)
#define BMI160_INT1_SLOPE_MASK                    UINT8_C(0x04)   //IDK
#define BMI160_INT1_NO_MOTION_MASK                UINT8_C(0x08)
#define BMI160_INT1_DOUBLE_TAP_MASK               UINT8_C(0x10)
#define BMI160_INT1_SINGLE_TAP_MASK               UINT8_C(0x20)
#define BMI160_INT1_FIFO_FULL_MASK                UINT8_C(0x20)
#define BMI160_INT1_FIFO_WM_MASK                  UINT8_C(0x40)
#define BMI160_INT1_ORIENT_MASK                   UINT8_C(0x40)
#define BMI160_INT1_FLAT_MASK                     UINT8_C(0x80)
#define BMI160_INT1_DATA_READY_MASK               UINT8_C(0x80)

#define BMI160_INT2_LOW_G_MASK                    UINT8_C(0x01)
#define BMI160_INT2_HIGH_G_MASK                   UINT8_C(0x02)
#define BMI160_INT2_FIFO_FULL_MASK                UINT8_C(0x02)
#define BMI160_INT2_FIFO_WM_MASK                  UINT8_C(0x40)
#define BMI160_INT2_SLOPE_MASK                    UINT8_C(0x04)
#define BMI160_INT2_DATA_READY_MASK               UINT8_C(0x80)
#define BMI160_INT2_NO_MOTION_MASK                UINT8_C(0x08)
#define BMI160_INT2_DOUBLE_TAP_MASK               UINT8_C(0x10)
#define BMI160_INT2_SINGLE_TAP_MASK               UINT8_C(0x20)
#define BMI160_INT2_ORIENT_MASK                   UINT8_C(0x40)
#define BMI160_INT2_FLAT_MASK                     UINT8_C(0x80)


/* Mask definitions for INT_DATA register */

#define BMI160_TAP_SRC_INT_MASK                   UINT8_C(0x08)
#define BMI160_LOW_HIGH_RC_INT_MASK               UINT8_C(0x80)
#define BMI160_MOTION_SRC_INT_MASK                UINT8_C(0x80)

  
/* Mask definitions for INT_MOTION register */

#define BMI160_SLOPE_INT_DUR_MASK                 UINT8_C(0x03)
#define BMI160_NO_MOTION_INT_DUR_MASK             UINT8_C(0xFC)
#define BMI160_NO_MOTION_SEL_BIT_MASK             UINT8_C(0x01)



/* Mask definitions for INT_TAP register */

#define BMI160_TAP_DUR_MASK                      UINT8_C(0x07)
#define BMI160_TAP_SHOCK_DUR_MASK                UINT8_C(0x40)
#define BMI160_TAP_QUIET_DUR_MASK                UINT8_C(0x80)
#define BMI160_TAP_THRESH_MASK                   UINT8_C(0x1F)


/* Mask definitions for INT_FLAT register */

#define BMI160_FLAT_THRES_MASK                  UINT8_C(0x3F)
#define BMI160_FLAT_HOLD_TIME_MASK              UINT8_C(0x30)
#define BMI160_HYST_MASK                        UINT8_C(0x07)


/* Mask definitions for INT_LOWHIGH register */


#define BMI160_LOW_G_HYST_MASK                  UINT8_C(0x03)
#define BMI160_LOW_G_LOW_MODE_MASK              UINT8_C(0x04)
#define BMI160_HIGH_G_HYST_MASK                 UINT8_C(0xC0)


/* Mask definitions for INT_SIG_MOTION register */

#define BMI160_SIG_MOTION_SEL_MASK              UINT8_C(0x02)
#define BMI160_SIG_MOTION_SKIP_MASK             UINT8_C(0x0C)
#define BMI160_SIG_MOTION_PROOF_MASK            UINT8_C(0x30)


/** Mask definitions for INT_ORIENT register */

#define BMI160_ORIENT_MODE_MASK                 UINT8_C(0x03)
#define BMI160_ORIENT_BLOCK_MASK                UINT8_C(0x0C)
#define BMI160_ORIENT_HYST_MASK                 UINT8_C(0xF0)

#define BMI160_ORIENT_THETA_MASK                UINT8_C(0x3F)
#define BMI160_ORIENT_UD_ENABLE                 UINT8_C(0x40)
#define BMI160_AXES_EN_MASK                     UINT8_C(0x80) 
 

/** Mask definitions for FIFO_CONFIG register */

#define BMI160_FIFO_GYRO                         UINT8_C(0x80)
#define BMI160_FIFO_ACCEL                        UINT8_C(0x40)
#define BMI160_FIFO_AUX                          UINT8_C(0x20)
#define BMI160_FIFO_TAG_INT1                     UINT8_C(0x08)
#define BMI160_FIFO_TAG_INT2                     UINT8_C(0x04)
#define BMI160_FIFO_TIME                         UINT8_C(0x02)
#define BMI160_FIFO_HEADER                       UINT8_C(0x10)
#define BMI160_FIFO_CONFIG_1_MASK                UINT8_C(0xFE)


/** Mask definitions for STEP_CONF register */


#define BMI160_STEP_COUNT_EN_BIT_MASK            UINT8_C(0x08)
#define BMI160_STEP_DETECT_MIN_THRES_MASK        UINT8_C(0x18)
#define BMI160_STEP_DETECT_STEPTIME_MIN_MASK     UINT8_C(0x07)
#define BMI160_STEP_MIN_BUF_MASK                 UINT8_C(0x07)


/** Mask definition for FIFO Header Data Tag */


#define BMI160_FIFO_TAG_INTR_MASK                UINT8_C(0xFC)

/** Fifo byte counter mask definitions */

#define BMI160_FIFO_BYTE_COUNTER_MASK            UINT8_C(0x07)


/** Enable/Disable bit definitions */

#define BMI160_ENABLE                           UINT8_C(0x01)
#define BMI160_DISABLE                          UINT8_C(0x00)

/** Latch Duration */

#define BMI160_LATCH_DUR_NONE                  UINT8_C(0x00)
#define BMI160_LATCH_DUR_3125_5_MICRO_SEC      UINT8_C(0x01)
#define BMI160_LATCH_DUR_625_MICRO_SEC         UINT8_C(0x02)
#define BMI160_LATCH_DUR_1_25_MILLI_SEC        UINT8_C(0x03)
#define BMI160_LATCH_DUR_2_5_MILLI_SEC         UINT8_C(0x04)
#define BMI160_LATCH_DUR_5_MILLI_SEC           UINT8_C(0x05)
#define BMI160_LATCH_DUR_10_MILLI_SEC          UINT8_C(0x06)
#define BMI160_LATCH_DUR_20_MILLI_SEC          UINT8_C(0x07)
#define BMI160_LATCH_DUR_40_MILLI_SEC          UINT8_C(0x08)
#define BMI160_LATCH_DUR_80_MILLI_SEC          UINT8_C(0x09)
#define BMI160_LATCH_DUR_160_MILLI_SEC         UINT8_C(0x0A)
#define BMI160_LATCH_DUR_320_MILLI_SEC         UINT8_C(0x0B)
#define BMI160_LATCH_DUR_640_MILLI_SEC         UINT8_C(0x0C)
#define BMI160_LATCH_DUR_1_28_SEC              UINT8_C(0x0D)
#define BMI160_LATCH_DUR_2_56_SEC              UINT8_C(0x0E)
#define BMI160_LATCHED                         UINT8_C(0x0F)

/** BMI160 Register map */

#define BMI160_CHIP_ID_ADDR                         UINT8_C(0x00)
#define BMI160_ERR_REG_ADDR                         UINT8_C(0x02)
#define BMI160_PMU_STATUS_ADDR                      UINT8_C(0x03)
#define BMI160_AUX_DATA_ADDR                        UINT8_C(0x04)
#define BMI160_GYRO_DATA_ADDR                       UINT8_C(0x0C)
#define BMI160_ACC_DATA_ADDR                        UINT8_C(0x12)
#define BMI160_STATUS_ADDR                          UINT8_C(0x1B)
#define BMI160_INT_STATUS                           UINT8_C(0x1C)
#define BMI160_FIFO_LENGTH_ADDR                     UINT8_C(0x22)
#define BMI160_FIFO_DATA_ADDR                       UINT8_C(0x24)
#define BMI160_ACCEL_CONFIG_ADDR                    UINT8_C(0x40)
#define BMI160_ACCEL_RANGE_ADDR                     UINT8_C(0x41)
#define BMI160_GYRO_CONFIG_ADDR                     UINT8_C(0x42)
#define BMI160_GYRO_RANGE_ADDR                      UINT8_C(0x43)
#define BMI160_AUX_ODR_ADDR                         UINT8_C(0x44)
#define BMI160_FIFO_DOWN_ADDR                       UINT8_C(0x45)
#define BMI160_FIFO_CONFIG_0_ADDR                   UINT8_C(0x46)
#define BMI160_FIFO_CONFIG_1_ADDR                   UINT8_C(0x47)
#define BMI160_AUX_IF_0_ADDR                        UINT8_C(0x4B)
#define BMI160_AUX_IF_1_ADDR                        UINT8_C(0x4C)
#define BMI160_AUX_IF_2_ADDR                        UINT8_C(0x4D)
#define BMI160_AUX_IF_3_ADDR                        UINT8_C(0x4E)
#define BMI160_AUX_IF_4_ADDR                        UINT8_C(0x4F)
#define BMI160_INT_ENABLE_0_ADDR                    UINT8_C(0x50)
#define BMI160_INT_ENABLE_1_ADDR                    UINT8_C(0x51)
#define BMI160_INT_ENABLE_2_ADDR                    UINT8_C(0x52)
#define BMI160_INT_OUT_CTRL_ADDR                    UINT8_C(0x53)
#define BMI160_INT_LATCH_ADDR                       UINT8_C(0x54)
#define BMI160_INT_MAP_0_ADDR                       UINT8_C(0x55)
#define BMI160_INT_MAP_1_ADDR                       UINT8_C(0x56)
#define BMI160_INT_MAP_2_ADDR                       UINT8_C(0x57)
#define BMI160_INT_DATA_0_ADDR                      UINT8_C(0x58)
#define BMI160_INT_DATA_1_ADDR                      UINT8_C(0x59)
#define BMI160_INT_LOWHIGH_0_ADDR                   UINT8_C(0x5A)
#define BMI160_INT_LOWHIGH_1_ADDR                   UINT8_C(0x5B)
#define BMI160_INT_LOWHIGH_2_ADDR                   UINT8_C(0x5C)
#define BMI160_INT_LOWHIGH_3_ADDR                   UINT8_C(0x5D)
#define BMI160_INT_LOWHIGH_4_ADDR                   UINT8_C(0x5E)
#define BMI160_INT_MOTION_0_ADDR                    UINT8_C(0x5F)
#define BMI160_INT_MOTION_1_ADDR                    UINT8_C(0x60)
#define BMI160_INT_MOTION_2_ADDR                    UINT8_C(0x61)
#define BMI160_INT_MOTION_3_ADDR                    UINT8_C(0x62)
#define BMI160_INT_TAP_0_ADDR                       UINT8_C(0x63)
#define BMI160_INT_TAP_1_ADDR                       UINT8_C(0x64)
#define BMI160_INT_ORIENT_0_ADDR                    UINT8_C(0x65)
#define BMI160_INT_ORIENT_1_ADDR                    UINT8_C(0x66)
#define BMI160_INT_FLAT_0_ADDR                      UINT8_C(0x67)
#define BMI160_INT_FLAT_1_ADDR                      UINT8_C(0x68)
#define BMI160_FOC_CONF_ADDR                        UINT8_C(0x69)
#define BMI160_CONF_ADDR                            UINT8_C(0x6A)


#define BMI160_IF_CONF_ADDR                         UINT8_C(0x6B)
#define BMI160_SELF_TEST_ADDR                       UINT8_C(0x6D)
#define BMI160_OFFSET_ADDR                          UINT8_C(0x71)
#define BMI160_OFFSET_CONF_ADDR                      UINT8_C(0x77)
#define BMI160_INT_STEP_CNT_0_ADDR                  UINT8_C(0x78)
#define BMI160_INT_STEP_CONFIG_0_ADDR               UINT8_C(0x7A)
#define BMI160_INT_STEP_CONFIG_1_ADDR               UINT8_C(0x7B)
#define BMI160_COMMAND_REG_ADDR                     UINT8_C(0x7E)
#define BMI160_SPI_COMM_TEST_ADDR                   UINT8_C(0x7F)
#define BMI160_INTL_PULLUP_CONF_ADDR                UINT8_C(0x85)       //IDK


/** Error code definitions */

#define BMI160_OK                                   INT8_C(0) 
#define BMI160_E_NULL_PTR                           INT8_C(-1)
#define BMI160_E_COM_FAIL                           INT8_C(-2)
#define BMI160_E_DEV_NOT_FOUND                      INT8_C(-3)
#define BMI160_E_OUT_OF_RANGE                       INT8_C(-4)
#define BMI160_E_INVALID_INPUT                      INT8_C(-5)
#define BMI160_E_ACCEL_ODR_BW_INVALID               INT8_C(-6)
#define BMI160_E_GYRO_ODR_BW_INVALID                INT8_C(-7)
#define BMI160_E_LWP_PRE_FLTR_INT_INVALID           INT8_C(-8)
#define BMI160_E_LWP_PRE_FLTR_INVALID               INT8_C(-9)
#define BMI160_E_AUX_NOT_FOUND                      INT8_C(-10)
#define BMI160_FOC_FAILURE                          INT8_C(-11)
#define BMI160_READ_WRITE_LENGHT_INVALID            INT8_C(-12)

/**\name API warning codes */

#define BMI160_W_GYRO_SELF_TEST_FAIL                  INT8_C(1)
#define BMI160_W_ACCEl_SELF_TEST_FAIL                 INT8_C(2)

/** BMI160 unique chip identifier */
#define BMI160_CHIP_ID                               UINT8_C(0xD1)

/** Soft reset command */

#define BMI160_SOFT_RESET_CMD                        UINT8_C(0xb6)
#define BMI160_SOFT_RESET_DELAY_MS                   UINT8_C(1)

/** Start FOC command */
#define BMI160_START_FOC_CMD                         UINT8_C(0x03)

/** NVM backup enabling command */

#define BMI160_NVM_BACKUP_EN                         UINT8_C(0xA0)

/* Delay in ms settings */
#define BMI160_ACCEL_DELAY_MS                         UINT8_C(5)              
#define BMI160_GYRO_DELAY_MS                          UINT8_C(81)
#define BMI160_ONE_MS_DELAY                           UINT8_C(1)
#define BMI160_AUX_COM_DELAY                          UINT8_C(10)
#define BMI160_GYRO_SELF_TEST_DELAY                   UINT8_C(20)
#define BMI160_ACCEL_SELF_TEST_DELAY                  UINT8_C(50)

/** Self test configurations */ 

#define BMI160_ACCEL_SELF_TEST_CONFIG                UINT8_C(0x2C)
#define BMI160_ACCEL_SELF_TEST_POSITIVE_EN           UINT8_C(0x0D)
#define BMI160_ACCEL_SELF_TEST_NEGATIVE_EN           UINT8_C(0x09)
#define BMI160_ACCEL_SELF_TEST_LIMIT                 UINT16_C(8192)


/** Power mode settings */
/* ACCEL POWER MODE */
#define BMI160_ACCEL_NORMAL_MODE                    UINT8_C(0x11)
#define BMI160_ACCEL_LOWPOWER_MODE                  UINT8_C(0x12)
#define BMI160_ACCEL_SUSPEND_MODE                   UINT8_C(0x10)

/*GYRO POWER MODE */

#define BMI160_GYRO_SUSPEND_MODE                    UINT8_C(0x14)
#define BMI160_GYRO_NORMAL_MODE                     UINT8_C(0x15)
#define BMI160_GYRO_FASTSTARTUP_MODE                UINT8_C(0x17)

/* Aux power mode */

#define BMI160_AUX_SUSPEND_MODE                     UINT8_C(0x18)
#define BMI160_AUX_NORMAL_MODE                      UINT8_C(0x19)
#define BMI160_AUX_LOWPOWER_MODE                    UINT8_C(0x1A)

/** Range settings */
/* Accel Range */

#define BMI160_ACCEL_RANGE_2G                       UINT8_C(0x03)
#define BMI160_ACCEL_RANGE_4G                       UINT8_C(0x05)
#define BMI160_ACCEL_RANGE_8G                       UINT8_C(0x08)
#define BMI160_ACCEL_RANGE_16G                      UINT8_C(0x0C)

/* Gyro Range */

#define BMI160_GYRO_RANGE_2000_DPS                  UINT8_C(0x00)
#define BMI160_GYRO_RANGE_1000_DPS                  UINT8_C(0x01)
#define BMI160_GYRO_RANGE_500_DPS                   UINT8_C(0x02)
#define BMI160_GYRO_RANGE_250_DPS                   UINT8_C(0x03)
#define BMI160_GYRO_RANGE_125_DPS                   UINT8_C(0x04)

/** Bandwidth settings */

/* Accel Bandwidth */


#define BMI160_ACCEL_BW_OSR4_AVG1                   UINT8_C(0x00)
#define BMI160_ACCEL_BW_OSR2_AVG2                   UINT8_C(0x01)
#define BMI160_ACCEL_BW_NORMAL_AVG4                 UINT8_C(0x02)
#define BMI160_ACCEL_BW_RES_AVG8                    UINT8_C(0x03)
#define BMI160_ACCEL_BW_RES_AVG16                   UINT8_C(0x04)
#define BMI160_ACCEL_BW_RES_AVG32                   UINT8_C(0x05)
#define BMI160_ACCEL_BW_RES_AVG64                   UINT8_C(0x06)
#define BMI160_ACCEL_BW_RES_AVG128                  UINT8_C(0x07)
       

#define BMI160_GYRO_BW_OSR4_MODE                   UINT8_C(0x00)
#define BMI160_GYRO_BW_OSR2_MODE                   UINT8_C(0x01)
#define BMI160_GYRO_BW_NORMAL_MODE                 UINT8_C(0x02)

/* Output Data Rate settings */
/* Accel Output data rate */


#define BMI160_ACCEL_ODR_RESERVED                  UINT8_C(0x00)
#define BMI160_ACCEL_ODR_0_78HZ                    UINT8_C(0x01)
#define BMI160_ACCEL_ODR_1_56HZ                    UINT8_C(0x02)
#define BMI160_ACCEL_ODR_3_12HZ                    UINT8_C(0x03)
#define BMI160_ACCEL_ODR_6_25HZ                    UINT8_C(0x04)
#define BMI160_ACCEL_ODR_12_5HZ                    UINT8_C(0x05)
#define BMI160_ACCEL_ODR_25HZ                     UINT8_C(0x06)
#define BMI160_ACCEL_ODR_50HZ                     UINT8_C(0x07)
#define BMI160_ACCEL_ODR_100HZ                    UINT8_C(0x08)
#define BMI160_ACCEL_ODR_200HZ                    UINT8_C(0x09)
#define BMI160_ACCEL_ODR_400HZ                    UINT8_C(0x0A)
#define BMI160_ACCEL_ODR_800HZ                    UINT8_C(0x0B)
#define BMI160_ACCEL_ODR_1600HZ                   UINT8_C(0x0C)
#define BMI160_ACCEL_ODR_RESERVED0                 UINT8_C(0x0D)
#define BMI160_ACCEL_ODR_RESERVED1                 UINT8_C(0x0E)
#define BMI160_ACCEL_ODR_RESERVED2                 UINT8_C(0x0F)

/* Gyro Output data rate */

#define BMI160_GYRO_ODR_RESERVED                  UINT8_C(0x00)
#define BMI160_GYRO_ODR_25HZ                      UINT8_C(0x06)
#define BMI160_GYRO_ODR_50HZ                      UINT8_C(0x07)
#define BMI160_GYRO_ODR_100HZ                     UINT8_C(0x08)
#define BMI160_GYRO_ODR_200HZ                     UINT8_C(0x09)
#define BMI160_GYRO_ODR_400HZ                     UINT8_C(0x0A)
#define BMI160_GYRO_ODR_800HZ                     UINT8_C(0x0B)
#define BMI160_GYRO_ODR_1600HZ                    UINT8_C(0x0C)
#define BMI160_GYRO_ODR_3200HZ                    UINT8_C(0x0D)
                 
/* Auxiliary sensor Output data rate */

#define BMI160_AUX_ODR_RESERVED                  UINT8_C(0x00)
#define BMI160_AUX_ODR_0_78HZ                    UINT8_C(0x01)
#define BMI160_AUX_ODR_1_62HZ                    UINT8_C(0x02)
#define BMI160_AUX_ODR_3_12HZ                    UINT8_C(0x03)
#define BMI160_AUX_ODR_6_25HZ                    UINT8_C(0x04)
#define BMI160_AUX_ODR_12_5HZ                    UINT8_C(0x05)
#define BMI160_AUX_ODR_25HZ                      UINT8_C(0x06)
#define BMI160_AUX_ODR_50HZ                      UINT8_C(0x07)
#define BMI160_AUX_ODR_100HZ                     UINT8_C(0x08)
#define BMI160_AUX_ODR_200HZ                     UINT8_C(0x09)
#define BMI160_AUX_ODR_400HZ                     UINT8_C(0x0A)
#define BMI160_AUX_ODR_800HZ                     UINT8_C(0x0B)
                     
/* Maximum limits definition */

#define BMI160_ACCEL_ODR_MAX                    UINT8_C(15)
#define BMI160_ACCEL_BW_MAX                     UINT8_C(2)
#define BMI160_ACCEL_RANGE_MAX                  UINT8_C(12)
#define BMI160_GYRO_ODR_MAX                     UINT8_C(13)
#define BMI160_GYRO_BW_MAX                      UINT8_C(2)
#define BMI160_GYRO_RANGE_MAX                   UINT8_C(4)

/** FIFO_CONFIG Definitions */


#define BMI160_FIFO_TIME_ENABLE                 UINT8_C(0x02)
#define BMI160_FIFO_TAG_INT2_ENABLE             UINT8_C(0x04)
#define BMI160_FIFO_TAG_INT1_ENABLE             UINT8_C(0x08)
#define BMI160_FIFO_HEAD_ENABLE                 UINT8_C(0x10)
#define BMI160_FIFO_M_ENABLE                    UINT8_C(0X20)
#define BMI160_FIFO_A_ENABLE                    UINT8_C(0x40)
#define BMI160_FIFO_M_A_ENABLE                  UINT8_C(0x60)
#define BMI160_FIFO_G_ENABLE                    UINT8_C(0x80)
#define BMI160_FIFO_M_G_ENABLE                  UINT8_C(0xA0)
#define BMI160_FIFO_G_A_ENABLE                  UINT8_C(0xC0)
#define BMI160_FIFO_M_G_A_ENABLE                UINT8_C(0xE0)

/* Macro to specify the number of bytes over-read from the
* FIFO in order to get the sensor time at the end of FIFO */

#ifndef BMI160_FIFO_BYTES_OVERREAD
#define BMI160_FIFO_BYTES_OVERREAD           UINT8_C(25)
#endif

/* Accel, gyro and aux. sensor length and also their combined
 * length definitions in FIFO */
#define BMI160_FIFO_G_LENGTH                 UINT8_C(6)
#define BMI160_FIFO_A_LENGTH                 UINT8_C(6)
#define BMI160_FIFO_M_LENGTH                 UINT8_C(8)
#define BMI160_FIFO_GA_LENGTH                UINT8_C(12)
#define BMI160_FIFO_MA_LENGTH                UINT8_C(14)
#define BMI160_FIFO_MG_LENGTH                UINT8_C(14)
#define BMI160_FIFO_MGA_LENGTH               UINT8_C(20)

/** FIFO Header Data definitions */
#define BMI160_FIFO_HEAD_SKIP_FRAME          UINT8_C(0x40)
#define BMI160_FIFO_HEAD_SENSOR_TIME         UINT8_C(0x44)
#define BMI160_FIFO_HEAD_INPUT_CONFIG        UINT8_C(0x48)
#define BMI160_FIFO_HEAD_OVER_READ           UINT8_C(0x80)
#define BMI160_FIFO_HEAD_A                   UINT8_C(0x84)
#define BMI160_FIFO_HEAD_G                   UINT8_C(0x88)
#define BMI160_FIFO_HEAD_G_A                 UINT8_C(0x8C)
#define BMI160_FIFO_HEAD_M                   UINT8_C(0x90)
#define BMI160_FIFO_HEAD_M_A                 UINT8_C(0x94)
#define BMI160_FIFO_HEAD_M_G                 UINT8_C(0x98)
#define BMI160_FIFO_HEAD_M_G_A               UINT8_C(0x9C)

/** FIFO sensor time length definitions */
#define BMI160_SENSOR_TIME_LENGTH            UINT8_C(3)


/** FIFO DOWN selection */

/** ACCEL FIFO DOWNS **/
#define BMI160_ACCEL_FIFO_DOWN_ZERO                  UINT8_C(0x00)
#define BMI160_ACCEL_FIFO_DOWN_ONE                   UINT8_C(0x10)
#define BMI160_ACCEL_FIFO_DOWN_TWO                   UINT8_C(0x20)
#define BMI160_ACCEL_FIFO_DOWN_THREE                 UINT8_C(0x30)
#define BMI160_ACCEL_FIFO_DOWN_FOUR                  UINT8_C(0x40)
#define BMI160_ACCEL_FIFO_DOWN_FIVE                  UINT8_C(0x50)
#define BMI160_ACCEL_FIFO_DOWN_SIX                   UINT8_C(0x60)
#define BMI160_ACCEL_FIFO_DOWN_SEVEN                 UINT8_C(0x70)


/** GYRO FIFO DOWNS **/

#define BMI160_GYRO_FIFO_DOWN_ZERO                  UINT8_C(0x00)
#define BMI160_GYRO_FIFO_DOWN_ONE                   UINT8_C(0x01)
#define BMI160_GYRO_FIFO_DOWN_TWO                   UINT8_C(0x02)
#define BMI160_GYRO_FIFO_DOWN_THREE                 UINT8_C(0x03)
#define BMI160_GYRO_FIFO_DOWN_FOUR                  UINT8_C(0x04)
#define BMI160_GYRO_FIFO_DOWN_FIVE                  UINT8_C(0x05)
#define BMI160_GYRO_FIFO_DOWN_SIX                   UINT8_C(0x06)
#define BMI160_GYRO_FIFO_DOWN_SEVEN                 UINT8_C(0x07)


/** ACCEL FIFO FILTER **/

#define BMI160_ACCEL_FIFO_FIL_EN                     UINT8_C(0x80)

/** GYRO FIFO FILTER **/

#define BMI160_GYRO_FIFO_FIL_EN                      UINT8_C(0x08)

/** Definitions to check validity of FIFO frames */

#define BMI160_FIFO_CONFIG_MSB_CHECK                   UINT8_C(0x80)
#define BMI160_FIFO_CONFIG_LSB_CHECK                   UINT8_C(0x00)

/*! BMI160 accel FOC configurations */

#define BMI160_FOC_ACCEL_DISABLED                      UINT8_C(0x00)
#define BMI160_FOC_ACCEL_POSITIVE_G                    UINT8_C(0x01)
#define BMI160_FOC_ACCEL_NEGATIVE_G                    UINT8_C(0x02)
#define BMI160_FOC_ACCEL_ZERO_G                        UINT8_C(0x03)

/** Array Parameter DefinItions */

#define BMI160_SENSOR_TIME_LSB_BYTE          UINT8_C(0)
#define BMI160_SENSOR_TIME_XLSB_BYTE         UINT8_C(1)
#define BMI160_SENSOR_TIME_MSB_BYTE          UINT8_C(2)


/** Interface settings */

#define BMI160_SPI_INTF                       UINT8_C(1)
#define BMI160_I2C_INTF                       UINT8_C(0)
#define BMI160_SPI_RD_MASK                    UINT8_C(0x80)
#define BMI160_SPI_WR_MASK                    UINT8_C(0x7F)


/* Sensor & time select definition*/
#define BMI160_ACCEL_SEL                     UINT8_C(0x01)
#define BMI160_GYRO_SEL                      UINT8_C(0x02)
#define BMI160_TIME_SEL                      UINT8_C(0x04)

/* Sensor select mask*/

#define BMI160_SEN_SEL_MASK                  UINT8_C(0x07)


/* Error code mask */

#define BMI160_ERR_REG_MASK                  UINT8_C(0x0F)


/* BMI160 I2C ADDRESS */

#define BMI160_I2C_ADDR                       UINT8_C(0x68)

/* BMI160 secondary IF address */
#define BMI160_AUX_BMM150_I2C_ADDR           UINT8_C(0x10)


/** BMI160 Length definitions */
#define BMI160_ONE                           UINT8_C(1)
#define BMI160_TWO                           UINT8_C(2)
#define BMI160_THREE                         UINT8_C(3)
#define BMI160_FOUR                          UINT8_C(4)
#define BMI160_FIVE                          UINT8_C(5)


/** BMI160 fifo level Margin */
#define BMI160_FIFO_LEVEL_MARGIN             UINT8_C(16)

/** BMI160 fifo flush Command */

#define BMI160_FIFO_FLUSH_VALUE             UINT8_C(0xB0)

/** BMI160 offset values for xyz axes of accel */

#define BMI160_ACCEL_MIN_OFFSET                  UINT8_C(-128)
#define BMI160_ACCEL_MAX_OFFSET                  UINT8_C(127)

#define BMI160_GYRO_MIN_OFFSET                   UINT8_C(-512)
#define BMI160_GYRO_MAX_OFFSET                   UINT8_C(511)


/** BMI160 fifo full interrupt position and mask */

#define BMI160_FIFO_FULL_INT_POS                 UINT8_C(5)
#define BMI160_FIFO_FULL_INT_MASK                UINT8_C(0x20)
#define BMI160_FIFO_WTM_INT_POS                  UINT8_C(6)
#define BMI160_FIFO_WTM_INT_MASK                 UINT8_C(0x40)

#define BMI160_FIFO_FULL_INT_PIN1_POS           UINT8_C(5)
#define BMI160_FIFO_FULL_INT_PIN1_MSK           UINT8_C(0x20)
#define BMI160_FIFO_FULL_INT_PIN2_POS           UINT8_C(1)
#define BMI160_FIFO_FULL_INT_PIN2_MSK           UINT8_C(0x02)

#define BMI160_FIFO_WTM_INT_PIN1_POS             UINT8_C(6)
#define BMI160_FIFO_WTM_INT_PIN1_MSK             UINT8_C(0x40)
#define BMI160_FIFO_WTM_INT_PIN2_POS             UINT8_C(2)
#define BMI160_FIFO_WTM_INT_PIN2_MSK             UINT8_C(0x04)



#define BMI160_MANUAL_MODE_EN_POS                UINT8_C(7)
#define BMI160_MANUAL_MODE_EN_MSK               UINT8_C(0x80)
#define BMI160_AUX_READ_BURST_POS                UINT8_C(0)
#define BMI160_AUX_READ_BURST_MSK               UINT8_C(0x03)

#define BMI160_GYRO_SELF_TEST_EN_POS             UINT8_C(4)
#define BMI160_GYRO_SELF_TEST_EN_MSK            UINT8_C(0x10)
#define BMI160_GYRO_SELF_TEST_STATUS_POS         UINT8_C(1)
#define BMI160_GYRO_SELF_TEST_STATUS_POS_MSK    UINT8_C(0x02)

#define BMI160_GYRO_FOC_EN_POS                   UINT8_C(6)
#define BMI160_GYRO_FOC_EN_POS_MSK              UINT8_C(0x40)


#define BMI160_ACCEL_FOC_X_CONF_POS                    UINT8_C(4)
#define BMI160_ACCEL_FOC_X_CONF_POS_MSK               UINT8_C(0x30)

#define BMI160_ACCEL_FOC_Y_CONF_POS                    UINT8_C(2)
#define BMI160_ACCEL_FOC_Y_CONF_MSK                   UINT8_C(0x0C)

#define BMI160_ACCEL_FOC_Z_CONF_MSK                   UINT8_C(0x03)


#define BMI160_FOC_STATUS_POS                          UINT8_C(3)
#define BMI160_FOC_STATUS_MSK                          UINT8_C(0x08)


#define BMI160_GYRO_OFFSET_X_MSK                         UINT8_C(0x03)

#define BMI160_GYRO_OFFSET_Y_POS                         UINT8_C(0x02)
#define BMI160_GYRO_OFFSET_Y_MSK                          UINT8_C(0x0C)

#define BMI160_GYRO_OFFSET_Z_POS                          UINT8_C(4)
#define BMI160_GYRO_OFFSET_Z_MSK                          UINT8_C(0x30)

#define BMI160_ACCEL_OFFSET_EN_POS                          UINT8_C(6)
#define BMI160_ACCEL_OFFSET_EN_MSK                          UINT8_C(0x40)

#define BMI160_GYRO_OFFSET_EN_POS                          UINT8_C(7)
#define BMI160_GYRO_OFFSET_EN_MSK                          UINT8_C(0x80)


#define BMI160_GYRO_OFFSET_POS                              UINT8_C(8)
#define BMI160_GYRO_OFFSET_MSK                              UINT8_C(0x0300)

#define BMI160_NVM_UPDATE_POS                                UINT8_C(1)
#define BMI160_NVM_UPDATE_MSK                                UINT8_C(0x02)

#define BMI160_NVM_STATUS_POS                                UINT8_C(4)
#define BMI160_NVM_STATUS_MSK                                UINT8_C(0x10)


#define BMI160_MAG_POWER_MODE_MSK                          UINT8_C(0X03)

#define BMI160_ACCEL_POWER_MODE_MSK                        UINT8_C(0x30)
#define BMI160_ACCEL_POWER_MODE_POS                        UINT8_C(4)

#define BMI160_GYRO_POWER_MODE_MSK                         UINT8_C(0x0C)
#define BMI160_GYRO_POWER_MODE_POS                          UINT8_C(2)


//The ## provides a way to concatenate actual arguments during macro expansion.
// If a parameter in the replacement text is adjacent to a ##, the parameter is replaced by the actual argument, 
//the ## and surrounding white space are removed, and the result is re-scanned.

//SET bits and GET bits 
#define BMI160_GET_BITS(regvar,bitname) \
                       ((regvar & bitname##_MSK) >> bitname##_POS)

#define BMI160_SET_BITS(regvar,bitname,val) \
                      (regvar & ~bitname##_MSK) | \
                      ((val << bitname##_POS) & bitname##_MSK))

#define BMI160_SET_BITS_POS_0(reg_data,bitname,data) \
                            (reg_data & ~(bitname##_MSK)) | \
                                 (data & bitname##_MSK))                        
             

#define BMI160_GET_BITS_POS_0(reg_data, bitname) (reg_data & (bitname##_MSK))


/**\name UTILITY MACROS */

#define BMI160_SET_LOW_BYTE                             UINT16_C(0x00FF)
#define BMI160_SET_HIGH_BYTE                            UINT16_C(0xFF00)

#define BMI160_GET_LSB(var)                            (uint8_t)(var & BMI160_SET_LOW_BYTE )  
#define BMI160_GET_MSB(var)                            (uint8_t)(var & BMI160_SET_HIGH_BYTE ) >> 8     

                    

                    
//type definitions

typedef int8_t (*bmi160_com_fptr_t)(uint8_t dev_addr, uint8_t reg_addr, uint8_t *data, uint16_t len);

typedef void (*bmi160_delay_fptr_t)(uint32_t period);

//Data structures
// power management status

struct bmi160_pmu_status
{



 uint8_t accel_pmu_status;
  
 uint8_t gyro_pmu_status;
 
 uint8_t aux_pmu_status;
};

enum bmi160_int_status_sel{
       BMI160_INT_STATUS_0 = 1,
       BMI160_INT_STATUS_1 = 2,
       BMI160_INT_STATUS_2 = 4,
       BMI160_INT_STATUS_3 = 8,
       BMI160_INT_STATUS_ALL = 15,
};

//* @brief bmi160 interrupt status bits structure

struct bmi160_int_status_bits
{

uint32_t step                     : 1
uint32_t sigmot                   : 1
uint32_t anym                     : 1
uint32_t pmu_trigger_reserved     : 1
uint32_t d_tap                    : 1
uint32_t s_tap                    : 1
uint32_t orient                   : 1
uint32_t flat_int                 : 1

uint32_t reserved                 : 2 
uint32_t high_g                   : 1
uint32_t low_g                    : 1
uint32_t drdy                     : 1
uint32_t ff_full                  : 1
uint32_t fwm                      : 1
uint32_t no_mo                    : 1

uint32_t anym_first_x             : 1
uint32_t anym_first_y             : 1
uint32_t anym_first_z             : 1
uint32_t anym_sign                : 1
uint32_t tap_first_x              : 1
uint32_t tap_first_y              : 1
uint32_t tap_first_z              : 1
uint32_t tap_sign                 : 1

uint32_t high_first_x             : 1
uint32_t high_first_y             : 1
uint32_t high_first_z             : 1
uint32_t high_sign                : 1
uint32_t orient_1_0               : 2
uint32_t orient_2                 : 2
uint32_t flat                     : 1

};


 //@brief bmi160 interrupt status structure

union bmi160_int_status
{
  uint8_t data[4];
  bmi160_int_status_bits bit;
};

//  * @brief bmi160 sensor data structure which comprises of accel data
struct bmi160_sensor_data
{
  int16_t x;
  int16_t y;
  int16_t z;
  
 uint32_t sensortime;

};

//bmi160 aux data structure

struct bmi160_aux_data
{
   uint8_t data[8];
};


// * @brief bmi160 FOC configuration structure

struct bmi160_foc_conf
{

  uint8_t foc_gyr_en;
 
  uint8_t foc_acc_x;

  uint8_t foc_acc_y;

  uint8_t foc_acc_z;

  uint8_t acc_off_en;

  uint8_t gyro_off_en;

};

struct bmi160_offsets
{

int8_t off_acc_x;
 
int8_t off_acc_y;

int8_t off_acc_z;

int16_t off_gyro_x;

int16_t off_gyro_y;

int16_t off_gyro_z;


};



//` * @brief FIFO aux. sensor data structure


struct bmi160_aux_fifo_data
{

 uint8_t aux_x_lsb;

 uint8_t aux_x_msb;
 
 uint8_t aux_y_lsb;

 uint8_t aux_y_msb;

 uint8_t aux_z_lsb;

 uint8_t aux_z_msb;

 uint8_t aux_r_y2_lsb;

 uint8_t aux_r_y2_msb;

};

// BMI160 SENSOR SELECT STRUCTURE

enum bmi160_select_sensor {

   BMI160_ACCEL_ONLY = 1,
   BMI160_GYRO_ONLY,
   BMI160_BOTH_ACCEL_AND_GYRO

};


//* @brief bmi160 sensor step detector mode structure

enum bmi160_step_detect_mode {
  
   BMI160_STEP_DETECT_NORMAL,
   BMI160_STEP_DETECT_SENSITIVE,
   BMI160_STEP_DETECT_ROBUST,
   //non recomended user define settings
   BMI160_STEP_DETECT_USER_DEFINE
};


//* @brief enum for auxiliary burst read selection

enum bmi160_aux_read_len {
    
     BMI160_AUX_READ_LEN_0, 
    
     BMI160_AUX_READ_LEN_1 ,

     BMI160_AUX_READ_LEN_2 ,
 
     BMI160_AUX_READ_LEN_3 

    
};


//* @brief bmi160 sensor configuration structure

 struct bmi160_sensor_cfg {

//power configuration
        uint8_t power;
//output data register
        uint8_t odr;
 //range of the sensor data
       uint8_t range;
 // bandwidth of the sensor 
       uint8_t bw;

};

//* @brief Aux sensor configuration structure

struct bmi160_aux_cfg
{
      
      uint8_t  aux_sensor_enable   : 1 ;
      uint8_t  manual_enable       : 1 ;
      uint8_t  aux_rd_burst_len    : 2 ;
      uint8_t  aux_odr             : 4 ;
      uint8_t aux_i2c_addr;
};


//* @brief bmi160 interrupt channel selection structure

enum bmi160_int_channel {

      BMI160_INT_CHANNEL_NONE,
  
      BMI160_INT_CHANNEL_1,
 
      BMI160_INT_CHANNEL_2,
 
      BMI160_INT_CHANNEL_BOTH

};

enum bmi160_int_types {

       
      BMI160_ACC_ANY_MOTION_INT,

      BMI160_ACC_SIG_MOTION_INT,

      BMI160_STEP_DETECT_INT,
     
      BMI160_ACC_DOUBLE_TAP_INT,
 
      BMI160_ACC_SINGLE_TAP_INT,

      BMI160_ACC_ORIENT_INT,
   
      BMI160_ACC_FLAT_INT,

      BMI160_ACC_HIGH_G_INT,

      BMI160_ACC_LOW_G_INT,

      BMI160_ACC_SLOW_NO_MOTION_INT,

      BMI160_ACC_GYRO_DATA_RDY_INT,

      BMI160_ACC_GYRO_FIFO_FULL_INT,

      BMI160_ACC_GYRO_FIFO_WATERMARK_INT,

      BMI160_ACC_FIFO_TAG_INT_PIN

};


enum bmi160_any_sig_motion_active_interrupt_state
{

   BMI160_BOTH_ANY_SIG_MOTION_DSIABLED = -1,
  
   BMI160_ANY_MOTION_ENABLED,
 
   BMI160_SIG_MOTION_ENABLED
};



struct bmi160_acc_tap_int_cfg
{

   uint16_t  tap_thr     : 5;
   
   uint16_t tap_shock    : 1;

   uint16_t tap_quiet    : 1;
 
   uint16_t tap_dur      : 3;

   uint16_t tap_data_src  : 1;

  uint16_t tap_en         : 1;
 
  

};


 struct bmi160_acc_any_mot_int_cfg
{

 uint8_t anymotion_en       : 1;

 uint8_t anymotion_x        : 1;

 uint8_t anymotion_y        : 1;

 uint8_t anymotion_z        : 1;

 uint8_t anymotion_dur      : 2;
 
 uint8_t anymotion_data_src : 1;

 uint8_t anymotion_thr;

};


struct bmi160_acc_sig_mot_int_cfg
{

  uint8_t sig_mot_skip   : 2 ;
 
  uint8_t sig_mot_proof  : 2 ;

  uint8_t sig_data_src   : 1 ;

  uint8_t sig_en         : 1 ;

  uint8_t sig_mot_thres  : 1 ;

};


struct bmi160_acc_step_detect_int_cfg
{

  uint16_t step_detector_en    : 1 ;

  uint16_t min_threshold       : 2 ;

  uint16_t steptime_min        : 3 ;

  uint16_t step_detector_mode  : 2 ;

  uint16_t step_min_buf        : 3 ;

};


struct bmi160_acc_no_motion_int_cfg 
{

  uint16_t no_motion_x    : 1 ;

  uint16_t no_motion_y    : 1 ;

  uint16_t no_motion_z    : 1 ;

  uint16_t no_motion_dur  : 6 ;

  uint16_t no_motion_sel  : 1 ;

  uint16_t no_motion_src  : 1 ;

  uint8_t  no_motion_thres;


};


struct bmi160_acc_orient_int_cfg
{
   
 uint16_t orient_mode      : 2 ;

 uint16_t orient_blocking  : 2 ;

 uint16_t orient_hyst      : 4 ;

 uint16_t orient_theta     : 6 ;
 
 uint16_t orient_ud_en     : 1 ;

 uint16_t axes_ex          : 1 ;

 uint8_t orient_en         : 1 ;

};


struct bmi160_acc_flat_detect_int_cfg

{

  uint16_t flat_theta      : 6 ;
  
  uint16_t flat_hy         : 3 ;

  uint16_t flat_hold_time  : 2 ;

  uint16_t flat_en         : 1 ;

};

struct bmi160_acc_low_g_int_cfg

{
  
 uint8_t low_dur ;

 uint8_t low_thres ;

 uint8_t low_hyst      : 2 ;

 uint8_t low_mode      : 1 ;

 uint8_t low_data_src  : 1 ;

 uint8_t low_en        : 1  ;

};

 
 
 struct bmi160_acc_high_g_int_cfg
{

  
     uint8_t high_g_x       : 1 ;

     uint8_t high_g_y       : 1 ;
    
     uint8_t high_g_z       : 1 ;

     uint8_t high_hy        : 2 ;

     uint8_t high_data_src  : 1 ;

     uint8_t high_thres ;

     uint8_t high_dur ;
      
 };

struct bmi160_int_pin_settg
{

   uint16_t output_en   : 1 ;
   
   uint16_t output_mode  : 1 ;

   uint16_t output_type   : 1 ;

   uint16_t edge_ctrl : 1;

   uint16_t input_en : 1;

   uint16_t latch_dur : 4;

};


union bmi160_int_type_cfg
{

   struct bmi160_acc_tap_int_cfg acc_tap_int ;

   struct bmi160_acc_any_mot_int_cfg acc_any_motion_int;
  
    struct bmi160_acc_sig_mot_int_cfg acc_sig_motion_int;

    struct bmi160_acc_step_detect_int_cfg acc_step_detect_int;

     struct bmi160_acc_no_motion_int_cfg acc_no_motion_int;

       struct bmi160_acc_orient_int_cfg acc_orient_int;
    
       struct bmi160_acc_flat_detect_int_cfg acc_flat_int;
    
       struct bmi160_acc_low_g_int_cfg acc_low_g_int;

       struct bmi160_acc_high_g_int_cfg acc_high_g_int;


};



struct bmi160_int_settg
{

  enum bmi160_int_channel int_channel;
  
  enum bmi160_int_types int_type;

  struct bmi160_int_pin_settg int_pin_settg;

   union bmi160_int_type_cfg int_type_cfg;
 
    uint8_t fifo_full_int_en : 1;

     uint8_t fifo_wtm_int_en : 1;

};



struct bmi160_fifo_frame
{
   uint8_t *data;

   uint16_t length;

   uint8_t fifo_time_enable;

   uint8_t fifo_header_enable;
   
    uint8_t fifo_data_enable;

  
    uint16_t accel_byte_start_idx;

    
    uint16_t gyro_byte_start_idx;

   
    uint16_t aux_byte_start_idx;

  
    uint32_t sensor_time;

  
    uint8_t skipped_frame_count;
};
   
   
   
struct bmi160_dev
{

  uint8_t chip_id;
  
  uint8_t id;
 
  uint8_t interface;

  enum bmi160_any_sig_motion_active_interrupt_state any_sig_sel;

  struct bmi160_cfg accel_cfg;
  
  struct bmi160_cfg prev_accel_cfg;

  struct bmi160_cfg gyro_cfg;

  struct bmi160_aux_cfg aux_cfg;

  struct bmi160_aux_cfg prev_aux_cfg;

  struct bmi160_fifo_frame *fifo;

  bmi160_com_fptr_t read;

  bmi160_com_fptr_t write;

  bmi160_delay_fptr_t delay_ms;

  uint16_t read_write_len;

  uint8_t dummy_byte;
};

#endif


























       






































                    
