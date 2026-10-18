#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/identity/SocialChangeAction.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
struct SocialChangeResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                 xuid;
    ::ll::TypedStorage<4, 4, ::Social::SocialChangeAction> action;
    ::ll::TypedStorage<1, 1, bool>                         isSuccess;
    // NOLINTEND

public:
    // prevent constructor by default
    SocialChangeResult& operator=(SocialChangeResult const&);
    SocialChangeResult();
};
#else // @header-generator platform
struct SocialChangeResult {};
#endif // @header-generator platform

} // namespace Social
