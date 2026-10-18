#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
#else // @header-generator platform
// auto generated inclusion list
#include "mc/deps/application/device/DeviceIdManager_Common.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { struct DeviceIDPlatformEnvironment; }
// clang-format on

#endif // @header-generator platform
namespace Bedrock {

#if defined(LL_PLAT_C) // @header-generator platform
class DeviceIdManager_Win32 {};
#else // @header-generator platform
class DeviceIdManager_Win32 : public ::Bedrock::DeviceIdManager_Common {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void _initializePlatform(::Bedrock::DeviceIDPlatformEnvironment const& environment) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_initializePlatform(::Bedrock::DeviceIDPlatformEnvironment const& environment);
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace Bedrock
#endif // @header-generator platform
