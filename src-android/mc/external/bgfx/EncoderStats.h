#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct EncoderStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, long> cpuTimeBegin;
    ::ll::TypedStorage<8, 8, long> cpuTimeEnd;
    // NOLINTEND
};

} // namespace bgfx
