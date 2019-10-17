#pragma once
// MESSAGE MANUAL_CONTROL_CUS PACKING

#define MAVLINK_MSG_ID_MANUAL_CONTROL_CUS 78

MAVPACKED(
typedef struct __mavlink_manual_control_cus_t {
 int16_t x; /*<  X-axis, normalized to the range [-1000,1000]. A value of INT16_MAX indicates that this axis is invalid. Generally corresponds to forward(1000)-backward(-1000) movement on a joystick and the pitch of a vehicle.*/
 int16_t y; /*<  Y-axis, normalized to the range [-1000,1000]. A value of INT16_MAX indicates that this axis is invalid. Generally corresponds to left(-1000)-right(1000) movement on a joystick and the roll of a vehicle.*/
 int16_t z; /*<  Z-axis, normalized to the range [-1000,1000]. A value of INT16_MAX indicates that this axis is invalid. Generally corresponds to a separate slider movement with maximum being 1000 and minimum being -1000 on a joystick and the thrust of a vehicle. Positive values are positive thrust, negative values are negative thrust.*/
 int16_t r; /*<  R-axis, normalized to the range [-1000,1000]. A value of INT16_MAX indicates that this axis is invalid. Generally corresponds to a twisting of the joystick, with counter-clockwise being 1000 and clockwise being -1000, and the yaw of a vehicle.*/
 uint16_t buttons; /*<  A bitfield corresponding to the joystick buttons' current state, 1 for pressed, 0 for released. The lowest bit corresponds to Button 1.*/
 uint16_t buttons2; /*<  A bitfield corresponding to the joystick buttons' current state, 1 for pressed, 0 for released. The lowest bit corresponds to Button 1.*/
 uint8_t target; /*<  The system to be controlled.*/
}) mavlink_manual_control_cus_t;

#define MAVLINK_MSG_ID_MANUAL_CONTROL_CUS_LEN 13
#define MAVLINK_MSG_ID_MANUAL_CONTROL_CUS_MIN_LEN 13
#define MAVLINK_MSG_ID_78_LEN 13
#define MAVLINK_MSG_ID_78_MIN_LEN 13

#define MAVLINK_MSG_ID_MANUAL_CONTROL_CUS_CRC 174
#define MAVLINK_MSG_ID_78_CRC 174



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_MANUAL_CONTROL_CUS { \
    78, \
    "MANUAL_CONTROL_CUS", \
    7, \
    {  { "target", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_manual_control_cus_t, target) }, \
         { "x", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_manual_control_cus_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_manual_control_cus_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_manual_control_cus_t, z) }, \
         { "r", NULL, MAVLINK_TYPE_INT16_T, 0, 6, offsetof(mavlink_manual_control_cus_t, r) }, \
         { "buttons", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_manual_control_cus_t, buttons) }, \
         { "buttons2", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_manual_control_cus_t, buttons2) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_MANUAL_CONTROL_CUS { \
    "MANUAL_CONTROL_CUS", \
    7, \
    {  { "target", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_manual_control_cus_t, target) }, \
         { "x", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_manual_control_cus_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_manual_control_cus_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_manual_control_cus_t, z) }, \
         { "r", NULL, MAVLINK_TYPE_INT16_T, 0, 6, offsetof(mavlink_manual_control_cus_t, r) }, \
         { "buttons", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_manual_control_cus_t, buttons) }, \
         { "buttons2", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_manual_control_cus_t, buttons2) }, \
         } \
}
#endif

