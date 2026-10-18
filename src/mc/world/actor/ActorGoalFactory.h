#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/factory/EntityGoalFactory.h"

class ActorGoalFactory : public ::EntityGoalFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mGenerateDoc;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ActorGoalFactory();
#else // @header-generator platform
#endif // @header-generator platform
};
