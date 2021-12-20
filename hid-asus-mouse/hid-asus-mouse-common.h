/* SPDX-License-Identifier: GPL-2.0-or-later */
#ifndef __HID_ASUS_MOUSE_COMMON_H
#define __HID_ASUS_MOUSE_COMMON_H

/*
 * Copyright (c) 2021 Kyoken <kyoken@kyoken.ninja>
 */

// TODO: move to hid-ids.h
#define USB_VENDOR_ID_ASUSTEK		0x0b05
#define USB_DEVICE_ID_ASUSTEK_ROG_BUZZARD 0x1816
#define USB_DEVICE_ID_ASUSTEK_ROG_GLADIUS2 0x1845
#define USB_DEVICE_ID_ASUSTEK_ROG_GLADIUS2_ORIGIN 0x1877
#define USB_DEVICE_ID_ASUSTEK_ROG_GLADIUS2_ORIGIN_PINK 0x18cd
#define USB_DEVICE_ID_ASUSTEK_ROG_KERIS_WIRELESS_RF 0x1960
#define USB_DEVICE_ID_ASUSTEK_ROG_KERIS_WIRELESS_USB 0x195e
#define USB_DEVICE_ID_ASUSTEK_ROG_PUGIO 0x1846
#define USB_DEVICE_ID_ASUSTEK_ROG_STRIX_CARRY 0x18b4
#define USB_DEVICE_ID_ASUSTEK_ROG_STRIX_CHAKRAM_RF 0x18E5
#define USB_DEVICE_ID_ASUSTEK_ROG_STRIX_CHAKRAM_USB 0x18E3
#define USB_DEVICE_ID_ASUSTEK_ROG_STRIX_EVOLVE 0x185B
#define USB_DEVICE_ID_ASUSTEK_ROG_STRIX_IMPACT 0x1847
#define USB_DEVICE_ID_ASUSTEK_ROG_STRIX_IMPACT2_WIRELESS_RF 0x1949
#define USB_DEVICE_ID_ASUSTEK_ROG_STRIX_IMPACT2_WIRELESS_USB 0x1947
#define USB_DEVICE_ID_ASUSTEK_ROG_STRIX_SPATHA_RF 0x1824
#define USB_DEVICE_ID_ASUSTEK_ROG_STRIX_SPATHA_USB 0x181C

/* #define ASUS_MOUSE_DEBUG 1 */
#define ASUS_MOUSE_GEN2_EVENT_SIZE 9
#define ASUS_MOUSE_GEN3_EVENT_SIZE 17

#define ASUS_MOUSE_DATA_KEY_STATE_BITS 32
#define ASUS_MOUSE_DATA_KEY_STATE_NUM 4
struct asus_mouse_data {
	__u32 key_state[ASUS_MOUSE_DATA_KEY_STATE_NUM];
	struct input_dev *input;
};

#define ASUS_MOUSE_MAPPING_SIZE 98
static unsigned char asus_mouse_mapping[] = {
	0,
	0,
	0,
	0,
	KEY_A,  // 4
	KEY_B,
	KEY_C,
	KEY_D,
	KEY_E,
	KEY_F,
	KEY_G,
	KEY_H,
	KEY_I,
	KEY_J,
	KEY_K,
	KEY_L,
	KEY_M,
	KEY_N,
	KEY_O,
	KEY_P,
	KEY_Q,
	KEY_R,
	KEY_S,
	KEY_T,
	KEY_U,
	KEY_V,
	KEY_W,
	KEY_X,
	KEY_Y,
	KEY_Z,
	KEY_1,
	KEY_2,
	KEY_3,
	KEY_4,
	KEY_5,
	KEY_6,
	KEY_7,
	KEY_8,
	KEY_9,
	KEY_0,
	KEY_ENTER,
	KEY_ESC,
	KEY_BACKSPACE,
	KEY_TAB,
	KEY_SPACE,
	KEY_MINUS,
	KEY_KPPLUS,  // 46
	0,
	0,
	0,
	0,
	0,
	0,
	KEY_GRAVE,  // 53
	KEY_EQUAL,
	0,
	KEY_SLASH,  // 56
	0,
	KEY_F1,  // 58
	KEY_F2,
	KEY_F3,
	KEY_F4,
	KEY_F5,
	KEY_F6,
	KEY_F7,
	KEY_F8,
	KEY_F9,
	KEY_F10,
	KEY_F11,
	KEY_F12,  // 69
	0,
	0,
	0,
	0,
	KEY_HOME,  // 74
	KEY_PAGEUP,
	KEY_DELETE,
	0,
	KEY_PAGEDOWN,  // 78
	KEY_RIGHT,
	KEY_LEFT,
	KEY_DOWN,
	KEY_UP,  // 82
	0,
	0,
	0,
	0,
	0,
	0,
	KEY_KP1,  // 89
	KEY_KP2,
	KEY_KP3,
	KEY_KP4,
	KEY_KP5,
	KEY_KP6,
	KEY_KP7,
	KEY_KP8,
	KEY_KP9,  // 97
	0,
};

static void asus_mouse_send_events(u32 bitmask[], struct asus_mouse_data *drv_data);

#endif
