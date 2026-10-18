#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/SimpleResourceTracker.h"
#include "mc/external/render_dragon/resources/ResolvedImageResource.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon {

#if defined(LL_PLAT_A) // @header-generator platform
class ImageResourceTracker : public ::mce::SimpleResourceTracker<dragon::ResolvedImageResource> {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void resetValidityChecks();
    // NOLINTEND
};
#else // @header-generator platform
class ImageResourceTracker {};
#endif // @header-generator platform

} // namespace dragon
