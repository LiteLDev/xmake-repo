#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/platform/UUID.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Social::XblRichPresence {

#if defined(LL_PLAT_A) // @header-generator platform
struct ExperienceSession {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID> experienceId;
    // NOLINTEND
};
#else // @header-generator platform
struct ExperienceSession {};
#endif // @header-generator platform

} // namespace Social::XblRichPresence