/**
 * @brief Pack a manual_control_cus message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target  The system to be controlled.
 * @param x  X-axis, normalized to the range [-1000,1000]. A value of INT16_MAX indicates that this axis is invalid. Generally corresponds to forward(1000)-backward(-1000) movement on a joystick and the pitch of a vehicle.
 * @param y  Y-axis, normalized to the range [-1000,1000]. A value of INT16_MAX indicates that this axis is invalid. Generally corresponds to left(-1000)-right(1000) movement on a joystick and the roll of a vehicle.
 * @param z  Z-axis, normalized to the range [-1000,1000]. A value of INT16_MAX indicates that this axis is invalid. Generally corresponds to a separate slider movement with maximum being 1000 and minimum being -1000 on a joystick and the thrust of a vehicle. Positive values are positive thrust, negative values are negative thrust.
 * @param r  R-axis, normalized to the range [-1000,1000]. A value of INT16_MAX indicates that this axis is invalid. Generally corresponds to a twisting of the joystick, with counter-clockwise being 1000 and clockwise being -1000, and the yaw of a vehicle.
 * @param buttons  A bitfield corresponding to the joystick buttons' current state, 1 for pressed, 0 for released. The lowest bit corresponds to Button 1.
 * @param buttons2  A bitfield corresponding to the joystick buttons' current state, 1 for pressed, 0 for released. The lowest bit corresponds to Button 1.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_manual_control_cus_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target, int16_t x, int16_t y, int16_t z, int16_t r, uint16_t buttons, uint16_t buttons2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MANUAL_CONTROL_CUS_LEN];
    _mav_put_int16_t(buf, 0, x);
    _mav_put_int16_t(buf, 2, y);
    _mav_put_int16_t(buf, 4, z);
    _mav_put_int16_t(buf, 6, r);
    _mav_put_uint16_t(buf, 8, buttons);
    _mav_put_uint16_t(buf, 10, buttons2);
    _mav_put_uint8_t(buf, 12, target);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MANUAL_CONTROL_CUS_LEN);
#else
    mavlink_manual_control_cus_t packet;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.r = r;
    packet.buttons = buttons;
    packet.buttons2 = buttons2;
    packet.target = target;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MANUAL_CONTROL_CUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MANUAL_CONTROL_CUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MANUAL_CONTROL_CUS_MIN_LEN, MAVLINK_MSG_ID_MANUAL_CONTROL_CUS_LEN, MAVLINK_MSG_ID_MANUAL_CONTROL_CUS_CRC);
}

/**
 * @brief Pack a manual_control_cus message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target  The system to be controlled.
 * @param x  X-axis, normalized to the range [-1000,1000]. A value of INT16_MAX indicates that this axis is invalid. Generally corresponds to forward(1000)-backward(-1000) movement on a joystick and the pitch of a vehicle.
 * @param y  Y-axis, normalized to the range [-1000,1000]. A value of INT16_MAX indicates that this axis is invalid. Generally corresponds to left(-1000)-right(1000) movement on a joystick and the roll of a vehicle.
 * @param z  Z-axis, normalized to the range [-1000,1000]. A value of INT16_MAX indicates that this axis is invalid. Generally corresponds to a separate slider movement with maximum being 1000 and minimum being -1000 on a joystick and the thrust of a vehicle. Positive values are positive thrust, negative values are negative thrust.
 * @param r  R-axis, normalized to the range [-1000,1000]. A value of INT16_MAX indicates that this axis is invalid. Generally corresponds to a twisting of the joystick, with counter-clockwise being 1000 and clockwise being -1000, and the yaw of a vehicle.
 * @param buttons  A bitfield corresponding to the joystick buttons' current state, 1 for pressed, 0 for released. The lowest bit corresponds to Button 1.
 * @param buttons2  A bitfield corresponding to the joystick buttons' current state, 1 for pressed, 0 for released. The lowest bit corresponds to Button 1.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_manual_control_cus_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target,int16_t x,int16_t y,int16_t z,int16_t r,uint16_t buttons,uint16_t buttons2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MANUAL_CONTROL_CUS_LEN];
    _mav_put_int16_t(buf, 0, x);
    _mav_put_int16_t(buf, 2, y);
    _mav_put_int16_t(buf, 4, z);
    _mav_put_int16_t(buf, 6, r);
    _mav_put_uint16_t(buf, 8, buttons);
    _mav_put_uint16_t(buf, 10, buttons2);
    _mav_put_uint8_t(buf, 12, target);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MANUAL_CONTROL_CUS_LEN);
#else
    mavlink_manual_control_cus_t packet;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.r = r;
    packet.buttons = buttons;
    packet.buttons2 = buttons2;
    packet.target = target;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MANUAL_CONTROL_CUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MANUAL_CONTROL_CUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_MANUAL_CONTROL_CUS_MIN_LEN, MAVLINK_MSG_ID_MANUAL_CONTROL_CUS_LEN, MAVLINK_MSG_ID_MANUAL_CONTROL_CUS_CRC);
}

/**
 * @brief Encode a manual_control_cus struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param manual_control_cus C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_manual_control_cus_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_manual_control_cus_t* manual_control_cus)
{
    return mavlink_msg_manual_control_cus_pack(system_id, component_id, msg, manual_control_cus->target, manual_control_cus->x, manual_control_cus->y, manual_control_cus->z, manual_control_cus->r, manual_control_cus->buttons, manual_control_cus->buttons2);
}

/**
 * @brief Encode a manual_control_cus struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param manual_control_cus C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_manual_control_cus_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_manual_control_cus_t* manual_control_cus)
{
    return mavlink_msg_manual_control_cus_pack_chan(system_id, component_id, chan, msg, manual_control_cus->target, manual_control_cus->x, manual_control_cus->y, manual_control_cus->z, manual_control_cus->r, manual_control_cus->buttons, manual_control_cus->buttons2);
}

/**
 * @brief Send a manual_control_cus message
 * @param chan MAVLink channel to send the message
 *
 * @param target  The system to be controlled.
 * @param x  X-axis, normalized to the range [-1000,1000]. A value of INT16_MAX indicates that this axis is invalid. Generally corresponds to forward(1000)-backward(-1000) movement on a joystick and the pitch of a vehicle.
 * @param y  Y-axis, normalized to the range [-1000,1000]. A value of INT16_MAX indicates that this axis is invalid. Generally corresponds to left(-1000)-right(1000) movement on a joystick and the roll of a vehicle.
 * @param z  Z-axis, normalized to the range [-1000,1000]. A value of INT16_MAX indicates that this axis is invalid. Generally corresponds to a separate slider movement with maximum being 1000 and minimum being -1000 on a joystick and the thrust of a vehicle. Positive values are positive thrust, negative values are negative thrust.
 * @param r  R-axis, normalized to the range [-1000,1000]. A value of INT16_MAX indicates that this axis is invalid. Generally corresponds to a twisting of the joystick, with counter-clockwise being 1000 and clockwise being -1000, and the yaw of a vehicle.
 * @param buttons  A bitfield corresponding to the joystick buttons' current state, 1 for pressed, 0 for released. The lowest bit corresponds to Button 1.
 * @param buttons2  A bitfield corresponding to the joystick buttons' current state, 1 for pressed, 0 for released. The lowest bit corresponds to Button 1.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_manual_control_cus_send(mavlink_channel_t chan, uint8_t target, int16_t x, int16_t y, int16_t z, int16_t r, uint16_t buttons, uint16_t buttons2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MANUAL_CONTROL_CUS_LEN];
    _mav_put_int16_t(buf, 0, x);
    _mav_put_int16_t(buf, 2, y);
    _mav_put_int16_t(buf, 4, z);
    _mav_put_int16_t(buf, 6, r);
    _mav_put_uint16_t(buf, 8, buttons);
    _mav_put_uint16_t(buf, 10, buttons2);
    _mav_put_uint8_t(buf, 12, target);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MANUAL_CONTROL_CUS, buf, MAVLINK_MSG_ID_MANUAL_CONTROL_CUS_MIN_LEN, MAVLINK_MSG_ID_MANUAL_CONTROL_CUS_LEN, MAVLINK_MSG_ID_MANUAL_CONTROL_CUS_CRC);
#else
    mavlink_manual_control_cus_t packet;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.r = r;
    packet.buttons = buttons;
    packet.buttons2 = buttons2;
    packet.target = target;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MANUAL_CONTROL_CUS, (const char *)&packet, MAVLINK_MSG_ID_MANUAL_CONTROL_CUS_MIN_LEN, MAVLINK_MSG_ID_MANUAL_CONTROL_CUS_LEN, MAVLINK_MSG_ID_MANUAL_CONTROL_CUS_CRC);
#endif
}

/**
 * @brief Send a manual_control_cus message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_manual_control_cus_send_struct(mavlink_channel_t chan, const mavlink_manual_control_cus_t* manual_control_cus)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_manual_control_cus_send(chan, manual_control_cus->target, manual_control_cus->x, manual_control_cus->y, manual_control_cus->z, manual_control_cus->r, manual_control_cus->buttons, manual_control_cus->buttons2);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MANUAL_CONTROL_CUS, (const char *)manual_control_cus, MAVLINK_MSG_ID_MANUAL_CONTROL_CUS_MIN_LEN, MAVLINK_MSG_ID_MANUAL_CONTROL_CUS_LEN, MAVLINK_MSG_ID_MANUAL_CONTROL_CUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_MANUAL_CONTROL_CUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_manual_control_cus_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target, int16_t x, int16_t y, int16_t z, int16_t r, uint16_t buttons, uint16_t buttons2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int16_t(buf, 0, x);
    _mav_put_int16_t(buf, 2, y);
    _mav_put_int16_t(buf, 4, z);
    _mav_put_int16_t(buf, 6, r);
    _mav_put_uint16_t(buf, 8, buttons);
    _mav_put_uint16_t(buf, 10, buttons2);
    _mav_put_uint8_t(buf, 12, target);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MANUAL_CONTROL_CUS, buf, MAVLINK_MSG_ID_MANUAL_CONTROL_CUS_MIN_LEN, MAVLINK_MSG_ID_MANUAL_CONTROL_CUS_LEN, MAVLINK_MSG_ID_MANUAL_CONTROL_CUS_CRC);
#else
    mavlink_manual_control_cus_t *packet = (mavlink_manual_control_cus_t *)msgbuf;
    packet->x = x;
    packet->y = y;
    packet->z = z;
    packet->r = r;
    packet->buttons = buttons;
    packet->buttons2 = buttons2;
    packet->target = target;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MANUAL_CONTROL_CUS, (const char *)packet, MAVLINK_MSG_ID_MANUAL_CONTROL_CUS_MIN_LEN, MAVLINK_MSG_ID_MANUAL_CONTROL_CUS_LEN, MAVLINK_MSG_ID_MANUAL_CONTROL_CUS_CRC);
#endif
}
#endif

#endif

// MESSAGE MANUAL_CONTROL_CUS UNPACKING


/**
 * @brief Get field target from manual_control_cus message
 *
 * @return  The system to be controlled.
 */
