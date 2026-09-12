#pragma once

#include <cstddef>

// Only the fixture host defines these. They are not part of the LL SDK.
extern "C" {
__attribute__((visibility("default"))) bool p7_test_load_mod(char const* name, char* error, size_t capacity);
__attribute__((visibility("default"))) bool p7_test_enable_mod(char const* name, char* error, size_t capacity);
__attribute__((visibility("default"))) bool p7_test_disable_mod(char const* name, char* error, size_t capacity);
}
