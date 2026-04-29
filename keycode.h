#ifndef csm_keycode_h_INCLUDED
#define csm_keycode_h_INCLUDED

// NOW: Generate before compilation based on list of desired keys. The
// generator will have a list of all keys for any project and create the map and
// Keycode enum by referencing that.
typedef enum {
	CSM_KC_NONE,
	CSM_KC_ESCAPE,
	CSM_KC_SPACE,
	CSM_KC_ENTER,
	CSM_KC_TAB,
	CSM_KC_W,
	CSM_KC_A,
	CSM_KC_S,
	CSM_KC_D
} Keycode;

#endif // csm_keycode_h_INCLUDED
