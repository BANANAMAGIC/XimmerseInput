#ifndef __XIM_CONTROLLER_STATE_H__
#define __XIM_CONTROLLER_STATE_H__

// Reference : https://msdn.microsoft.com/en-us/library/windows/apps/microsoft.directx_sdk.reference.xinput_gamepad
enum ControllerAxis {
	CONTROLLER_AXIS_LEFT_TRIGGER,
	CONTROLLER_AXIS_RIGHT_TRIGGER,
	CONTROLLER_AXIS_LEFT_THUMB_X,
	CONTROLLER_AXIS_LEFT_THUMB_Y,
	CONTROLLER_AXIS_RIGHT_THUMB_X,
	CONTROLLER_AXIS_RIGHT_THUMB_Y,
	CONTROLLER_AXIS_MAX,
};

// Reference : https://msdn.microsoft.com/en-us/library/windows/apps/microsoft.directx_sdk.reference.xinput_gamepad
enum ControllerButton {
	CONTROLLER_BUTTON_DPAD_UP        = 0x0001,
	CONTROLLER_BUTTON_DPAD_DOWN      = 0x0002,
	CONTROLLER_BUTTON_DPAD_LEFT      = 0x0004,
	CONTROLLER_BUTTON_DPAD_RIGHT     = 0x0008,
	CONTROLLER_BUTTON_START          = 0x0010,
	CONTROLLER_BUTTON_BACK           = 0x0020,
	CONTROLLER_BUTTON_LEFT_THUMB     = 0x0040,
	CONTROLLER_BUTTON_RIGHT_THUMB    = 0x0080,
	CONTROLLER_BUTTON_LEFT_SHOULDER  = 0x0100,
	CONTROLLER_BUTTON_RIGHT_SHOULDER = 0x0200,
	CONTROLLER_BUTTON_A              = 0x1000,
	CONTROLLER_BUTTON_B              = 0x2000,
	CONTROLLER_BUTTON_X              = 0x4000,
	CONTROLLER_BUTTON_Y              = 0x8000,
	// Emulation
	CONTROLLER_BUTTON_LEFT_TRIGGER      = 0x0400,
	CONTROLLER_BUTTON_RIGHT_TRIGGER     = 0x0800,
	CONTROLLER_BUTTON_LEFT_THUMB_UP     = 0x10000,
	CONTROLLER_BUTTON_LEFT_THUMB_DOWN   = 0x20000,
	CONTROLLER_BUTTON_LEFT_THUMB_LEFT   = 0x40000,
	CONTROLLER_BUTTON_LEFT_THUMB_RIGHT  = 0x80000,
	CONTROLLER_BUTTON_RIGHT_THUMB_UP    = 0x100000,
	CONTROLLER_BUTTON_RIGHT_THUMB_DOWN  = 0x200000,
	CONTROLLER_BUTTON_RIGHT_THUMB_LEFT  = 0x400000,
	CONTROLLER_BUTTON_RIGHT_THUMB_RIGHT = 0x800000,
	//
	CONTROLLER_BUTTON_NONE           = 0x0,
	CONTROLLER_BUTTON_ANY            = ~CONTROLLER_BUTTON_NONE,
};

typedef struct tagControllerState{
	// Common
	int handle;
	int timestamp;
	int state_mask;
	// Gamepad
	float axes[6];
	unsigned int buttons;
	// Motion
	float position[3];
	float rotation[4];
	float accelerometer[3];
	float gyroscope[3];
}ControllerState;

#endif