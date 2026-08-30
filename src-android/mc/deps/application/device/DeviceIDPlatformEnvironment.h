#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { struct DeviceIdEnvironment; }
// clang-format on

namespace Bedrock {

struct DeviceIDPlatformEnvironment {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Bedrock::DeviceIdEnvironment const&> mBase;
    ::ll::TypedStorage<1, 1, bool>                                  mIsAnonymous;
    // NOLINTEND

public:
    // prevent constructor by default
    DeviceIDPlatformEnvironment& operator=(DeviceIDPlatformEnvironment const&);
    DeviceIDPlatformEnvironment(DeviceIDPlatformEnvironment const&);
    DeviceIDPlatformEnvironment();
};

} // namespace Bedrock
