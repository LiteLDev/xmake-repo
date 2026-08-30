#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/realms/World.h"
#include "mc/client/social/RealmWorldPublisherData.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/thread_model/MultiThreaded.h"
#include "mc/network/NetworkIdentifier.h"

// auto generated forward declare list
// clang-format off
namespace Social { class GameConnectionInfo; }
// clang-format on

namespace Social {

class MultiplayerRealmSession {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 40, std::mutex>                                         mRealmMutex;
    ::ll::TypedStorage<8, 608, ::Realms::World>                                   mJoiningRealm;
    ::ll::UntypedStorage<8, 88>                                                   mCurrentRealmChangedPublisher;
    ::ll::TypedStorage<8, 48, std::function<const Social::GameConnectionInfo*()>> mGetConnectedGameInfo;
    ::ll::TypedStorage<8, 48, std::function<std::optional<NetworkIdentifier>()>>  mGetServerNetworkId;
    // NOLINTEND
};

} // namespace Social
