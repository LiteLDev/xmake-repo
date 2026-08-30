#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/realms/PlayerInfo.h"
#include "mc/client/realms/PlayerListState.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/thread_model/MultiThreaded.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace OreUI { class IResourceAllowList; }
namespace Realms { class RealmsWorldContext; }
namespace Social { class IUserManager; }
// clang-format on

namespace Realms {

class RealmsPlayerList : public ::std::enable_shared_from_this<Realms::RealmsPlayerList> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<Realms::PlayerInfo>>             mPlayers;
    ::ll::TypedStorage<4, 4, ::Realms::PlayerListState>                    mState;
    ::ll::UntypedStorage<8, 24>                                            mUserManager;
    ::ll::UntypedStorage<8, 24>                                            mResourceAllowList;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::RealmsWorldContext>> mRealmsWorldContext;
    ::ll::UntypedStorage<8, 88>                                            mRealmsPlayerListChangedPublisher;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsPlayerList();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _fetchPlayerProfiles();

    MCNAPI std::vector<Realms::PlayerInfo>& getPlayers();

    MCNAPI ::Realms::PlayerListState getState();

    MCNAPI void populateMembers();

    MCNAPI ::Bedrock::PubSub::Subscription registerRealmsPlayerListUpdated(
        std::function<void(Realms::PlayerListState, const std::vector<Realms::PlayerInfo>&)>
    );

    MCNAPI void resetState();

    MCNAPI void tryAddXuids(std::vector<std::string> const&);
    // NOLINTEND
};

} // namespace Realms
