#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
namespace Social { class MultiplayerService; }
// clang-format on

namespace Social {

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

} // namespace Social
