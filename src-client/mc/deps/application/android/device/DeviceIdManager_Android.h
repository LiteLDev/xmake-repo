#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/device/DeviceIdManager_Common.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { struct DeviceIDPlatformEnvironment; }
namespace Bedrock { struct DeviceIdEnvironment; }
// clang-format on

namespace Bedrock {

class DeviceIdManager_Android : public ::Bedrock::DeviceIdManager_Common {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DeviceIdManager_Android();

    virtual void _initializePlatform(::Bedrock::DeviceIDPlatformEnvironment const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _cacheDeviceIdInSharedPreferences(std::string const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_initializePlatform(::Bedrock::DeviceIDPlatformEnvironment const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
