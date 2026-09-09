#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/actor/VanillaBlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockActorDataPacket;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class SaveContext;
// clang-format on

class ConduitBlockActor : public ::VanillaBlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                   mIsActive;
    ::ll::TypedStorage<1, 1, bool>                   mIsHunting;
    ::ll::TypedStorage<4, 4, int>                    mBlockRefreshCounter;
    ::ll::TypedStorage<8, 8, ulong>                  mNextAmbientSound;
    ::ll::TypedStorage<4, 4, float>                  mAnimationValue;
    ::ll::TypedStorage<4, 4, float>                  mRotation;
    ::ll::TypedStorage<4, 4, int>                    mRotationTickCount;
    ::ll::TypedStorage<4, 4, int>                    mWindLevel;
    ::ll::TypedStorage<4, 4, int>                    mEffectRange;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>        mTarget;
    ::ll::TypedStorage<8, 24, std::vector<BlockPos>> mBlockPositions;
    // NOLINTEND

public:
    // prevent constructor by default
    ConduitBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ConduitBlockActor();

    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    virtual bool save(::CompoundTag&, ::SaveContext const&) const;

    virtual std::unique_ptr<BlockActorDataPacket> _getUpdatePacket(::BlockSource&);

    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    virtual bool hasAlphaLayer() const;

    virtual void tick(::BlockSource&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ConduitBlockActor(::BlockPos const&);

    MCNAPI void incrementAnimationValue(float);

    MCNAPI void incrementWindLevel();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI bool $save(::CompoundTag&, ::SaveContext const&) const;

    MCNAPI std::unique_ptr<BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCNAPI void $_onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    MCNAPI bool $hasAlphaLayer() const;

    MCNAPI void $tick(::BlockSource&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
