#pragma once
// MESSAGE Solenoid2 PACKING

#define MAVLINK_MSG_ID_Solenoid2 210

MAVPACKED(
typedef struct __mavlink_solenoid2_t {
 uint64_t sol2; /*<  All 64 bit data*/
}) mavlink_solenoid2_t;

#define MAVLINK_MSG_ID_Solenoid2_LEN 8
#define MAVLINK_MSG_ID_Solenoid2_MIN_LEN 8
#define MAVLINK_MSG_ID_210_LEN 8
#define MAVLINK_MSG_ID_210_MIN_LEN 8

#define MAVLINK_MSG_ID_Solenoid2_CRC 199
#define MAVLINK_MSG_ID_210_CRC 199



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_Solenoid2 { \
    210, \
    "Solenoid2", \
    1, \
    {  { "sol2", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_solenoid2_t, sol2) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_Solenoid2 { \
    "Solenoid2", \
    1, \
    {  { "sol2", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_solenoid2_t, sol2) }, \
         } \
}
#endif

/**
 * @brief Pack a solenoid2 message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param sol2  All 64 bit data
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_solenoid2_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t sol2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_Solenoid2_LEN];
    _mav_put_uint64_t(buf, 0, sol2);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_Solenoid2_LEN);
#else
    mavlink_solenoid2_t packet;
    packet.sol2 = sol2;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_Solenoid2_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_Solenoid2;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_Solenoid2_MIN_LEN, MAVLINK_MSG_ID_Solenoid2_LEN, MAVLINK_MSG_ID_Solenoid2_CRC);
}

/**
 * @brief Pack a solenoid2 message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param sol2  All 64 bit data
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_solenoid2_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t sol2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_Solenoid2_LEN];
    _mav_put_uint64_t(buf, 0, sol2);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_Solenoid2_LEN);
#else
    mavlink_solenoid2_t packet;
    packet.sol2 = sol2;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_Solenoid2_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_Solenoid2;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_Solenoid2_MIN_LEN, MAVLINK_MSG_ID_Solenoid2_LEN, MAVLINK_MSG_ID_Solenoid2_CRC);
}

/**
 * @brief Encode a solenoid2 struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param solenoid2 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_solenoid2_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_solenoid2_t* solenoid2)
{
    return mavlink_msg_solenoid2_pack(system_id, component_id, msg, solenoid2->sol2);
}

/**
 * @brief Encode a solenoid2 struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param solenoid2 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_solenoid2_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_solenoid2_t* solenoid2)
{
    return mavlink_msg_solenoid2_pack_chan(system_id, component_id, chan, msg, solenoid2->sol2);
}

/**
 * @brief Send a solenoid2 message
 * @param chan MAVLink channel to send the message
 *
 * @param sol2  All 64 bit data
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_solenoid2_send(mavlink_channel_t chan, uint64_t sol2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_Solenoid2_LEN];
    _mav_put_uint64_t(buf, 0, sol2);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Solenoid2, buf, MAVLINK_MSG_ID_Solenoid2_MIN_LEN, MAVLINK_MSG_ID_Solenoid2_LEN, MAVLINK_MSG_ID_Solenoid2_CRC);
#else
    mavlink_solenoid2_t packet;
    packet.sol2 = sol2;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Solenoid2, (const char *)&packet, MAVLINK_MSG_ID_Solenoid2_MIN_LEN, MAVLINK_MSG_ID_Solenoid2_LEN, MAVLINK_MSG_ID_Solenoid2_CRC);
#endif
}

/**
 * @brief Send a solenoid2 message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_solenoid2_send_struct(mavlink_channel_t chan, const mavlink_solenoid2_t* solenoid2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_solenoid2_send(chan, solenoid2->sol2);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Solenoid2, (const char *)solenoid2, MAVLINK_MSG_ID_Solenoid2_MIN_LEN, MAVLINK_MSG_ID_Solenoid2_LEN, MAVLINK_MSG_ID_Solenoid2_CRC);
#endif
}

#if MAVLINK_MSG_ID_Solenoid2_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_solenoid2_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t sol2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, sol2);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Solenoid2, buf, MAVLINK_MSG_ID_Solenoid2_MIN_LEN, MAVLINK_MSG_ID_Solenoid2_LEN, MAVLINK_MSG_ID_Solenoid2_CRC);
#else
    mavlink_solenoid2_t *packet = (mavlink_solenoid2_t *)msgbuf;
    packet->sol2 = sol2;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Solenoid2, (const char *)packet, MAVLINK_MSG_ID_Solenoid2_MIN_LEN, MAVLINK_MSG_ID_Solenoid2_LEN, MAVLINK_MSG_ID_Solenoid2_CRC);
#endif
}
#endif

#endif

// MESSAGE Solenoid2 UNPACKING


/**
 * @brief Get field sol2 from solenoid2 message
 *
 * @return  All 64 bit data
 */
static inline uint64_t mavlink_msg_solenoid2_get_sol2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Decode a solenoid2 message into a struct
 *
 * @param msg The message to decode
 * @param solenoid2 C-struct to decode the message contents into
 */
static inline void mavlink_msg_solenoid2_decode(const mavlink_message_t* msg, mavlink_solenoid2_t* solenoid2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    solenoid2->sol2 = mavlink_msg_solenoid2_get_sol2(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_Solenoid2_LEN? msg->len : MAVLINK_MSG_ID_Solenoid2_LEN;
        memset(solenoid2, 0, MAVLINK_MSG_ID_Solenoid2_LEN);
    memcpy(solenoid2, _MAV_PAYLOAD(msg), len);
#endif
}
