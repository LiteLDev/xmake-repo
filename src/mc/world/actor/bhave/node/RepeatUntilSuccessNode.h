#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class RepeatUntilSuccessNode : public ::BehaviorNode {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<BehaviorNode>> mActiveChild;
    ::ll::TypedStorage<4, 4, int>                           mMaxNumberOfAttempts;
    ::ll::TypedStorage<4, 4, int>                           mCurrentAttempt;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BehaviorNode>> mActiveChild;
    ::ll::TypedStorage<4, 4, int>                               mMaxNumberOfAttempts;
    ::ll::TypedStorage<4, 4, int>                               mCurrentAttempt;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~RepeatUntilSuccessNode();
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
    MCNAPI RepeatUntilSuccessNode();
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
