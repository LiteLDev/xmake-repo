#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/entity/components/MovementPackets.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class InteractPacket;
#else // @header-generator platform
#endif // @header-generator platform
class InventoryPacketHandler;
class PlayerAuthInputPacket;
struct IPlayerTickPolicy;
struct PlayerAuthInputPacketPayload;
// clang-format on

struct ServerPlayerMovementComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::bitset<4>>                     mServerHasMovementAuthority;
    ::ll::TypedStorage<1, 1, bool>                               mServerHasInventoryAuthority;
    ::ll::TypedStorage<4, 8, std::optional<float>>               mAcceptClientPosIfWithinDistanceSq;
    ::ll::TypedStorage<8, 8, ulong>                              mPlayerTickCredits;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IPlayerTickPolicy>> mPolicy;
    ::ll::TypedStorage<8, 48, std::deque<MovementPackets>>       mQueuedUpdates;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::std::bitset<4>>                       mServerHasMovementAuthority;
    ::ll::TypedStorage<1, 1, bool>                                   mServerHasInventoryAuthority;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                 mAcceptClientPosIfWithinDistanceSq;
    ::ll::TypedStorage<8, 8, uint64>                                 mPlayerTickCredits;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IPlayerTickPolicy>> mPolicy;
    ::ll::TypedStorage<8, 40, ::std::deque<::MovementPackets>>       mQueuedUpdates;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ServerPlayerMovementComponent& operator=(ServerPlayerMovementComponent const&);
    ServerPlayerMovementComponent(ServerPlayerMovementComponent const&);

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ServerPlayerMovementComponent();
#else // @header-generator platform
    MCAPI ServerPlayerMovementComponent();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ServerPlayerMovementComponent(::ServerPlayerMovementComponent&&);
#else // @header-generator platform
    MCAPI ServerPlayerMovementComponent(::ServerPlayerMovementComponent&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool addInteractPacket(::InteractPacket const&);
#else // @header-generator platform
    MCAPI explicit ServerPlayerMovementComponent(::std::unique_ptr<::IPlayerTickPolicy> policy);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool addInventoryTransactionPacket(::InventoryPacketHandler);
#else // @header-generator platform
    MCAPI bool addInventoryTransactionPacket(::InventoryPacketHandler packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool addPlayerAuthInputPacket(::PlayerAuthInputPacket&&);
#else // @header-generator platform
    MCAPI bool addPlayerAuthInputPacket(::PlayerAuthInputPacket&& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool addPlayerAuthInputPacket(::PlayerAuthInputPacketPayload&&, ::SubClientId);
#else // @header-generator platform
    MCAPI bool addPlayerAuthInputPacket(::PlayerAuthInputPacketPayload&& payload, ::SubClientId senderSubId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ::optional_ref<::MovementPackets> getOrCreate(::std::function<bool(::MovementPackets&)> const& fn);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ServerPlayerMovementComponent&&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI void* $ctor(::ServerPlayerMovementComponent&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::std::unique_ptr<::IPlayerTickPolicy> policy);
#endif // @header-generator platform
    // NOLINTEND
};
