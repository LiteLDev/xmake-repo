#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/player/LayeredAbilities.h"

// auto generated forward declare list
// clang-format off
class GameplayUserManager;
class PacketSender;
class Player;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

class PlayerAbilitiesManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<ActorUniqueID, LayeredAbilities>> mAbilitiesData;
    ::ll::UntypedStorage<8, 24>                                                    mGameplayUserManager;
    ::ll::UntypedStorage<8, 24>                                                    mPacketSender;
    ::ll::UntypedStorage<8, 40>                                                    mPlayerAbilitiesChanged;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerAbilitiesManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PlayerAbilitiesManager(::gsl::not_null<Bedrock::NonOwnerPointer<GameplayUserManager>>);

    MCNAPI ::LayeredAbilities* getPlayerAbilities(::ActorUniqueID const&);

    MCNAPI ::Bedrock::PubSub::Publisher<
        void(const ActorUniqueID&),
        Bedrock::PubSub::ThreadModel::SingleThreaded,
        (Bedrock::PubSub::ReturnPolicyType)0>&
    getPlayerAbilitiesChangedPublisher();

    MCNAPI void sendAllPlayerAbilities(::Player const&);

    MCNAPI void setPacketSender(::PacketSender&);

    MCNAPI void setPlayerAbilities(::ActorUniqueID const&, ::LayeredAbilities const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<GameplayUserManager>>);
    // NOLINTEND
};
