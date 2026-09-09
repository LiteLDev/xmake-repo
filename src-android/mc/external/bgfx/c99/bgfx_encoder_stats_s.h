#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct bgfx_encoder_stats_s {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, long> cpuTimeBegin;
    ::ll::TypedStorage<8, 8, long> cpuTimeEnd;
    // NOLINTEND
};
