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
    virtual ~ConsoleGameTestListener();

    virtual void onTestStructureLoaded(::gametest::BaseGameTestInstance&);

    virtual void onTestPassed(::gametest::BaseGameTestInstance&);

    virtual void onTestFailed(::gametest::BaseGameTestInstance&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onTestStructureLoaded(::gametest::BaseGameTestInstance&);

    MCNAPI void $onTestPassed(::gametest::BaseGameTestInstance&);

    MCNAPI void $onTestFailed(::gametest::BaseGameTestInstance&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
