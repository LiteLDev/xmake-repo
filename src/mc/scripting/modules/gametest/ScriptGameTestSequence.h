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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32>                               mScriptHandle;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestSequence>>
        mScriptHandle;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptGameTestSequence& operator=(ScriptGameTestSequence const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptGameTestSequence(ScriptGameTestSequence const&);
#endif // @header-generator platform
    ScriptGameTestSequence();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptGameTestSequence(::gametest::GameTestSequence&, ::Scripting::WeakLifetimeScope);
#else // @header-generator platform
    MCAPI ::Scripting::WeakTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestSequence>
    thenExecute(::Scripting::Closure<void()> fn);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::WeakTypedObjectHandle<ScriptModuleGameTest::ScriptGameTestSequence>
    getScriptObjectHandle() const;
#else // @header-generator platform
    MCAPI ::Scripting::WeakTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestSequence>
    thenExecuteAfter(int tickDelay, ::Scripting::Closure<void()> fn);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::WeakTypedObjectHandle<ScriptModuleGameTest::ScriptGameTestSequence>
        thenExecute(::Scripting::Closure<void()>);
#else // @header-generator platform
    MCAPI ::Scripting::WeakTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestSequence>
    thenExecuteFor(int tickCount, ::Scripting::Closure<void()> fn);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::WeakTypedObjectHandle<ScriptModuleGameTest::ScriptGameTestSequence>
    thenExecuteAfter(int, ::Scripting::Closure<void()>);
#else // @header-generator platform
    MCAPI void thenFail(::std::string error);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::WeakTypedObjectHandle<ScriptModuleGameTest::ScriptGameTestSequence>
    thenExecuteFor(int, ::Scripting::Closure<void()>);
#else // @header-generator platform
    MCAPI ::Scripting::WeakTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestSequence> thenIdle(int tickDelay);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void thenFail(std::string);
#else // @header-generator platform
    MCAPI ::Scripting::WeakTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestSequence>
    thenWait(::Scripting::Closure<void()> fn);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ::Scripting::WeakTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestSequence>
    thenWaitAfter(int tickDelay, ::Scripting::Closure<void()> fn);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
