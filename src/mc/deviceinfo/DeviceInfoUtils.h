#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deviceinfo/DeviceMemoryTier.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
// clang-format on

class DeviceInfoUtils {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::DeviceMemoryTier determineMemoryTier(::BaseGameVersion const&);

    MCNAPI static ::DeviceMemoryTier determineMemoryTier(::BaseGameVersion const&, std::optional<DeviceMemoryTier>);
#else // @header-generator platform
    MCNAPI static ::DeviceMemoryTier determineMemoryTier(::BaseGameVersion const& version);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::DeviceMemoryTier& mDefaultMemoryTier();
    // NOLINTEND
};
