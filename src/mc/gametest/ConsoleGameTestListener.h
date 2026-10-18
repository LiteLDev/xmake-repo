#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/IGameTestListener.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestInstance; }
// clang-format on

class ConsoleGameTestListener : public ::gametest::IGameTestListener {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ConsoleGameTestListener();
#else // @header-generator platform
    virtual void onTestStructureLoaded(::gametest::BaseGameTestInstance& test) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onTestStructureLoaded(::gametest::BaseGameTestInstance&);
#else // @header-generator platform
    virtual void onTestPassed(::gametest::BaseGameTestInstance& test) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onTestPassed(::gametest::BaseGameTestInstance&);

    virtual void onTestFailed(::gametest::BaseGameTestInstance&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void onTestFailed(::gametest::BaseGameTestInstance& test) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onTestStructureLoaded(::gametest::BaseGameTestInstance&);
#else // @header-generator platform
    MCNAPI void $onTestStructureLoaded(::gametest::BaseGameTestInstance& test);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onTestPassed(::gametest::BaseGameTestInstance&);
#else // @header-generator platform
    MCNAPI void $onTestPassed(::gametest::BaseGameTestInstance& test);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onTestFailed(::gametest::BaseGameTestInstance&);
    // NOLINTEND
#else // @header-generator platform
    MCNAPI void $onTestFailed(::gametest::BaseGameTestInstance& test);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
