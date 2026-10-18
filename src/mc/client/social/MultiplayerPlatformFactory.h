#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/social/MultiplayerPlatformFactoryData.h"
#include "mc/client/social/MultiplayerServiceIdentifier.h"

// auto generated forward declare list
// clang-format off
namespace Social { class MultiplayerService; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class MultiplayerPlatformFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 16>                                                mTestOnly_mockMultiplayerActive;
    ::ll::TypedStorage<8, 144, ::Social::MultiplayerPlatformFactoryData const> mData;
    // NOLINTEND

public:
    // prevent constructor by default
    MultiplayerPlatformFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::vector<Social::MultiplayerServiceIdentifier> getBroadcastingMultiplayerServiceIds(bool, bool) const;

    MCNAPI std::vector<std::shared_ptr<Social::MultiplayerService>> getMultiplayerServiceListToRegister() const;
    // NOLINTEND
};
#else // @header-generator platform
class MultiplayerPlatformFactory {};
#endif // @header-generator platform

} // namespace Social
