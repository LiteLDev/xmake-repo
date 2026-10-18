#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/SingleThreadedLock.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Core { class SingleThreadedLock; }
// clang-format on
#endif // @header-generator platform

namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class XboxLiveUserObserver : public ::Core::Observer<Social::XboxLiveUserObserver, Core::SingleThreadedLock> {
#else // @header-generator platform
class XboxLiveUserObserver : public ::Core::Observer<::Social::XboxLiveUserObserver, ::Core::SingleThreadedLock> {
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onXboxUserBlocked(std::string const&) = 0;
#else // @header-generator platform
    virtual void onXboxUserBlocked(::std::string const& xuid) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onXboxUserUnblocked(std::string const&) = 0;
#else // @header-generator platform
    virtual void onXboxUserUnblocked(::std::string const& xuid) = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Social
