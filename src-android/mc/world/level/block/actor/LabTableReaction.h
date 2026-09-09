#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/LabTableReactionType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class ItemStack;
class LabTableReactionComponent;
class Random;
class Vec3;
// clang-format on

class LabTableReaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                      mLifetime;
    ::ll::TypedStorage<4, 4, int>                                                      mMaxLifetime;
    ::ll::TypedStorage<4, 4, int>                                                      mStartDelay;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ItemStack>>                               mResultItem;
    ::ll::TypedStorage<8, 8, std::unique_ptr<BlockPos>>                                mPos;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Random>>                                  mRandom;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<LabTableReactionComponent>>> mComponents;
    ::ll::TypedStorage<1, 1, ::LabTableReactionType>                                   mType;
    ::ll::TypedStorage<1, 1, bool>                                                     mIsClientSide;
    // NOLINTEND

public:
    // prevent constructor by default
    LabTableReaction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LabTableReaction();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addComponent(std::unique_ptr<LabTableReactionComponent>);

    MCNAPI void addResultItem(::ItemStack const&);

    MCNAPI int getReactionId();

    MCNAPI ::LabTableReactionType getType();

    MCNAPI bool tick(::BlockSource&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<LabTableReaction> createReaction(::LabTableReactionType, ::BlockPos const&, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
