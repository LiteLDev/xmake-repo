#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/BaseGameTestAction.h"
#include "mc/gametest/framework/GameTestError.h"

namespace gametest {

class NativeFunctionGameTestAction : public ::gametest::BaseGameTestAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mFn;
    // NOLINTEND

public:
    // prevent constructor by default
    NativeFunctionGameTestAction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NativeFunctionGameTestAction();

    virtual std::optional<gametest::GameTestError> run();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::optional<gametest::GameTestError> $run();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace gametest
