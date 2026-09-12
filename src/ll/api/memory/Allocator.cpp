#include "ll/api/memory/Allocator.h"
#include "mc/deps/core/memory/IMemoryAllocator.h"

#include <limits>
#include <new>

namespace ll::memory {

size_t getUsableSize(void* ptr) { return getDefaultAllocator().getUsableSize(ptr, false); }

[[noreturn]] void throwMemoryException(size_t size) {
    if (size == std::numeric_limits<size_t>::max()) {
        throw std::bad_array_new_length();
    } else {
        throw std::bad_alloc();
    }
}
} // namespace ll::memory
