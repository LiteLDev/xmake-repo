#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"
#include "mc/deps/core/utility/SingleThreadedLock.h"

class EduDeeplinkObserver : public ::Core::Observer<EduDeeplinkObserver, Core::SingleThreadedLock> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EduDeeplinkObserver() = default;

    virtual bool onJoincodeReceived(std::string const&);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class SingleThreadedLock; }
// clang-format on

class EduDeeplinkObserver : public ::Core::Observer<::EduDeeplinkObserver, ::Core::SingleThreadedLock> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EduDeeplinkObserver() /*override*/ = default;

    virtual bool onJoincodeReceived(::std::string const& encodedJoincode);
    // NOLINTEND
};
#else // @header-generator platform
class EduDeeplinkObserver {};
#endif // @header-generator platform
#endif // @header-generator platform
