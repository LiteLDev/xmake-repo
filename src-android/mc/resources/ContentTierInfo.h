#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/HardwareMemoryTier.h"

// auto generated forward declare list
// clang-format off
class ContentTierIncompatibleReason;
class PackInstance;
struct SubpackInfo;
// clang-format on

class ContentTierInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::HardwareMemoryTier> mMemoryTier;
    ::ll::TypedStorage<1, 1, bool>                 mIsRayTracingCapable;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ContentTierIncompatibleReason validatePackInstance(::PackInstance const&) const;

    MCNAPI ::ContentTierIncompatibleReason validateSubpack(::SubpackInfo const&) const;
    // NOLINTEND
};
