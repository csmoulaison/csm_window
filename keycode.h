#ifndef csm_keycode_h_INCLUDED
#define csm_keycode_h_INCLUDED

// NOW: Generate before compilation based on list of desired keys. The
// generator will have a list of all keys for any project and create the map and
// Keycode enum by referencing that.
typedef enum {
	KEYCODE_NONE,
	KEYCODE_ESCAPE,
	KEYCODE_SPACE,
	KEYCODE_ENTER,
	KEYCODE_TAB,
	KEYCODE_W,
	KEYCODE_A,
	KEYCODE_S,
	KEYCODE_D,
	KEYCODE_Q,
	KEYCODE_E,
	KEYCODE_UP,
	KEYCODE_LEFT,
	KEYCODE_DOWN,
	KEYCODE_RIGHT,
} Keycode;

#endif // csm_keycode_h_INCLUDED
