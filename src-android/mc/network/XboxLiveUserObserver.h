#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"
#include "mc/deps/core/utility/SingleThreadedLock.h"

namespace Social {

class XboxLiveUserObserver : public ::Core::Observer<Social::XboxLiveUserObserver, Core::SingleThreadedLock> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onXboxUserBlocked(std::string const&) = 0;

    virtual void onXboxUserUnblocked(std::string const&) = 0;
    // NOLINTEND
};

} // namespace Social
