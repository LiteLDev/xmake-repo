#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class PacketSender;
class Player;
class UserEntityIdentifierComponent;
class WeakEntityRef;
// clang-format on

class PlayerLocationSender {
public:
    // PlayerLocationSender inner types declare
    // clang-format off
    struct PlayerLocationData;
    struct ActorUniqueIDCompare;
    struct ActorUniqueIDPairCompare;
    // clang-format on

    // PlayerLocationSender inner types define
    struct PlayerLocationData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 16, std::optional<Vec3>> mPosition;
        ::ll::TypedStorage<4, 4, ::DimensionType>      mDimension;
        ::ll::TypedStorage<1, 1, bool>                 mIsSpectator;
        // NOLINTEND
    };

    struct ActorUniqueIDCompare {};

    struct ActorUniqueIDPairCompare {};

    using OptionalPosition = std::optional<Vec3>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>     mCurrentPlayerLocationData;
    ::ll::UntypedStorage<8, 48>     mSentPlayerData;
    ::ll::UntypedStorage<8, 24>     mPacketSender;
    ::ll::TypedStorage<4, 4, float> mSimulationDistance;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerLocationSender();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerLocationSender(::PacketSender&, int, float);

    MCNAPI void _forEachClientPlayerPair(
        std::vector<WeakEntityRef> const&,
        std::function<void(const UserEntityIdentifierComponent&, const Player&, const Player&)>
    );

    MCNAPI bool _shouldSendPositionPacket(
        ::Vec3 const&,
        ::DimensionType const&,
        bool,
        std::optional<Vec3> const&,
        ::PlayerLocationSender::PlayerLocationData const&
    ) const;

    MCNAPI void _updatePlayerData(::Player const&);

    MCNAPI void checkPlayerPairsAndMaybeSendPackets(std::vector<WeakEntityRef> const&);

    MCNAPI void sendPacketsHidingAllPlayers(std::vector<WeakEntityRef> const&);

    MCNAPI void updatePlayersData(std::vector<WeakEntityRef> const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::PlayerLocationSender::PlayerLocationData const& NULL_PLAYER_LOCATION_DATA();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PacketSender&, int, float);
    // NOLINTEND
};
