#include <stdint.h>
#include <microkit.h>
#include "printf.h"  // Use microkit_dbg_puts for debug printing

#define NOTIFY_CHANNEL 1

void init(void) {
    // Server initialization (if needed)
}

void notified(microkit_channel channel) {
    if (channel == NOTIFY_CHANNEL) {
        microkit_dbg_puts("hello");
    }
}

// Dummy protected procedure (required if pp="true" in the system description)
microkit_msginfo protected(microkit_channel channel, microkit_msginfo msginfo) {
    return microkit_msginfo_new(0, 0);
}
