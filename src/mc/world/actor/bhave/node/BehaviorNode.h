#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/actor/bhave/BehaviorTreeDefinitionPtr.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BehaviorComponent;
class BehaviorData;
class BehaviorDefinition;
// clang-format on

class BehaviorNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BehaviorDefinition const*>  mNodeDefinition;
    ::ll::TypedStorage<8, 16, ::BehaviorTreeDefinitionPtr> mTreeDefinition;
    ::ll::TypedStorage<8, 8, ::BehaviorNode*>              mParent;
    ::ll::TypedStorage<8, 8, ::BehaviorComponent*>         mComponent;
    ::ll::TypedStorage<8, 8, ::BehaviorData*>              mTreeData;
    ::ll::TypedStorage<4, 4, ::BehaviorStatus>             mStatus;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BehaviorNode();
#else // @header-generator platform
    virtual ~BehaviorNode() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BehaviorStatus tick(::Actor&) = 0;
#else // @header-generator platform
    virtual ::BehaviorStatus tick(::Actor& owner) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeFromDefinition(::Actor&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BehaviorNode();

    MCNAPI ::BehaviorData& getBehaviorData();
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
    virtual void initializeFromDefinition(::Actor& owner);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initializeFromDefinition(::Actor&);
#else // @header-generator platform
    MCFOLD void $initializeFromDefinition(::Actor& owner);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
