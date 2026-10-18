#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AutomationBehaviorTreeGroup;
class BehaviorTreeDefinition;
// clang-format on

class BehaviorTreeDefinitionPtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::AutomationBehaviorTreeGroup*> mGroup;
    ::ll::TypedStorage<8, 8, ::BehaviorTreeDefinition*>      mPtr;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI BehaviorTreeDefinitionPtr(::BehaviorTreeDefinitionPtr&&);

    MCNAPI ::BehaviorTreeDefinitionPtr& operator=(::BehaviorTreeDefinitionPtr&&);
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BehaviorTreeDefinitionPtr const& NONE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BehaviorTreeDefinitionPtr&&);
#else // @header-generator platform
    MCAPI static ::BehaviorTreeDefinitionPtr const& NONE();
#endif // @header-generator platform
    // NOLINTEND
};
