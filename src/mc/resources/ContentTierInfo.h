#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/HardwareMemoryTier.h"
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, ::HardwareMemoryTier> mMemoryTier;
    ::ll::TypedStorage<1, 1, bool>                 mIsRayTracingCapable;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnk74513b;
    ::ll::UntypedStorage<1, 1> mUnk25ee98;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ContentTierInfo& operator=(ContentTierInfo const&);
    ContentTierInfo(ContentTierInfo const&);
    ContentTierInfo();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ContentTierIncompatibleReason validatePackInstance(::PackInstance const&) const;

    MCNAPI ::ContentTierIncompatibleReason validateSubpack(::SubpackInfo const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::ContentTierIncompatibleReason validatePackInstance(::PackInstance const& packInstance) const;

    MCNAPI ::ContentTierIncompatibleReason validateSubpack(::SubpackInfo const& subpackInfo) const;
#endif
#endif // @header-generator platform
    // NOLINTEND
};
