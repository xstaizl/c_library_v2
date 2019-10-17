/** @file
 *  @brief MAVLink comm protocol generated from vcu_lcs.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_VCU_LCS_H
#define MAVLINK_VCU_LCS_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_VCU_LCS.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 2

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{58, 241, 8, 8, 0, 0, 0}, {78, 174, 13, 13, 0, 0, 0}, {207, 92, 8, 8, 0, 0, 0}, {208, 248, 8, 8, 0, 0, 0}, {209, 192, 8, 8, 0, 0, 0}, {210, 199, 8, 8, 0, 0, 0}, {221, 111, 8, 8, 0, 0, 0}, {222, 201, 8, 8, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_VCU_LCS

// ENUM DEFINITIONS



// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_vcu_lcs1.h"
#include "./mavlink_msg_vcu_lcs2.h"
#include "./mavlink_msg_vcu_lcs3.h"
#include "./mavlink_msg_controlbox.h"
#include "./mavlink_msg_solenoidspeed.h"
#include "./mavlink_msg_solenoid.h"
#include "./mavlink_msg_solenoid2.h"
#include "./mavlink_msg_manual_control_cus.h"

// base include


#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 2

#if MAVLINK_THIS_XML_IDX == MAVLINK_PRIMARY_XML_IDX
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_Solenoid, MAVLINK_MESSAGE_INFO_MANUAL_CONTROL_CUS, MAVLINK_MESSAGE_INFO_VCU_LCS3, MAVLINK_MESSAGE_INFO_ControlBox, MAVLINK_MESSAGE_INFO_SolenoidSpeed, MAVLINK_MESSAGE_INFO_Solenoid2, MAVLINK_MESSAGE_INFO_VCU_LCS1, MAVLINK_MESSAGE_INFO_VCU_LCS2}
# define MAVLINK_MESSAGE_NAMES {{ "ControlBox", 208 }, { "MANUAL_CONTROL_CUS", 78 }, { "Solenoid", 58 }, { "Solenoid2", 210 }, { "SolenoidSpeed", 209 }, { "VCU_LCS1", 221 }, { "VCU_LCS2", 222 }, { "VCU_LCS3", 207 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_VCU_LCS_H
