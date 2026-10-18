#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/entity/components/PackedItemUseLegacyInventoryTransaction.h"
#include "mc/entity/components/PlayerBlockActions.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/network/packet/PlayerActionType.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class BlockPos;
class ItemStackRequestData;
// clang-format on

struct PlayerActionComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::bitset<39>>                                          mPlayerActions;
    ::ll::TypedStorage<8, 272, std::optional<PackedItemUseLegacyInventoryTransaction>> mItemUseTransaction;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ItemStackRequestData>>                    mItemStackRequest;
    ::ll::TypedStorage<8, 24, ::PlayerBlockActions>                                    mPlayerBlockActions;
    ::ll::TypedStorage<4, 8, ::Vec2>                                                   mPreSimulationRotation;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::bitset<39>>                                            mPlayerActions;
    ::ll::TypedStorage<8, 312, ::std::optional<::PackedItemUseLegacyInventoryTransaction>> mItemUseTransaction;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ItemStackRequestData>>                    mItemStackRequest;
    ::ll::TypedStorage<8, 24, ::PlayerBlockActions>                                        mPlayerBlockActions;
    ::ll::TypedStorage<4, 8, ::Vec2>                                                       mPreSimulationRotation;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerActionComponent& operator=(PlayerActionComponent const&);
    PlayerActionComponent(PlayerActionComponent const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    PlayerActionComponent();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PlayerActionComponent();
#else // @header-generator platform
    MCAPI PlayerActionComponent(::PlayerActionComponent&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PlayerActionComponent(::PlayerActionComponent&&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void addAbortDestroyBlock(::BlockPos const& pos, int data);

    MCAPI void addContinueDestroyBlock(::BlockPos const& pos, int facing);

    MCAPI void addCrackBlock(::BlockPos const& pos, int facing);

    MCAPI void addItemStackRequest(::std::unique_ptr<::ItemStackRequestData> request);

    MCAPI void addPredictDestroyBlock(::BlockPos const& pos, int facing);

    MCAPI void addStartDestroyBlock(::BlockPos const& pos, int facing);

    MCAPI void addStopDestroyBlock();

    MCAPI void clear();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addAbortDestroyBlock(::BlockPos const&, int);
#else // @header-generator platform
    MCAPI ::PlayerActionComponent& operator=(::PlayerActionComponent&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ~PlayerActionComponent();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::PlayerActionComponent&&);
#else // @header-generator platform
    MCAPI void* $ctor(::PlayerActionComponent&&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
