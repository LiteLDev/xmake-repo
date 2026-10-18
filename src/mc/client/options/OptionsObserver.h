#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class SingleThreadedLock; }
// clang-format on

class OptionsObserver : public ::Core::Observer<::OptionsObserver, ::Core::SingleThreadedLock> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onForceCloudSave() = 0;

    virtual void onOptionsLoadBegin() = 0;

    virtual void onOptionsLoadComplete() = 0;
    // NOLINTEND
};
#else // @header-generator platform
class OptionsObserver {};
#endif // @header-generator platform
#endif // @header-generator platform
