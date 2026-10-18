#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
namespace Social { class MultiplayerService; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
struct MultiplayerPlatformFactoryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                               mIsEdu;
    ::ll::TypedStorage<8, 24, std::vector<Social::MultiplayerServiceIdentifier>> mEduBroadcastServices;
    ::ll::TypedStorage<8, 24, std::vector<Social::MultiplayerServiceIdentifier>> mXBLBroadcastServices;
    ::ll::TypedStorage<8, 24, std::vector<Social::MultiplayerServiceIdentifier>> mPlatformBroadcastServices;
    ::ll::UntypedStorage<8, 64>                                                  mCreateServices;
    // NOLINTEND

public:
    // prevent constructor by default
    MultiplayerPlatformFactoryData& operator=(MultiplayerPlatformFactoryData const&);
    MultiplayerPlatformFactoryData(MultiplayerPlatformFactoryData const&);
    MultiplayerPlatformFactoryData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MultiplayerPlatformFactoryData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Social::MultiplayerPlatformFactoryData createCommonXbl();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct MultiplayerPlatformFactoryData {};
#endif // @header-generator platform

} // namespace Social
