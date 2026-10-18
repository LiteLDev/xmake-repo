#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/application/device/CacheOpenFailed.h"
#include "mc/deps/application/device/FileWriteError.h"
#include "mc/deps/application/device/NoCacheFound.h"
#include "mc/deps/application/device/ValidationFail.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Bedrock {

struct DeviceIdContext {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<1, 1, bool> mIsFirstLaunchSinceMigration;
    ::ll::TypedStorage<8, 24, std::string> mLegacyDeviceId;
    ::ll::TypedStorage<8, 24, std::string> mBadDeviceId;
    ::ll::TypedStorage<8, 40, std::optional<std::variant<Bedrock::DeviceIdErrorType::FileWriteError, Bedrock::DeviceIdErrorType::NoCacheFound, Bedrock::DeviceIdErrorType::CacheOpenFailed, Bedrock::DeviceIdErrorType::ValidationFail>>> mError;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>  mUnk9d5b51;
    ::ll::UntypedStorage<8, 32> mUnkb9ad09;
    ::ll::UntypedStorage<8, 32> mUnk93ecfc;
    ::ll::UntypedStorage<8, 48> mUnkeef6d2;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    DeviceIdContext& operator=(DeviceIdContext const&);
    DeviceIdContext(DeviceIdContext const&);
    DeviceIdContext();
#endif // @header-generator platform
};

} // namespace Bedrock
