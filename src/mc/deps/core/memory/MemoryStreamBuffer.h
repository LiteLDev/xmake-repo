#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct MemoryStreamBuffer : public ::std::streambuf {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, char const*> mBase;
    ::ll::TypedStorage<8, 8, ulong const> mSize;
    // NOLINTEND

public:
    // prevent constructor by default
    MemoryStreamBuffer();
};
#else // @header-generator platform
struct MemoryStreamBuffer {};
#endif // @header-generator platform
