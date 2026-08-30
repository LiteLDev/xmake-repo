#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
