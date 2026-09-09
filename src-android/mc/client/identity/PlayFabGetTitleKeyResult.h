#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/identity/PlayFabStatus.h"

namespace Social {

struct PlayFabGetTitleKeyResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Social::PlayFabStatus> mStatus;
    ::ll::TypedStorage<8, 24, std::string>            mTitleKey;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayFabGetTitleKeyResult& operator=(PlayFabGetTitleKeyResult const&);
};

} // namespace Social
