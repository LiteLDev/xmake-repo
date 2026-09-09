#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/gametest/framework/IGameTestFunctionRunResult.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { template<typename T0> class Future; }
namespace gametest { struct GameTestError; }
// clang-format on

namespace ScriptModuleGameTest {

class ScriptAsyncGameTestFunctionRunResult : public ::gametest::IGameTestFunctionRunResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mResult;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAsyncGameTestFunctionRunResult();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptAsyncGameTestFunctionRunResult();

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

} // namespace ScriptModuleGameTest
