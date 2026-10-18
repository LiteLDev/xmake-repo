#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/legacy/ActorUniqueID.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/brstd/flat_map.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class PacketSender;
class Player;
class UserEntityIdentifierComponent;
class WeakEntityRef;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ActorUniqueID;
#endif // @header-generator platform
// clang-format on

class PlayerLocationSender {
public:
    // PlayerLocationSender inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct PlayerLocationData;
#else // @header-generator platform
#endif // @header-generator platform
    struct ActorUniqueIDCompare;
    struct ActorUniqueIDPairCompare;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct PlayerLocationData;
#endif // @header-generator platform
    // clang-format on

    // PlayerLocationSender inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct PlayerLocationData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 16, std::optional<Vec3>> mPosition;
        ::ll::TypedStorage<4, 4, ::DimensionType>      mDimension;
        ::ll::TypedStorage<1, 1, bool>                 mIsSpectator;
        // NOLINTEND
    };

#else // @header-generator platform
#endif // @header-generator platform
    struct ActorUniqueIDCompare {};

    struct ActorUniqueIDPairCompare {};

#if defined(LL_PLAT_A) // @header-generator platform
    using OptionalPosition = std::optional<Vec3>;
#else // @header-generator platform
    struct PlayerLocationData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>> mPosition;
        ::ll::TypedStorage<4, 4, ::DimensionType>          mDimension;
        ::ll::TypedStorage<1, 1, bool>                     mIsSpectator;
        // NOLINTEND
    };

    using OptionalPosition = ::std::optional<::Vec3>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48>     mCurrentPlayerLocationData;
    ::ll::UntypedStorage<8, 48>     mSentPlayerData;
    ::ll::UntypedStorage<8, 24>     mPacketSender;
    ::ll::TypedStorage<4, 4, float> mSimulationDistance;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        48,
        ::brstd::flat_map<
            ::ActorUniqueID,
            ::PlayerLocationSender::PlayerLocationData,
            ::PlayerLocationSender::ActorUniqueIDCompare,
            ::std::vector<::ActorUniqueID>,
            ::std::vector<::PlayerLocationSender::PlayerLocationData>>>
        mCurrentPlayerLocationData;
    ::ll::TypedStorage<
        8,
        48,
        ::brstd::flat_map<
            ::std::pair<::ActorUniqueID, ::ActorUniqueID>,
            ::std::optional<::Vec3>,
            ::PlayerLocationSender::ActorUniqueIDPairCompare,
            ::std::vector<::std::pair<::ActorUniqueID, ::ActorUniqueID>>,
            ::std::vector<::std::optional<::Vec3>>>>
                                                                          mSentPlayerData;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PacketSender>> mPacketSender;
    ::ll::TypedStorage<4, 4, float>                                       mSimulationDistance;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PlayerLocationSender();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PlayerLocationSender(::PacketSender&, int, float);

    MCNAPI void _forEachClientPlayerPair(
        std::vector<WeakEntityRef> const&,
        std::function<void(const UserEntityIdentifierComponent&, const Player&, const Player&)>
#else // @header-generator platform
    MCAPI void _forEachClientPlayerPair(
        ::std::vector<::WeakEntityRef> const&                                                           gameplayUsers,
        ::std::function<void(::UserEntityIdentifierComponent const&, ::Player const&, ::Player const&)> action
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _shouldSendPositionPacket(
        ::Vec3 const&,
        ::DimensionType const&,
        bool,
        std::optional<Vec3> const&,
        ::PlayerLocationSender::PlayerLocationData const&
#else // @header-generator platform
    MCAPI bool _shouldSendPositionPacket(
        ::Vec3 const&                                     viewingPlayerPosition,
        ::DimensionType const&                            viewingPlayerDimension,
        bool                                              viewingPlayerIsSpectator,
        ::std::optional<::Vec3> const&                    observedPlayerPosPrev,
        ::PlayerLocationSender::PlayerLocationData const& observedPlayerPositionNew
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _updatePlayerData(::Player const&);

    MCNAPI void checkPlayerPairsAndMaybeSendPackets(std::vector<WeakEntityRef> const&);

    MCNAPI void sendPacketsHidingAllPlayers(std::vector<WeakEntityRef> const&);

    MCNAPI void updatePlayersData(std::vector<WeakEntityRef> const&);
#else // @header-generator platform
    MCAPI void _updatePlayerData(::Player const& player);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::PlayerLocationSender::PlayerLocationData const& NULL_PLAYER_LOCATION_DATA();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PacketSender&, int, float);
#else // @header-generator platform
    MCAPI static ::PlayerLocationSender::PlayerLocationData const& NULL_PLAYER_LOCATION_DATA();
#endif // @header-generator platform
    // NOLINTEND
};
