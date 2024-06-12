#include <stdlib.h>
#include <stdint.h>

void sha256(double* data, int length, uint32_t* hash) {
    // Initialize the hash array with some arbitrary values
    for (int i = 0; i < length-1; i++) {
        hash[i] ^= hash[i+1];  // Example initialization
    }

    // Perform a simple XOR operation on the data to populate the hash array
    for (int i = 0; i < length; i++) {
        uint32_t *data_as_int = (uint32_t*)&data[i];
        for (int j = 0; j < 8; j++) {
            hash[j] ^= data_as_int[j % 2];  // XOR with 32-bit chunks of the double data
        }
    }
}