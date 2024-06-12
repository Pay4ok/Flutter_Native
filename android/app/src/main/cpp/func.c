#include <stdlib.h>
#include <stdint.h>
#include <android/log.h>


void sha256(double* data, int length, uint8_t* hash) {
    for (int i = 0; i < length; i++) {
        hash[i] = data[i];
        __android_log_print(ANDROID_LOG_INFO, "YourTag", "Value_%d: %f", i,data[i]);
    }
}