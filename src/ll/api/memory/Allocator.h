#pragma once

#include <cstddef>

#include "ll/api/base/Macro.h"

namespace Bedrock::Memory {
class IMemoryAllocator;
}

namespace ll::memory {

LLNDAPI ::Bedrock::Memory::IMemoryAllocator& getDefaultAllocator();

[[noreturn]] LLAPI void throwMemoryException(size_t);

LLNDAPI size_t getUsableSize(void* ptr);

} // namespace ll::memory
