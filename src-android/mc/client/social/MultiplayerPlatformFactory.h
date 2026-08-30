#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/MultiplayerPlatformFactoryData.h"
#include "mc/client/social/MultiplayerServiceIdentifier.h"

// auto generated forward declare list
// clang-format off
namespace Social { class MultiplayerService; }
// clang-format on

namespace Social {

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

} // namespace Social
