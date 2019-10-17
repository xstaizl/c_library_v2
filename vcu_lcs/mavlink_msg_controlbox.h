#pragma once
// MESSAGE ControlBox PACKING

#define MAVLINK_MSG_ID_ControlBox 208

MAVPACKED(
typedef struct __mavlink_controlbox_t {
 uint64_t ctrlbox; /*<  All 64 bit data*/
}) mavlink_controlbox_t;

#define MAVLINK_MSG_ID_ControlBox_LEN 8
#define MAVLINK_MSG_ID_ControlBox_MIN_LEN 8
#define MAVLINK_MSG_ID_208_LEN 8
#define MAVLINK_MSG_ID_208_MIN_LEN 8

#define MAVLINK_MSG_ID_ControlBox_CRC 248
#define MAVLINK_MSG_ID_208_CRC 248



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ControlBox { \
    208, \
    "ControlBox", \
    1, \
    {  { "ctrlbox", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_controlbox_t, ctrlbox) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ControlBox { \
    "ControlBox", \
    1, \
    {  { "ctrlbox", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_controlbox_t, ctrlbox) }, \
         } \
}
#endif

/**
 * @brief Pack a controlbox message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param ctrlbox  All 64 bit data
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_controlbox_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t ctrlbox)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ControlBox_LEN];
    _mav_put_uint64_t(buf, 0, ctrlbox);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ControlBox_LEN);
#else
    mavlink_controlbox_t packet;
    packet.ctrlbox = ctrlbox;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ControlBox_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ControlBox;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ControlBox_MIN_LEN, MAVLINK_MSG_ID_ControlBox_LEN, MAVLINK_MSG_ID_ControlBox_CRC);
}

/**
 * @brief Pack a controlbox message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ctrlbox  All 64 bit data
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_controlbox_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t ctrlbox)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ControlBox_LEN];
    _mav_put_uint64_t(buf, 0, ctrlbox);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ControlBox_LEN);
#else
    mavlink_controlbox_t packet;
    packet.ctrlbox = ctrlbox;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ControlBox_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ControlBox;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ControlBox_MIN_LEN, MAVLINK_MSG_ID_ControlBox_LEN, MAVLINK_MSG_ID_ControlBox_CRC);
}

/**
 * @brief Encode a controlbox struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param controlbox C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_controlbox_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_controlbox_t* controlbox)
{
    return mavlink_msg_controlbox_pack(system_id, component_id, msg, controlbox->ctrlbox);
}

/**
 * @brief Encode a controlbox struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param controlbox C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_controlbox_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_controlbox_t* controlbox)
{
    return mavlink_msg_controlbox_pack_chan(system_id, component_id, chan, msg, controlbox->ctrlbox);
}

/**
 * @brief Send a controlbox message
 * @param chan MAVLink channel to send the message
 *
 * @param ctrlbox  All 64 bit data
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_controlbox_send(mavlink_channel_t chan, uint64_t ctrlbox)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ControlBox_LEN];
    _mav_put_uint64_t(buf, 0, ctrlbox);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ControlBox, buf, MAVLINK_MSG_ID_ControlBox_MIN_LEN, MAVLINK_MSG_ID_ControlBox_LEN, MAVLINK_MSG_ID_ControlBox_CRC);
#else
    mavlink_controlbox_t packet;
    packet.ctrlbox = ctrlbox;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ControlBox, (const char *)&packet, MAVLINK_MSG_ID_ControlBox_MIN_LEN, MAVLINK_MSG_ID_ControlBox_LEN, MAVLINK_MSG_ID_ControlBox_CRC);
#endif
}

/**
 * @brief Send a controlbox message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_controlbox_send_struct(mavlink_channel_t chan, const mavlink_controlbox_t* controlbox)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_controlbox_send(chan, controlbox->ctrlbox);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ControlBox, (const char *)controlbox, MAVLINK_MSG_ID_ControlBox_MIN_LEN, MAVLINK_MSG_ID_ControlBox_LEN, MAVLINK_MSG_ID_ControlBox_CRC);
#endif
}

#if MAVLINK_MSG_ID_ControlBox_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_controlbox_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t ctrlbox)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, ctrlbox);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ControlBox, buf, MAVLINK_MSG_ID_ControlBox_MIN_LEN, MAVLINK_MSG_ID_ControlBox_LEN, MAVLINK_MSG_ID_ControlBox_CRC);
#else
    mavlink_controlbox_t *packet = (mavlink_controlbox_t *)msgbuf;
    packet->ctrlbox = ctrlbox;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ControlBox, (const char *)packet, MAVLINK_MSG_ID_ControlBox_MIN_LEN, MAVLINK_MSG_ID_ControlBox_LEN, MAVLINK_MSG_ID_ControlBox_CRC);
#endif
}
#endif

#endif

// MESSAGE ControlBox UNPACKING


/**
 * @brief Get field ctrlbox from controlbox message
 *
 * @return  All 64 bit data
 */
static inline uint64_t mavlink_msg_controlbox_get_ctrlbox(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Decode a controlbox message into a struct
 *
 * @param msg The message to decode
 * @param controlbox C-struct to decode the message contents into
 */
static inline void mavlink_msg_controlbox_decode(const mavlink_message_t* msg, mavlink_controlbox_t* controlbox)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    controlbox->ctrlbox = mavlink_msg_controlbox_get_ctrlbox(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ControlBox_LEN? msg->len : MAVLINK_MSG_ID_ControlBox_LEN;
        memset(controlbox, 0, MAVLINK_MSG_ID_ControlBox_LEN);
    memcpy(controlbox, _MAV_PAYLOAD(msg), len);
#endif
}
