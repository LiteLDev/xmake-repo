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
#if defined(LL_PLAT_A) // @header-generator platform
class BlockType;
class Material;
class Mob;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class LayEggGoal : public ::BaseMoveToBlockGoal {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>>                      mTargetBlocks;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_26_20::MaterialType>> mTargetMaterialsAboveBlock;
    ::ll::TypedStorage<1, 1, bool>                                              mAllowLayingFromBelow;
    ::ll::TypedStorage<1, 1, bool>                                              mUseDefaultAnimation;
    ::ll::TypedStorage<4, 4, float>                                             mLaySeconds;
    ::ll::TypedStorage<8, 16, ::ItemDescriptor>                                 mEggType;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>                         mOnLay;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent>            mLayEggSound;
    ::ll::TypedStorage<4, 4, int>                                               mLayEggCounter;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>>                      mTargetBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_26_20::MaterialType>> mTargetMaterialsAboveBlock;
    ::ll::TypedStorage<1, 1, bool>                                                  mAllowLayingFromBelow;
    ::ll::TypedStorage<1, 1, bool>                                                  mUseDefaultAnimation;
    ::ll::TypedStorage<4, 4, float>                                                 mLaySeconds;
    ::ll::TypedStorage<8, 16, ::ItemDescriptor>                                     mEggType;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>                            mOnLay;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent>                mLayEggSound;
    ::ll::TypedStorage<4, 4, int>                                                   mLayEggCounter;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    LayEggGoal();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LayEggGoal();
#else // @header-generator platform
    virtual bool findTargetBlock() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canUse();
#else // @header-generator platform
    virtual bool canUse() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canContinueToUse();
#else // @header-generator platform
    virtual bool canContinueToUse() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void start();
#else // @header-generator platform
    virtual void start() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick();
#else // @header-generator platform
    virtual void tick() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void appendDebugInfo(std::string&) const;
#else // @header-generator platform
    virtual void appendDebugInfo(::std::string& str) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isValidTarget(::BlockSource&, ::BlockPos const&);
#else // @header-generator platform
    virtual bool isValidTarget(::BlockSource& region, ::BlockPos const& pos) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _moveToBlock();

    virtual bool findTargetBlock();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void _moveToBlock() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canUse();
#else // @header-generator platform
    MCAPI bool $findTargetBlock();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canContinueToUse();
#else // @header-generator platform
    MCAPI bool $canUse();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $start();
#else // @header-generator platform
    MCAPI bool $canContinueToUse();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick();
#else // @header-generator platform
    MCAPI void $start();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $appendDebugInfo(std::string&) const;
#else // @header-generator platform
    MCAPI void $tick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isValidTarget(::BlockSource&, ::BlockPos const&);
#else // @header-generator platform
    MCAPI void $appendDebugInfo(::std::string& str) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_moveToBlock();
#else // @header-generator platform
    MCAPI bool $isValidTarget(::BlockSource& region, ::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $findTargetBlock();
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $_moveToBlock();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
