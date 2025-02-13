#ifdef PERMISSIVE_HOLD_PER_KEY
// true: Immediately select the hold action when another key is tapped.
// false: Do not select the hold action when another key is tapped.
bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case SFT_D:
            return true;
        case SFT_K:
            return true;
        default:
            return false;
    }
}
#endif
