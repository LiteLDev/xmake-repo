#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Bedrock { struct DeviceIdEnvironment; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Bedrock {

struct DeviceIDPlatformEnvironment {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Bedrock::DeviceIdEnvironment const&> mBase;
    ::ll::TypedStorage<1, 1, bool>                                  mIsAnonymous;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk87d0ee;
    ::ll::UntypedStorage<1, 1> mUnk1c8bba;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    DeviceIDPlatformEnvironment& operator=(DeviceIDPlatformEnvironment const&);
    DeviceIDPlatformEnvironment(DeviceIDPlatformEnvironment const&);
    DeviceIDPlatformEnvironment();
};

} // namespace Bedrock
