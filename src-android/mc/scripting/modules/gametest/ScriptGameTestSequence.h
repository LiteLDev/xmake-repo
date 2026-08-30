#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakTypedObjectHandle.h"
#include "mc/deps/script_core/script_engine/scripting/Closure.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class GameTestSequence; }
// clang-format on

namespace ScriptModuleGameTest {

class ScriptGameTestSequence {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gametest::GameTestSequence&>   mSequence;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::UntypedStorage<8, 32>                               mScriptHandle;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptGameTestSequence& operator=(ScriptGameTestSequence const&);
    ScriptGameTestSequence();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptGameTestSequence(::gametest::GameTestSequence&, ::Scripting::WeakLifetimeScope);

    MCNAPI ::Scripting::WeakTypedObjectHandle<ScriptModuleGameTest::ScriptGameTestSequence>
    getScriptObjectHandle() const;

    MCNAPI ::Scripting::WeakTypedObjectHandle<ScriptModuleGameTest::ScriptGameTestSequence>
        thenExecute(::Scripting::Closure<void()>);

    MCNAPI ::Scripting::WeakTypedObjectHandle<ScriptModuleGameTest::ScriptGameTestSequence>
    thenExecuteAfter(int, ::Scripting::Closure<void()>);

    MCNAPI ::Scripting::WeakTypedObjectHandle<ScriptModuleGameTest::ScriptGameTestSequence>
    thenExecuteFor(int, ::Scripting::Closure<void()>);

    MCNAPI void thenFail(std::string);

    MCNAPI ::Scripting::WeakTypedObjectHandle<ScriptModuleGameTest::ScriptGameTestSequence> thenIdle(int);

    MCNAPI void thenSucceed();

    MCNAPI ::Scripting::WeakTypedObjectHandle<ScriptModuleGameTest::ScriptGameTestSequence>
        thenWait(::Scripting::Closure<void()>);

    MCNAPI ::Scripting::WeakTypedObjectHandle<ScriptModuleGameTest::ScriptGameTestSequence>
    thenWaitAfter(int, ::Scripting::Closure<void()>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gametest::GameTestSequence&, ::Scripting::WeakLifetimeScope);
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
