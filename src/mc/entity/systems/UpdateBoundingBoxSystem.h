#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class EntityContext;
struct TickingSystemWithInfo;
// clang-format on

class UpdateBoundingBoxSystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSystem(::BaseGameVersion const&, bool);
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createSystem(::BaseGameVersion const& version, bool isClientSide);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void synchronousUpdateSize(::EntityContext&, ::BaseGameVersion const&, bool);
#else // @header-generator platform
    MCAPI static void
    synchronousUpdateSize(::EntityContext& entity, ::BaseGameVersion const& version, bool isClientSide);
#endif // @header-generator platform
    // NOLINTEND
};
