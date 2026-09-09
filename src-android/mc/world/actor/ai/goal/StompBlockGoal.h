#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class Level;
class Mob;
// clang-format on

class StompBlockGoal : public ::BaseMoveToBlockGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const*> mBlockToRemove;
    ::ll::TypedStorage<4, 4, int>            mTicksSinceReachedGoal;
    // NOLINTEND

public:
    // prevent constructor by default
    StompBlockGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StompBlockGoal() = default;

    virtual bool canUse();

    virtual bool canContinueToUse();

    virtual void start();

    virtual void stop();

    virtual void tick();

    virtual void appendDebugInfo(std::string&) const;

    virtual bool isValidTarget(::BlockSource&, ::BlockPos const&);

    virtual bool _canReach(::BlockPos const&);

    virtual void _moveToBlock();

    virtual bool findTargetBlock();

    virtual void _createBreakProgressParticles(::Level&, ::BlockSource&, ::BlockPos);

    virtual void _createDestroyParticles(::Level&, ::BlockSource&, ::BlockPos);

    virtual void _playBreakProgressSound(::Level&, ::BlockSource&, ::BlockPos);

    virtual void _playDestroySound(::Level&, ::BlockSource&, ::BlockPos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $start();

    MCNAPI void $stop();

    MCNAPI void $tick();

    MCNAPI bool $isValidTarget(::BlockSource&, ::BlockPos const&);

    MCNAPI bool $_canReach(::BlockPos const&);

    MCNAPI void $_moveToBlock();

    MCNAPI bool $findTargetBlock();
    // NOLINTEND
};
