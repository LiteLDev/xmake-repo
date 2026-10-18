#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/IGameTestListener.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Level;
#else // @header-generator platform
#endif // @header-generator platform
namespace gametest { class BaseGameTestInstance; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace gametest { class MultipleTestTracker; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class TestSummaryDisplayer : public ::gametest::IGameTestListener {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gametest::MultipleTestTracker&> mTestTracker;
    ::ll::TypedStorage<8, 8, ::Level&>                         mLevel;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkf27c23;
    ::ll::UntypedStorage<8, 8> mUnk36b5e9;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    TestSummaryDisplayer& operator=(TestSummaryDisplayer const&);
    TestSummaryDisplayer(TestSummaryDisplayer const&);
    TestSummaryDisplayer();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~TestSummaryDisplayer();
#else // @header-generator platform
    virtual void onTestPassed(::gametest::BaseGameTestInstance&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onTestPassed(::gametest::BaseGameTestInstance&);

    virtual void onTestFailed(::gametest::BaseGameTestInstance&);
#else // @header-generator platform
    virtual void onTestFailed(::gametest::BaseGameTestInstance&) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _say(std::string const&, std::string const&) const;
#else // @header-generator platform
    MCNAPI void _say(::std::string const& text, ::std::string const& chatColor) const;
#endif // @header-generator platform

    MCNAPI void _showTestSummaryIfAllDone() const;
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onTestPassed(::gametest::BaseGameTestInstance&);

    MCNAPI void $onTestFailed(::gametest::BaseGameTestInstance&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
