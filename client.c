#include <stdint.h>
#include <microkit.h>

#define NOTIFY_CHANNEL 1

void init(void) {
    // Immediately request the server to print "hello"
    microkit_notify(NOTIFY_CHANNEL);
}

void notified(microkit_channel channel) {
    // No notifications expected on the client.
}
