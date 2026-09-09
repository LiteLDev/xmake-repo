#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/LoadingScreenId.h"

struct ServerAnticipateClientLoadingScreenComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<LoadingScreenId>> mLoadingScreenIds;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerAnticipateClientLoadingScreenComponent& operator=(ServerAnticipateClientLoadingScreenComponent const&);
};
