#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DimensionTransferTelemetryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>          mFromId;
    ::ll::TypedStorage<4, 4, int>          mToId;
    ::ll::TypedStorage<8, 24, std::string> mPackId;
    ::ll::TypedStorage<8, 8, long>         mLoadTimeMs;
    // NOLINTEND
};
