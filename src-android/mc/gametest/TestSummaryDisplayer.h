#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/IGameTestListener.h"

// auto generated forward declare list
// clang-format off
class Level;
namespace gametest { class BaseGameTestInstance; }
namespace gametest { class MultipleTestTracker; }
// clang-format on

class TestSummaryDisplayer : public ::gametest::IGameTestListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gametest::MultipleTestTracker&> mTestTracker;
    ::ll::TypedStorage<8, 8, ::Level&>                         mLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    TestSummaryDisplayer& operator=(TestSummaryDisplayer const&);
    TestSummaryDisplayer(TestSummaryDisplayer const&);
    TestSummaryDisplayer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TestSummaryDisplayer();

    virtual void onTestPassed(::gametest::BaseGameTestInstance&);

    virtual void onTestFailed(::gametest::BaseGameTestInstance&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _say(std::string const&, std::string const&) const;

    MCNAPI void _showTestSummaryIfAllDone() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onTestPassed(::gametest::BaseGameTestInstance&);

    MCNAPI void $onTestFailed(::gametest::BaseGameTestInstance&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
