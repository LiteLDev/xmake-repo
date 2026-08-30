#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"
#include "mc/deps/core/utility/SingleThreadedLock.h"

class OptionsObserver : public ::Core::Observer<OptionsObserver, Core::SingleThreadedLock> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onForceCloudSave() = 0;

    virtual void onOptionsLoadBegin() = 0;

    virtual void onOptionsLoadComplete() = 0;
    // NOLINTEND
};
