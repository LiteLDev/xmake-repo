#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/identity/PlayFabStatus.h"

namespace Social {

struct PlayFabGetPlayFabIDsResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Social::PlayFabStatus>                       mStatus;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>> mPlayFabIds;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayFabGetPlayFabIDsResult& operator=(PlayFabGetPlayFabIDsResult const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PlayFabGetPlayFabIDsResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social
