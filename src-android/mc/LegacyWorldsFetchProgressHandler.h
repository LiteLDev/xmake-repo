#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ProgressHandler.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/actor/player/LoadingState.h"

class LegacyWorldsFetchProgressHandler : public ::ProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFetchSubscription;
    ::ll::TypedStorage<4, 4, ::LoadingState>                   mLoadingState;
    ::ll::TypedStorage<1, 1, bool>                             mExitRequested;
    // NOLINTEND
};
