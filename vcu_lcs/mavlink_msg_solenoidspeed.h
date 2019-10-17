#pragma once
// MESSAGE SolenoidSpeed PACKING

#define MAVLINK_MSG_ID_SolenoidSpeed 209

MAVPACKED(
typedef struct __mavlink_solenoidspeed_t {
 uint64_t solspeed; /*<  All 64 bit data*/
}) mavlink_solenoidspeed_t;

#define MAVLINK_MSG_ID_SolenoidSpeed_LEN 8
#define MAVLINK_MSG_ID_SolenoidSpeed_MIN_LEN 8
#define MAVLINK_MSG_ID_209_LEN 8
#define MAVLINK_MSG_ID_209_MIN_LEN 8

#define MAVLINK_MSG_ID_SolenoidSpeed_CRC 192
#define MAVLINK_MSG_ID_209_CRC 192



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SolenoidSpeed { \
    209, \
    "SolenoidSpeed", \
    1, \
    {  { "solspeed", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_solenoidspeed_t, solspeed) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SolenoidSpeed { \
    "SolenoidSpeed", \
    1, \
    {  { "solspeed", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_solenoidspeed_t, solspeed) }, \
         } \
}
#endif

/**
 * @brief Pack a solenoidspeed message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param solspeed  All 64 bit data
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_solenoidspeed_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t solspeed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SolenoidSpeed_LEN];
    _mav_put_uint64_t(buf, 0, solspeed);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SolenoidSpeed_LEN);
#else
    mavlink_solenoidspeed_t packet;
    packet.solspeed = solspeed;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SolenoidSpeed_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SolenoidSpeed;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SolenoidSpeed_MIN_LEN, MAVLINK_MSG_ID_SolenoidSpeed_LEN, MAVLINK_MSG_ID_SolenoidSpeed_CRC);
}

/**
 * @brief Pack a solenoidspeed message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param solspeed  All 64 bit data
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_solenoidspeed_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t solspeed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SolenoidSpeed_LEN];
    _mav_put_uint64_t(buf, 0, solspeed);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SolenoidSpeed_LEN);
#else
    mavlink_solenoidspeed_t packet;
    packet.solspeed = solspeed;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SolenoidSpeed_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SolenoidSpeed;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SolenoidSpeed_MIN_LEN, MAVLINK_MSG_ID_SolenoidSpeed_LEN, MAVLINK_MSG_ID_SolenoidSpeed_CRC);
}

/**
 * @brief Encode a solenoidspeed struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param solenoidspeed C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_solenoidspeed_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_solenoidspeed_t* solenoidspeed)
{
    return mavlink_msg_solenoidspeed_pack(system_id, component_id, msg, solenoidspeed->solspeed);
}

/**
 * @brief Encode a solenoidspeed struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param solenoidspeed C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_solenoidspeed_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_solenoidspeed_t* solenoidspeed)
{
    return mavlink_msg_solenoidspeed_pack_chan(system_id, component_id, chan, msg, solenoidspeed->solspeed);
}

/**
 * @brief Send a solenoidspeed message
 * @param chan MAVLink channel to send the message
 *
 * @param solspeed  All 64 bit data
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_solenoidspeed_send(mavlink_channel_t chan, uint64_t solspeed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SolenoidSpeed_LEN];
    _mav_put_uint64_t(buf, 0, solspeed);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SolenoidSpeed, buf, MAVLINK_MSG_ID_SolenoidSpeed_MIN_LEN, MAVLINK_MSG_ID_SolenoidSpeed_LEN, MAVLINK_MSG_ID_SolenoidSpeed_CRC);
#else
    mavlink_solenoidspeed_t packet;
    packet.solspeed = solspeed;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SolenoidSpeed, (const char *)&packet, MAVLINK_MSG_ID_SolenoidSpeed_MIN_LEN, MAVLINK_MSG_ID_SolenoidSpeed_LEN, MAVLINK_MSG_ID_SolenoidSpeed_CRC);
#endif
}

/**
 * @brief Send a solenoidspeed message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_solenoidspeed_send_struct(mavlink_channel_t chan, const mavlink_solenoidspeed_t* solenoidspeed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_solenoidspeed_send(chan, solenoidspeed->solspeed);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SolenoidSpeed, (const char *)solenoidspeed, MAVLINK_MSG_ID_SolenoidSpeed_MIN_LEN, MAVLINK_MSG_ID_SolenoidSpeed_LEN, MAVLINK_MSG_ID_SolenoidSpeed_CRC);
#endif
}

#if MAVLINK_MSG_ID_SolenoidSpeed_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_solenoidspeed_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t solspeed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, solspeed);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SolenoidSpeed, buf, MAVLINK_MSG_ID_SolenoidSpeed_MIN_LEN, MAVLINK_MSG_ID_SolenoidSpeed_LEN, MAVLINK_MSG_ID_SolenoidSpeed_CRC);
#else
    mavlink_solenoidspeed_t *packet = (mavlink_solenoidspeed_t *)msgbuf;
    packet->solspeed = solspeed;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SolenoidSpeed, (const char *)packet, MAVLINK_MSG_ID_SolenoidSpeed_MIN_LEN, MAVLINK_MSG_ID_SolenoidSpeed_LEN, MAVLINK_MSG_ID_SolenoidSpeed_CRC);
#endif
}
#endif

#endif

// MESSAGE SolenoidSpeed UNPACKING


/**
 * @brief Get field solspeed from solenoidspeed message
 *
 * @return  All 64 bit data
 */
static inline uint64_t mavlink_msg_solenoidspeed_get_solspeed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Decode a solenoidspeed message into a struct
 *
 * @param msg The message to decode
 * @param solenoidspeed C-struct to decode the message contents into
 */
static inline void mavlink_msg_solenoidspeed_decode(const mavlink_message_t* msg, mavlink_solenoidspeed_t* solenoidspeed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    solenoidspeed->solspeed = mavlink_msg_solenoidspeed_get_solspeed(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SolenoidSpeed_LEN? msg->len : MAVLINK_MSG_ID_SolenoidSpeed_LEN;
        memset(solenoidspeed, 0, MAVLINK_MSG_ID_SolenoidSpeed_LEN);
    memcpy(solenoidspeed, _MAV_PAYLOAD(msg), len);
#endif
}
