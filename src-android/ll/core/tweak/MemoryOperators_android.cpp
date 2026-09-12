#define LL_MEMORY_OPERATORS
#include "ll/api/memory/MemoryOperators.h"

#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <malloc.h>

namespace ll::memory {
namespace {
// This MC-interface implementation is the only LL translation unit built
// without RTTI: the fixed game does not supply IMemoryAllocator's typeinfo.
// Ordinary LL and Mod C++ types keep RTTI and exception support enabled.
class AndroidMemoryAllocator final : public Bedrock::Memory::IMemoryAllocator {
public:
    void* allocate(uint64 size) override { return std::malloc(size ? size : 1); }
    void release(void* pointer) override { std::free(pointer); }

    void* alignedAllocate(uint64 size, uint64 alignment) override {
        if (!alignment || (alignment & (alignment - 1))) return nullptr;
        alignment = std::max<uint64>(alignment, sizeof(void*));
        void* pointer{};
        return ::posix_memalign(&pointer, alignment, size ? size : 1) ? nullptr : pointer;
    }

    void alignedRelease(void* pointer) override { std::free(pointer); }
    uint64 getUsableSize(void* pointer, bool) override { return pointer ? ::malloc_usable_size(pointer) : 0; }
    void* _realloc(gsl::not_null<void*> pointer, uint64 size) override { return std::realloc(pointer, size); }

    void* _alignedRealloc(gsl::not_null<void*> pointer, uint64 size, uint64 alignment) override {
        if (!size) { alignedRelease(pointer); return nullptr; }
        auto result = alignedAllocate(size, alignment);
        if (result) {
            std::memcpy(result, pointer, std::min(size, getUsableSize(pointer, true)));
            alignedRelease(pointer);
        }
        return result;
    }
};
}

Bedrock::Memory::IMemoryAllocator& getDefaultAllocator() {
    static AndroidMemoryAllocator allocator;
    return allocator;
}
} // namespace ll::memory
