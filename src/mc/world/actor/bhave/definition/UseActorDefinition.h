#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

#if defined(LL_PLAT_A) // @header-generator platform
class UseActorDefinition : public ::BehaviorDefinition {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UseActorDefinition();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class UseActorDefinition : public ::BehaviorDefinition {};
#endif // @header-generator platform
