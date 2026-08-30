#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/ExpressionNode.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockType;
class Mob;
struct GoalId;
// clang-format on

class EatBlockGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                                                  mMob;
    ::ll::TypedStorage<4, 4, int>                                                     mTicksUntilEat;
    ::ll::TypedStorage<4, 4, int>                                                     mTotalTicksUntilEat;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>                               mOnEat;
    ::ll::TypedStorage<8, 24, std::vector<ExpressionNode>>                            mSuccessChance;
    ::ll::TypedStorage<8, 40, std::unordered_map<const BlockType*, const BlockType*>> mEatAndReplaceBlockPairs;
    // NOLINTEND

public:
    // prevent constructor by default
    EatBlockGoal& operator=(EatBlockGoal const&);
    EatBlockGoal(EatBlockGoal const&);
    EatBlockGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EatBlockGoal();

    virtual bool canUse();

    virtual bool canContinueToUse();

    virtual void start();

    virtual void stop();

    virtual void tick();

    virtual void appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EatBlockGoal(::Mob&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Mob&);
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

    MCNAPI void $stop();

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
