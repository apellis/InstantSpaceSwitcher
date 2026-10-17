#ifndef WINDOW_FOCUS_H
#define WINDOW_FOCUS_H

#include <stdbool.h>
#include <stdint.h>

/**
 * @brief Brings a window to the front and focuses its app, via Accessibility.
 *
 * Activating a space directly makes that space's own frontmost app active, so a window
 * carried onto it would otherwise end up behind the space's windows and unfocused.
 * Runs shortly after the call, once the space switch has applied.
 */
void iss_focus_window_soon(uint32_t windowID);

#endif /* WINDOW_FOCUS_H */
