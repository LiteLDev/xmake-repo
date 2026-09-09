#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/v1_26_20/block/MaterialType.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"
#include "mc/world/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class BlockType;
class Material;
class Mob;
// clang-format on

class LayEggGoal : public ::BaseMoveToBlockGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>>                      mTargetBlocks;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_26_20::MaterialType>> mTargetMaterialsAboveBlock;
    ::ll::TypedStorage<1, 1, bool>                                              mAllowLayingFromBelow;
    ::ll::TypedStorage<1, 1, bool>                                              mUseDefaultAnimation;
    ::ll::TypedStorage<4, 4, float>                                             mLaySeconds;
    ::ll::TypedStorage<8, 16, ::ItemDescriptor>                                 mEggType;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>                         mOnLay;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent>            mLayEggSound;
    ::ll::TypedStorage<4, 4, int>                                               mLayEggCounter;
    // NOLINTEND

public:
    // prevent constructor by default
    LayEggGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LayEggGoal();

    virtual bool canUse();

    virtual bool canContinueToUse();

    virtual void start();

    virtual void tick();

    virtual void appendDebugInfo(std::string&) const;

    virtual bool isValidTarget(::BlockSource&, ::BlockPos const&);

    virtual void _moveToBlock();

    virtual bool findTargetBlock();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $start();

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(std::string&) const;

    MCNAPI bool $isValidTarget(::BlockSource&, ::BlockPos const&);

    MCNAPI void $_moveToBlock();

    MCNAPI bool $findTargetBlock();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
