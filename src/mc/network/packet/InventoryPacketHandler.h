#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPalette;
class InventoryTransactionPacket;
class MobEquipmentPacket;
class ServerPlayer;
struct ActorRotationComponent;
struct MoveInputComponent;
// clang-format on

class InventoryPacketHandler {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, std::variant<std::shared_ptr<MobEquipmentPacket>, std::shared_ptr<InventoryTransactionPacket>>> mPacket;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        24,
        ::std::variant<::std::shared_ptr<::MobEquipmentPacket>, ::std::shared_ptr<::InventoryTransactionPacket>>>
        mPacket;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    InventoryPacketHandler();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit InventoryPacketHandler(::gsl::not_null<std::shared_ptr<MobEquipmentPacket>>);
#else // @header-generator platform
    MCAPI explicit InventoryPacketHandler(::gsl::not_null<::std::shared_ptr<::InventoryTransactionPacket>> packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit InventoryPacketHandler(::gsl::not_null<std::shared_ptr<InventoryTransactionPacket>>);
#else // @header-generator platform
    MCAPI explicit InventoryPacketHandler(::gsl::not_null<::std::shared_ptr<::MobEquipmentPacket>> packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    handle(::ServerPlayer&, ::BlockPalette&, ::MoveInputComponent const&, ::ActorRotationComponent&, bool) const;
#else // @header-generator platform
    MCAPI void _handleMobEquipmentPacket(::MobEquipmentPacket const& packet, ::ServerPlayer& player) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~InventoryPacketHandler();
#else // @header-generator platform
    MCAPI void handle(
        ::ServerPlayer&             player,
        ::BlockPalette&             blockPalette,
        ::MoveInputComponent const& moveInput,
        ::ActorRotationComponent&   actorRotation,
        bool                        isAimAssist
    ) const;

    MCAPI ~InventoryPacketHandler();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::gsl::not_null<std::shared_ptr<MobEquipmentPacket>>);
#else // @header-generator platform
    MCAPI void* $ctor(::gsl::not_null<::std::shared_ptr<::InventoryTransactionPacket>> packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::gsl::not_null<std::shared_ptr<InventoryTransactionPacket>>);
#else // @header-generator platform
    MCAPI void* $ctor(::gsl::not_null<::std::shared_ptr<::MobEquipmentPacket>> packet);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
