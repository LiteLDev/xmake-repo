#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/entity/components/PackedItemUseLegacyInventoryTransaction.h"
#include "mc/entity/components/PlayerBlockActions.h"
#include "mc/network/packet/PlayerActionType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ItemStackRequestData;
// clang-format on

struct PlayerActionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::bitset<39>>                                          mPlayerActions;
    ::ll::TypedStorage<8, 272, std::optional<PackedItemUseLegacyInventoryTransaction>> mItemUseTransaction;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ItemStackRequestData>>                    mItemStackRequest;
    ::ll::TypedStorage<8, 24, ::PlayerBlockActions>                                    mPlayerBlockActions;
    ::ll::TypedStorage<4, 8, ::Vec2>                                                   mPreSimulationRotation;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerActionComponent& operator=(PlayerActionComponent const&);
    PlayerActionComponent(PlayerActionComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerActionComponent();

    MCNAPI PlayerActionComponent(::PlayerActionComponent&&);

    MCNAPI void addAbortDestroyBlock(::BlockPos const&, int);

    MCNAPI void addAction(::PlayerActionType);

    MCNAPI void addContinueDestroyBlock(::BlockPos const&, int);

    MCNAPI void addCrackBlock(::BlockPos const&, int);

    MCNAPI void addItemStackRequest(std::unique_ptr<ItemStackRequestData>);

    MCNAPI void addPredictDestroyBlock(::BlockPos const&, int);

    MCNAPI void addStartDestroyBlock(::BlockPos const&, int);

    MCNAPI void addStopDestroyBlock();

    MCNAPI void clear();

    MCNAPI ::PlayerActionComponent& operator=(::PlayerActionComponent&&);

    MCNAPI ~PlayerActionComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::PlayerActionComponent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
