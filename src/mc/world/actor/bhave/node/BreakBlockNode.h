#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
// clang-format on

class BreakBlockNode : public ::BehaviorNode {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::BlockPos>                   mBlockPos;
    ::ll::TypedStorage<4, 4, int>                           mNumTicksToBreak;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const Block*>> mStartingBlock;
    ::ll::TypedStorage<4, 4, int>                           mNumTicksBreaking;
    ::ll::TypedStorage<1, 1, bool>                          mPreActionDone;
#else // @header-generator platform
    ::ll::TypedStorage<4, 12, ::BlockPos>                     mBlockPos;
    ::ll::TypedStorage<4, 4, int>                             mNumTicksToBreak;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::Block const*>> mStartingBlock;
    ::ll::TypedStorage<4, 4, int>                             mNumTicksBreaking;
    ::ll::TypedStorage<1, 1, bool>                            mPreActionDone;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BreakBlockNode();
#else // @header-generator platform
    virtual ::BehaviorStatus tick(::Actor& owner) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BehaviorStatus tick(::Actor&);

    virtual void initializeFromDefinition(::Actor&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BreakBlockNode();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void initializeFromDefinition(::Actor& owner) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BehaviorStatus $tick(::Actor&);
#else // @header-generator platform
    MCAPI ::BehaviorStatus $tick(::Actor& owner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initializeFromDefinition(::Actor&);
#else // @header-generator platform
    MCAPI void $initializeFromDefinition(::Actor& owner);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
