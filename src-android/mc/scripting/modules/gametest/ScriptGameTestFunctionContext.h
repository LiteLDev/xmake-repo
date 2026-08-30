#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakTypedObjectHandle.h"
#include "mc/gametest/framework/IGameTestFunctionContext.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleGameTest { class ScriptGameTestHelper; }
namespace gametest { class BaseGameTestHelper; }
// clang-format on

namespace ScriptModuleGameTest {

class ScriptGameTestFunctionContext : public ::gametest::IGameTestFunctionContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>                             mScope;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleGameTest::ScriptGameTestHelper>> mScriptGameTestHelper;
    ::ll::UntypedStorage<8, 32>                                                           mScriptGameTestHelperHandle;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptGameTestFunctionContext();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptGameTestFunctionContext();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::WeakTypedObjectHandle<ScriptModuleGameTest::ScriptGameTestHelper> getScriptGameTestHelper();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
