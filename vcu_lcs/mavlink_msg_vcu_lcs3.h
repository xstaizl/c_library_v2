#pragma once
// MESSAGE VCU_LCS3 PACKING

#define MAVLINK_MSG_ID_VCU_LCS3 207

MAVPACKED(
typedef struct __mavlink_vcu_lcs3_t {
 uint64_t lcs3buf; /*<  All 64 bit data*/
}) mavlink_vcu_lcs3_t;

#define MAVLINK_MSG_ID_VCU_LCS3_LEN 8
#define MAVLINK_MSG_ID_VCU_LCS3_MIN_LEN 8
#define MAVLINK_MSG_ID_207_LEN 8
#define MAVLINK_MSG_ID_207_MIN_LEN 8

#define MAVLINK_MSG_ID_VCU_LCS3_CRC 92
#define MAVLINK_MSG_ID_207_CRC 92



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_VCU_LCS3 { \
    207, \
    "VCU_LCS3", \
    1, \
    {  { "lcs3buf", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_vcu_lcs3_t, lcs3buf) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_VCU_LCS3 { \
    "VCU_LCS3", \
    1, \
    {  { "lcs3buf", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_vcu_lcs3_t, lcs3buf) }, \
         } \
}
#endif

/**
 * @brief Pack a vcu_lcs3 message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param lcs3buf  All 64 bit data
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_vcu_lcs3_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t lcs3buf)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VCU_LCS3_LEN];
    _mav_put_uint64_t(buf, 0, lcs3buf);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VCU_LCS3_LEN);
#else
    mavlink_vcu_lcs3_t packet;
    packet.lcs3buf = lcs3buf;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VCU_LCS3_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VCU_LCS3;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_VCU_LCS3_MIN_LEN, MAVLINK_MSG_ID_VCU_LCS3_LEN, MAVLINK_MSG_ID_VCU_LCS3_CRC);
}

/**
 * @brief Pack a vcu_lcs3 message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param lcs3buf  All 64 bit data
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_vcu_lcs3_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t lcs3buf)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VCU_LCS3_LEN];
    _mav_put_uint64_t(buf, 0, lcs3buf);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VCU_LCS3_LEN);
#else
    mavlink_vcu_lcs3_t packet;
    packet.lcs3buf = lcs3buf;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VCU_LCS3_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VCU_LCS3;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_VCU_LCS3_MIN_LEN, MAVLINK_MSG_ID_VCU_LCS3_LEN, MAVLINK_MSG_ID_VCU_LCS3_CRC);
}

/**
 * @brief Encode a vcu_lcs3 struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param vcu_lcs3 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_vcu_lcs3_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_vcu_lcs3_t* vcu_lcs3)
{
    return mavlink_msg_vcu_lcs3_pack(system_id, component_id, msg, vcu_lcs3->lcs3buf);
}

/**
 * @brief Encode a vcu_lcs3 struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param vcu_lcs3 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_vcu_lcs3_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_vcu_lcs3_t* vcu_lcs3)
{
    return mavlink_msg_vcu_lcs3_pack_chan(system_id, component_id, chan, msg, vcu_lcs3->lcs3buf);
}

/**
 * @brief Send a vcu_lcs3 message
 * @param chan MAVLink channel to send the message
 *
 * @param lcs3buf  All 64 bit data
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_vcu_lcs3_send(mavlink_channel_t chan, uint64_t lcs3buf)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VCU_LCS3_LEN];
    _mav_put_uint64_t(buf, 0, lcs3buf);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VCU_LCS3, buf, MAVLINK_MSG_ID_VCU_LCS3_MIN_LEN, MAVLINK_MSG_ID_VCU_LCS3_LEN, MAVLINK_MSG_ID_VCU_LCS3_CRC);
#else
    mavlink_vcu_lcs3_t packet;
    packet.lcs3buf = lcs3buf;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VCU_LCS3, (const char *)&packet, MAVLINK_MSG_ID_VCU_LCS3_MIN_LEN, MAVLINK_MSG_ID_VCU_LCS3_LEN, MAVLINK_MSG_ID_VCU_LCS3_CRC);
#endif
}

/**
 * @brief Send a vcu_lcs3 message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_vcu_lcs3_send_struct(mavlink_channel_t chan, const mavlink_vcu_lcs3_t* vcu_lcs3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_vcu_lcs3_send(chan, vcu_lcs3->lcs3buf);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VCU_LCS3, (const char *)vcu_lcs3, MAVLINK_MSG_ID_VCU_LCS3_MIN_LEN, MAVLINK_MSG_ID_VCU_LCS3_LEN, MAVLINK_MSG_ID_VCU_LCS3_CRC);
#endif
}

#if MAVLINK_MSG_ID_VCU_LCS3_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_vcu_lcs3_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t lcs3buf)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, lcs3buf);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VCU_LCS3, buf, MAVLINK_MSG_ID_VCU_LCS3_MIN_LEN, MAVLINK_MSG_ID_VCU_LCS3_LEN, MAVLINK_MSG_ID_VCU_LCS3_CRC);
#else
    mavlink_vcu_lcs3_t *packet = (mavlink_vcu_lcs3_t *)msgbuf;
    packet->lcs3buf = lcs3buf;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VCU_LCS3, (const char *)packet, MAVLINK_MSG_ID_VCU_LCS3_MIN_LEN, MAVLINK_MSG_ID_VCU_LCS3_LEN, MAVLINK_MSG_ID_VCU_LCS3_CRC);
#endif
}
#endif

#endif

// MESSAGE VCU_LCS3 UNPACKING


/**
 * @brief Get field lcs3buf from vcu_lcs3 message
 *
 * @return  All 64 bit data
 */
static inline uint64_t mavlink_msg_vcu_lcs3_get_lcs3buf(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Decode a vcu_lcs3 message into a struct
 *
 * @param msg The message to decode
 * @param vcu_lcs3 C-struct to decode the message contents into
 */
static inline void mavlink_msg_vcu_lcs3_decode(const mavlink_message_t* msg, mavlink_vcu_lcs3_t* vcu_lcs3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    vcu_lcs3->lcs3buf = mavlink_msg_vcu_lcs3_get_lcs3buf(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_VCU_LCS3_LEN? msg->len : MAVLINK_MSG_ID_VCU_LCS3_LEN;
        memset(vcu_lcs3, 0, MAVLINK_MSG_ID_VCU_LCS3_LEN);
    memcpy(vcu_lcs3, _MAV_PAYLOAD(msg), len);
#endif
}
