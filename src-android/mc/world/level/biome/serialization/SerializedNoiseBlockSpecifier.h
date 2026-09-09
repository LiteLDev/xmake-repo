#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/FloatRange.h"

struct SerializedNoiseBlockSpecifier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>              mNoise;
    ::ll::TypedStorage<4, 4, float>                     mThreshold;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mRange;
    ::ll::TypedStorage<4, 4, uint>                      mBlockRuntimeId;
    // NOLINTEND
};
