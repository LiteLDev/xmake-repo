#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace persona::multiplayer { class AppearanceProcessingRequest; }
namespace persona::multiplayer::appearance { class IProcessingStatManager; }
// clang-format on

namespace persona::multiplayer::appearance {

class ProcessingRequestQueue {
public:
    // ProcessingRequestQueue inner types declare
    // clang-format off
    struct NewProcessingRequest;
    // clang-format on

    // ProcessingRequestQueue inner types define
    struct NewProcessingRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, std::shared_ptr<persona::multiplayer::AppearanceProcessingRequest>> mRequest;
        ::ll::TypedStorage<8, 8, ::Player*>                                                           mPlayer;
        // NOLINTEND
    };

    using RequestVector = std::vector<std::shared_ptr<persona::multiplayer::AppearanceProcessingRequest>>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<persona::multiplayer::AppearanceProcessingRequest>>> mPendingRequests;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<persona::multiplayer::AppearanceProcessingRequest>>> mProcessingRequests;
    ::ll::TypedStorage<8, 8, ulong> mNextRequestId;
    ::ll::UntypedStorage<8, 24> mStatManager;
    ::ll::TypedStorage<1, 140, std::shared_timed_mutex> mPendingMutex;
    ::ll::TypedStorage<1, 140, std::shared_timed_mutex> mProcessingMutex;
    // clang-format on
    // NOLINTEND
};

} // namespace persona::multiplayer::appearance
