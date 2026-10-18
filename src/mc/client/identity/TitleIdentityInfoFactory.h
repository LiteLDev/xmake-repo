#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Social { class TitleIdentityInfo; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class TitleIdentityInfoFactory {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::shared_ptr<Social::TitleIdentityInfo> makeTitleIdentityInfo();
    // NOLINTEND
};
#else // @header-generator platform
class TitleIdentityInfoFactory {};
#endif // @header-generator platform

} // namespace Social
