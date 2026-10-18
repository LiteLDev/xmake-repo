#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestInstance; }
// clang-format on

namespace gametest {

class IGameTestListener {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IGameTestListener();
#else // @header-generator platform
    virtual ~IGameTestListener() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onTestStructureLoaded(::gametest::BaseGameTestInstance&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void onTestStructureLoaded(::gametest::BaseGameTestInstance& testInstance);
#else // LL_PLAT_C
    virtual void onTestStructureLoaded(::gametest::BaseGameTestInstance& test);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onTestPassed(::gametest::BaseGameTestInstance&);
#else // @header-generator platform
    virtual void onTestPassed(::gametest::BaseGameTestInstance& testInstance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onTestFailed(::gametest::BaseGameTestInstance&);
#else // @header-generator platform
    virtual void onTestFailed(::gametest::BaseGameTestInstance& testInstance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onTestStarted(::gametest::BaseGameTestInstance&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void onTestStarted(::gametest::BaseGameTestInstance& testInstance);
#else // LL_PLAT_C
    virtual void onTestStarted(::gametest::BaseGameTestInstance&);
#endif
#endif // @header-generator platform

    virtual void onTestRetryStarted(::gametest::BaseGameTestInstance&);

    virtual void onTestRetryFinished(::gametest::BaseGameTestInstance&);
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onTestStructureLoaded(::gametest::BaseGameTestInstance&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCNAPI void $onTestStructureLoaded(::gametest::BaseGameTestInstance& testInstance);
#else // LL_PLAT_C
    MCNAPI void $onTestStructureLoaded(::gametest::BaseGameTestInstance& test);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onTestPassed(::gametest::BaseGameTestInstance&);
#else // @header-generator platform
    MCNAPI void $onTestPassed(::gametest::BaseGameTestInstance& testInstance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onTestFailed(::gametest::BaseGameTestInstance&);
#else // @header-generator platform
    MCNAPI void $onTestFailed(::gametest::BaseGameTestInstance& testInstance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onTestStarted(::gametest::BaseGameTestInstance&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCNAPI void $onTestStarted(::gametest::BaseGameTestInstance& testInstance);
#else // LL_PLAT_C
    MCNAPI void $onTestStarted(::gametest::BaseGameTestInstance&);
#endif
#endif // @header-generator platform

    MCNAPI void $onTestRetryStarted(::gametest::BaseGameTestInstance&);

    MCNAPI void $onTestRetryFinished(::gametest::BaseGameTestInstance&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND
};

} // namespace gametest
