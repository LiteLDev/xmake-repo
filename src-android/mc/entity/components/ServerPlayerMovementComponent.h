#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/entity/components/MovementPackets.h"

// auto generated forward declare list
// clang-format off
class InteractPacket;
class InventoryPacketHandler;
class PlayerAuthInputPacket;
struct IPlayerTickPolicy;
struct PlayerAuthInputPacketPayload;
// clang-format on

struct ServerPlayerMovementComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::bitset<4>>                     mServerHasMovementAuthority;
    ::ll::TypedStorage<1, 1, bool>                               mServerHasInventoryAuthority;
    ::ll::TypedStorage<4, 8, std::optional<float>>               mAcceptClientPosIfWithinDistanceSq;
    ::ll::TypedStorage<8, 8, ulong>                              mPlayerTickCredits;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IPlayerTickPolicy>> mPolicy;
    ::ll::TypedStorage<8, 48, std::deque<MovementPackets>>       mQueuedUpdates;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerPlayerMovementComponent& operator=(ServerPlayerMovementComponent const&);
    ServerPlayerMovementComponent(ServerPlayerMovementComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ServerPlayerMovementComponent();

    MCNAPI ServerPlayerMovementComponent(::ServerPlayerMovementComponent&&);

    MCNAPI bool addInteractPacket(::InteractPacket const&);

    MCNAPI bool addInventoryTransactionPacket(::InventoryPacketHandler);

    MCNAPI bool addPlayerAuthInputPacket(::PlayerAuthInputPacket&&);

    MCNAPI bool addPlayerAuthInputPacket(::PlayerAuthInputPacketPayload&&, ::SubClientId);

    MCNAPI void clear();

    MCNAPI bool doesServerHaveMovementAuthority() const;

    MCNAPI bool empty() const;

    MCNAPI void erase(
        std::__deque_iterator<
            MovementPackets,
            const MovementPackets*,
            const MovementPackets&,
            const MovementPackets* const*,
            long,
            16>,
        std::__deque_iterator<
            MovementPackets,
            const MovementPackets*,
            const MovementPackets&,
            const MovementPackets* const*,
            long,
            16>
    );

    MCNAPI ::MovementPackets& front();

    MCNAPI ::optional_ref<MovementPackets> getOrCreate(std::function<bool(MovementPackets&)> const&);

    MCNAPI std::unique_ptr<IPlayerTickPolicy> const& getPolicy() const;

    MCNAPI std::deque<MovementPackets> const& getQueue() const;

    MCNAPI ulong getReadyToSimulateCount() const;

    MCNAPI bool isFull() const;

    MCNAPI ::ServerPlayerMovementComponent& operator=(::ServerPlayerMovementComponent&&);

    MCNAPI void popFront();

    MCNAPI ulong size() const;

    MCNAPI ~ServerPlayerMovementComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ServerPlayerMovementComponent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
