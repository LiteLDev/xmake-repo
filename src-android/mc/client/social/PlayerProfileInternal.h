#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/PlayerProfile.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Social { struct PlayerIdentifier; }
// clang-format on

namespace Social {

struct PlayerProfileInternal : public ::Social::PlayerProfile {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::PubSub::Publisher<void (Social::PlayerIdentifier), Bedrock::PubSub::ThreadModel::MultiThreaded, (Bedrock::PubSub::ReturnPolicyType)0>>> notifyChangeSubscribers;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerProfileInternal& operator=(PlayerProfileInternal const&);
    PlayerProfileInternal(PlayerProfileInternal const&);
};

} // namespace Social
