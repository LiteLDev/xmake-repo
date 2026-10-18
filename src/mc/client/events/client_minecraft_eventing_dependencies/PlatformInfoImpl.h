#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/events/IEventClientPlatformInfo.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace ClientMinecraftEventingDependencies {

#if defined(LL_PLAT_A) // @header-generator platform
class PlatformInfoImpl : public ::IEventClientPlatformInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mPlatform;
    // NOLINTEND
};
#else // @header-generator platform
class PlatformInfoImpl {};
#endif // @header-generator platform

} // namespace ClientMinecraftEventingDependencies
