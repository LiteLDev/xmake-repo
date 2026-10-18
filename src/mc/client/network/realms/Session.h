#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
struct Session {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mUserXuid;
    ::ll::TypedStorage<8, 8, long>         mLoginTime;
    ::ll::TypedStorage<8, 8, long>         mLogoutTime;
    // NOLINTEND

public:
    // prevent constructor by default
    Session& operator=(Session const&);
};
#else // @header-generator platform
struct Session {};
#endif // @header-generator platform

} // namespace Realms
