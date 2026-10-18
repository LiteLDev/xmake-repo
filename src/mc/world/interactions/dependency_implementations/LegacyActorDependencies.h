#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/interactions/ILegacyActorDependencies.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Interactions {

class LegacyActorDependencies : public ::Interactions::ILegacyActorDependencies {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Actor&> mActor;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk80e268;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyActorDependencies& operator=(LegacyActorDependencies const&);
    LegacyActorDependencies(LegacyActorDependencies const&);
    LegacyActorDependencies();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isRemoved();
#else // @header-generator platform
    virtual bool isRemoved() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isRemoved();


#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Interactions
