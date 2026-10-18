#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/legacy/ActorUniqueID.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/player/LayeredAbilities.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class GameplayUserManager;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class LayeredAbilities;
#endif // @header-generator platform
class PacketSender;
class Player;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

class PlayerAbilitiesManager {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<ActorUniqueID, LayeredAbilities>> mAbilitiesData;
    ::ll::UntypedStorage<8, 24>                                                    mGameplayUserManager;
    ::ll::UntypedStorage<8, 24>                                                    mPacketSender;
    ::ll::UntypedStorage<8, 40>                                                    mPlayerAbilitiesChanged;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ActorUniqueID, ::LayeredAbilities>>  mAbilitiesData;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> const> mGameplayUserManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PacketSender>>                 mPacketSender;
    ::ll::TypedStorage<
        8,
        48,
        ::Bedrock::PubSub::Publisher<void(::ActorUniqueID const&), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>
        mPlayerAbilitiesChanged;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerAbilitiesManager();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit PlayerAbilitiesManager(::gsl::not_null<Bedrock::NonOwnerPointer<GameplayUserManager>>);
#else // @header-generator platform
    MCAPI explicit PlayerAbilitiesManager(::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> gameplayUserManager);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::LayeredAbilities* getPlayerAbilities(::ActorUniqueID const&);
#else // @header-generator platform
    MCAPI ::LayeredAbilities* getPlayerAbilities(::ActorUniqueID const& playerId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Publisher<
        void(const ActorUniqueID&),
        Bedrock::PubSub::ThreadModel::SingleThreaded,
        (Bedrock::PubSub::ReturnPolicyType)0>&
    getPlayerAbilitiesChangedPublisher();

    MCNAPI void sendAllPlayerAbilities(::Player const&);

    MCNAPI void setPacketSender(::PacketSender&);

    MCNAPI void setPlayerAbilities(::ActorUniqueID const&, ::LayeredAbilities const&);
#else // @header-generator platform
    MCAPI void sendAllPlayerAbilities(::Player const& playerReference);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<GameplayUserManager>>);
#else // @header-generator platform
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> gameplayUserManager);
#endif // @header-generator platform
    // NOLINTEND
};
