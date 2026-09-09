#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/GameTestError.h"
#include "mc/gametest/framework/IGameTestFunctionRunResult.h"

namespace gametest {

class SyncGameTestFunctionRunResult : public ::gametest::IGameTestFunctionRunResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 240, std::optional<gametest::GameTestError>> mError;
    // NOLINTEND

public:
    // prevent constructor by default
    SyncGameTestFunctionRunResult();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SyncGameTestFunctionRunResult();

    virtual bool isComplete() const;

    virtual std::optional<gametest::GameTestError> getError();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isComplete() const;

    MCNAPI std::optional<gametest::GameTestError> $getError();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace gametest
