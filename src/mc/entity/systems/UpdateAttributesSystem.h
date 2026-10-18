#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct AttributesComponent;
#if defined(LL_PLAT_A) // @header-generator platform
struct MovementAttributesComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct TickingSystemWithInfo;
// clang-format on

struct UpdateAttributesSystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::AttributesComponent copyMovementAttributes(::AttributesComponent const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::AttributesComponent copyMovementAttributes(::AttributesComponent const& attributes);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createProcessRequestSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createProcessRequestSystem();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createUpdateSystem();

    MCNAPI static void updateMovementAttribute(::MovementAttributesComponent const&, ::MovementAttributesComponent&);
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createUpdateSystem();
#endif // @header-generator platform
    // NOLINTEND
};
