#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