static inline uint8_t mavlink_msg_manual_control_cus_get_target(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Get field x from manual_control_cus message
 *
 * @return  X-axis, normalized to the range [-1000,1000]. A value of INT16_MAX indicates that this axis is invalid. Generally corresponds to forward(1000)-backward(-1000) movement on a joystick and the pitch of a vehicle.
 */
static inline int16_t mavlink_msg_manual_control_cus_get_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  0);
}

/**
 * @brief Get field y from manual_control_cus message
 *
 * @return  Y-axis, normalized to the range [-1000,1000]. A value of INT16_MAX indicates that this axis is invalid. Generally corresponds to left(-1000)-right(1000) movement on a joystick and the roll of a vehicle.
 */
static inline int16_t mavlink_msg_manual_control_cus_get_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  2);
}

/**
 * @brief Get field z from manual_control_cus message
 *
 * @return  Z-axis, normalized to the range [-1000,1000]. A value of INT16_MAX indicates that this axis is invalid. Generally corresponds to a separate slider movement with maximum being 1000 and minimum being -1000 on a joystick and the thrust of a vehicle. Positive values are positive thrust, negative values are negative thrust.
 */
static inline int16_t mavlink_msg_manual_control_cus_get_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  4);
}

/**
 * @brief Get field r from manual_control_cus message
 *
 * @return  R-axis, normalized to the range [-1000,1000]. A value of INT16_MAX indicates that this axis is invalid. Generally corresponds to a twisting of the joystick, with counter-clockwise being 1000 and clockwise being -1000, and the yaw of a vehicle.
 */
