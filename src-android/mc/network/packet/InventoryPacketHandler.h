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
    // clang-format off
    ::ll::TypedStorage<8, 24, std::variant<std::shared_ptr<MobEquipmentPacket>, std::shared_ptr<InventoryTransactionPacket>>> mPacket;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    InventoryPacketHandler();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit InventoryPacketHandler(::gsl::not_null<std::shared_ptr<MobEquipmentPacket>>);

    MCNAPI explicit InventoryPacketHandler(::gsl::not_null<std::shared_ptr<InventoryTransactionPacket>>);

    MCNAPI void
    handle(::ServerPlayer&, ::BlockPalette&, ::MoveInputComponent const&, ::ActorRotationComponent&, bool) const;

    MCNAPI ~InventoryPacketHandler();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<std::shared_ptr<MobEquipmentPacket>>);

    MCNAPI void* $ctor(::gsl::not_null<std::shared_ptr<InventoryTransactionPacket>>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
