#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/deps/script_core/script_engine/scripting/Closure.h"
#include "mc/scripting/modules/gametest/BaseScriptGameTestFunction.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleGameTest { class ScriptGameTestHelper; }
namespace Scripting { class WeakLifetimeScope; }
namespace gametest { class BaseGameTestHelper; }
namespace gametest { class IGameTestFunctionContext; }
namespace gametest { class IGameTestFunctionRunResult; }
// clang-format on

namespace ScriptModuleGameTest {

class SyncScriptGameTestFunction : public ::ScriptModuleGameTest::BaseScriptGameTestFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 112> mFunction;
    // NOLINTEND

public:
    // prevent constructor by default
    SyncScriptGameTestFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~SyncScriptGameTestFunction();

    virtual std::unique_ptr<gametest::IGameTestFunctionRunResult> run(::gametest::BaseGameTestHelper&, ::gametest::IGameTestFunctionContext&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SyncScriptGameTestFunction(
        ::Scripting::WeakLifetimeScope,
        ::Scripting::Closure<void(Scripting::TypedObjectHandle<ScriptModuleGameTest::ScriptGameTestHelper>)>,
        std::string const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Scripting::WeakLifetimeScope,
        ::Scripting::Closure<void(Scripting::TypedObjectHandle<ScriptModuleGameTest::ScriptGameTestHelper>)>,
        std::string const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<gametest::IGameTestFunctionRunResult>
           $run(::gametest::BaseGameTestHelper&, ::gametest::IGameTestFunctionContext&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