static inline int16_t mavlink_msg_manual_control_cus_get_r(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  6);
}

/**
 * @brief Get field buttons from manual_control_cus message
 *
 * @return  A bitfield corresponding to the joystick buttons' current state, 1 for pressed, 0 for released. The lowest bit corresponds to Button 1.
 */
static inline uint16_t mavlink_msg_manual_control_cus_get_buttons(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field buttons2 from manual_control_cus message
 *
 * @return  A bitfield corresponding to the joystick buttons' current state, 1 for pressed, 0 for released. The lowest bit corresponds to Button 1.
 */
static inline uint16_t mavlink_msg_manual_control_cus_get_buttons2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Decode a manual_control_cus message into a struct
 *
 * @param msg The message to decode
 * @param manual_control_cus C-struct to decode the message contents into
 */
static inline void mavlink_msg_manual_control_cus_decode(const mavlink_message_t* msg, mavlink_manual_control_cus_t* manual_control_cus)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    manual_control_cus->x = mavlink_msg_manual_control_cus_get_x(msg);
    manual_control_cus->y = mavlink_msg_manual_control_cus_get_y(msg);
    manual_control_cus->z = mavlink_msg_manual_control_cus_get_z(msg);
    manual_control_cus->r = mavlink_msg_manual_control_cus_get_r(msg);
    manual_control_cus->buttons = mavlink_msg_manual_control_cus_get_buttons(msg);
    manual_control_cus->buttons2 = mavlink_msg_manual_control_cus_get_buttons2(msg);
    manual_control_cus->target = mavlink_msg_manual_control_cus_get_target(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_MANUAL_CONTROL_CUS_LEN? msg->len : MAVLINK_MSG_ID_MANUAL_CONTROL_CUS_LEN;
        memset(manual_control_cus, 0, MAVLINK_MSG_ID_MANUAL_CONTROL_CUS_LEN);
    memcpy(manual_control_cus, _MAV_PAYLOAD(msg), len);
#endif
}
