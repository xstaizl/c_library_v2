#pragma once
// MESSAGE Solenoid PACKING

#define MAVLINK_MSG_ID_Solenoid 58

MAVPACKED(
typedef struct __mavlink_solenoid_t {
 uint64_t sol; /*<  All 64 bit data*/
}) mavlink_solenoid_t;

#define MAVLINK_MSG_ID_Solenoid_LEN 8
#define MAVLINK_MSG_ID_Solenoid_MIN_LEN 8
#define MAVLINK_MSG_ID_58_LEN 8
#define MAVLINK_MSG_ID_58_MIN_LEN 8

#define MAVLINK_MSG_ID_Solenoid_CRC 241
#define MAVLINK_MSG_ID_58_CRC 241



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_Solenoid { \
    58, \
    "Solenoid", \
    1, \
    {  { "sol", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_solenoid_t, sol) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_Solenoid { \
    "Solenoid", \
    1, \
    {  { "sol", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_solenoid_t, sol) }, \
         } \
}
#endif

/**
 * @brief Pack a solenoid message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param sol  All 64 bit data
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_solenoid_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t sol)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_Solenoid_LEN];
    _mav_put_uint64_t(buf, 0, sol);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_Solenoid_LEN);
#else
    mavlink_solenoid_t packet;
    packet.sol = sol;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_Solenoid_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_Solenoid;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_Solenoid_MIN_LEN, MAVLINK_MSG_ID_Solenoid_LEN, MAVLINK_MSG_ID_Solenoid_CRC);
}

/**
 * @brief Pack a solenoid message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param sol  All 64 bit data
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_solenoid_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t sol)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_Solenoid_LEN];
    _mav_put_uint64_t(buf, 0, sol);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_Solenoid_LEN);
#else
    mavlink_solenoid_t packet;
    packet.sol = sol;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_Solenoid_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_Solenoid;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_Solenoid_MIN_LEN, MAVLINK_MSG_ID_Solenoid_LEN, MAVLINK_MSG_ID_Solenoid_CRC);
}

/**
 * @brief Encode a solenoid struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param solenoid C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_solenoid_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_solenoid_t* solenoid)
{
    return mavlink_msg_solenoid_pack(system_id, component_id, msg, solenoid->sol);
}

/**
 * @brief Encode a solenoid struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param solenoid C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_solenoid_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_solenoid_t* solenoid)
{
    return mavlink_msg_solenoid_pack_chan(system_id, component_id, chan, msg, solenoid->sol);
}

/**
 * @brief Send a solenoid message
 * @param chan MAVLink channel to send the message
 *
 * @param sol  All 64 bit data
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_solenoid_send(mavlink_channel_t chan, uint64_t sol)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_Solenoid_LEN];
    _mav_put_uint64_t(buf, 0, sol);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Solenoid, buf, MAVLINK_MSG_ID_Solenoid_MIN_LEN, MAVLINK_MSG_ID_Solenoid_LEN, MAVLINK_MSG_ID_Solenoid_CRC);
#else
    mavlink_solenoid_t packet;
    packet.sol = sol;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Solenoid, (const char *)&packet, MAVLINK_MSG_ID_Solenoid_MIN_LEN, MAVLINK_MSG_ID_Solenoid_LEN, MAVLINK_MSG_ID_Solenoid_CRC);
#endif
}

/**
 * @brief Send a solenoid message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_solenoid_send_struct(mavlink_channel_t chan, const mavlink_solenoid_t* solenoid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_solenoid_send(chan, solenoid->sol);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Solenoid, (const char *)solenoid, MAVLINK_MSG_ID_Solenoid_MIN_LEN, MAVLINK_MSG_ID_Solenoid_LEN, MAVLINK_MSG_ID_Solenoid_CRC);
#endif
}

#if MAVLINK_MSG_ID_Solenoid_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_solenoid_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t sol)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, sol);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Solenoid, buf, MAVLINK_MSG_ID_Solenoid_MIN_LEN, MAVLINK_MSG_ID_Solenoid_LEN, MAVLINK_MSG_ID_Solenoid_CRC);
#else
    mavlink_solenoid_t *packet = (mavlink_solenoid_t *)msgbuf;
    packet->sol = sol;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Solenoid, (const char *)packet, MAVLINK_MSG_ID_Solenoid_MIN_LEN, MAVLINK_MSG_ID_Solenoid_LEN, MAVLINK_MSG_ID_Solenoid_CRC);
#endif
}
#endif

#endif

// MESSAGE Solenoid UNPACKING


/**
 * @brief Get field sol from solenoid message
 *
 * @return  All 64 bit data
 */
static inline uint64_t mavlink_msg_solenoid_get_sol(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Decode a solenoid message into a struct
 *
 * @param msg The message to decode
 * @param solenoid C-struct to decode the message contents into
 */
static inline void mavlink_msg_solenoid_decode(const mavlink_message_t* msg, mavlink_solenoid_t* solenoid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    solenoid->sol = mavlink_msg_solenoid_get_sol(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_Solenoid_LEN? msg->len : MAVLINK_MSG_ID_Solenoid_LEN;
        memset(solenoid, 0, MAVLINK_MSG_ID_Solenoid_LEN);
    memcpy(solenoid, _MAV_PAYLOAD(msg), len);
#endif
}
