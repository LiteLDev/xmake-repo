#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace RideableComponentHelpers { class IActorWrapper; }
// clang-format on

#endif // @header-generator platform
namespace RideableComponentHelpers {

#if defined(LL_PLAT_A) // @header-generator platform
class IRideableActorActions {};
#else // @header-generator platform
class IRideableActorActions {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IRideableActorActions() = default;

    virtual bool startRiding(::RideableComponentHelpers::IActorWrapper&) = 0;
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace RideableComponentHelpers
