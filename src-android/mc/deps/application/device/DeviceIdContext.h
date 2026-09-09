#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/device/CacheOpenFailed.h"
#include "mc/deps/application/device/FileWriteError.h"
#include "mc/deps/application/device/NoCacheFound.h"
#include "mc/deps/application/device/ValidationFail.h"

namespace Bedrock {

struct DeviceIdContext {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, bool> mIsFirstLaunchSinceMigration;
    ::ll::TypedStorage<8, 24, std::string> mLegacyDeviceId;
    ::ll::TypedStorage<8, 24, std::string> mBadDeviceId;
    ::ll::TypedStorage<8, 40, std::optional<std::variant<Bedrock::DeviceIdErrorType::FileWriteError, Bedrock::DeviceIdErrorType::NoCacheFound, Bedrock::DeviceIdErrorType::CacheOpenFailed, Bedrock::DeviceIdErrorType::ValidationFail>>> mError;
    // clang-format on
    // NOLINTEND
};

} // namespace Bedrock
