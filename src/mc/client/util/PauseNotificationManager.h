#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/PlayerListInfo.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IToastManager;
class Option;
class PlayerListEntry;
class PlayerListManager;
namespace mce { class UUID; }
// clang-format on

class PauseNotificationManager {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::shared_ptr<IToastManager>> mToastManager;
    ::ll::TypedStorage<8, 8, ::Option*> mPauseFeatureOption;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mNotificationTimeStart;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnPlayerListEntryAddedSub;
    ::ll::TypedStorage<8, 24, std::vector<PlayerListInfo>> mPendingPlayersToAnnounce;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _announcePlayersJoining();

    MCNAPI void
    _onPlayerListEntryAdded(::PlayerListEntry const&, std::unordered_map<mce::UUID, PlayerListEntry> const&);

    MCNAPI void initializePauseOption(::Option*);

    MCNAPI void initializePlayerListConnections(::gsl::not_null<Bedrock::NonOwnerPointer<PlayerListManager>>);

    MCNAPI void setToastManager(std::shared_ptr<IToastManager>);

    MCNAPI void tick();
    // NOLINTEND
};
#else // @header-generator platform
class PauseNotificationManager {};
#endif // @header-generator platform
