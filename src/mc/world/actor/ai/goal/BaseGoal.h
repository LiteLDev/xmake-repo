#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Player;
struct DimensionType;
struct GoalId;
// clang-format on

class BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<4, 4, int>          mRequiredControlFlags;
    ::ll::TypedStorage<2, 2, ushort>       mTypeId;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mName;
    ::ll::TypedStorage<4, 4, int>            mRequiredControlFlags;
    ::ll::TypedStorage<2, 2, ushort>         mTypeId;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseGoal();

    virtual bool canUse() = 0;

    virtual bool canContinueToUse();

    virtual bool canBeInterrupted();

    virtual void start();

    virtual void stop();

    virtual void tick();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void appendDebugInfo(std::string&) const = 0;
#else // @header-generator platform
    virtual void appendDebugInfo(::std::string& str) const = 0;
#endif // @header-generator platform

    virtual bool isTargetGoal() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerDimensionChanged(::Player*, ::DimensionType, ::DimensionType);
#else // @header-generator platform
    virtual void onPlayerDimensionChanged(::Player* player, ::DimensionType fromDimension, ::DimensionType toDimension);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setInfo(std::string, ::GoalId const&);
#else // @header-generator platform
    virtual void setInfo(::std::string name, ::GoalId const& goalId);
#endif // @header-generator platform

    virtual ::GoalId getGoalId() const;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI BaseGoal();

    MCNAPI int getRequiredControlFlags() const;

    MCNAPI void setRequiredControlFlags(int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canContinueToUse();
#else // @header-generator platform
    MCFOLD bool $canContinueToUse();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canBeInterrupted();
#else // @header-generator platform
    MCFOLD bool $canBeInterrupted();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $start();
#else // @header-generator platform
    MCFOLD void $start();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $stop();
#else // @header-generator platform
    MCFOLD void $stop();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick();
#else // @header-generator platform
    MCFOLD void $tick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isTargetGoal() const;
#else // @header-generator platform
    MCFOLD bool $isTargetGoal() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onPlayerDimensionChanged(::Player*, ::DimensionType, ::DimensionType);
#else // @header-generator platform
    MCFOLD void $onPlayerDimensionChanged(::Player* player, ::DimensionType fromDimension, ::DimensionType toDimension);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setInfo(std::string, ::GoalId const&);
#else // @header-generator platform
    MCAPI void $setInfo(::std::string name, ::GoalId const& goalId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::GoalId $getGoalId() const;
#else // @header-generator platform
    MCAPI ::GoalId $getGoalId() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
