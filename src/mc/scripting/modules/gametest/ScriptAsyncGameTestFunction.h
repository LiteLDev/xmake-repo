#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/deps/script_core/script_engine/scripting/Closure.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/script_core/script_engine/scripting/Future.h"
#endif // @header-generator platform
#include "mc/scripting/modules/gametest/BaseScriptGameTestFunction.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleGameTest { class ScriptGameTestHelper; }
namespace Scripting { class WeakLifetimeScope; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { template<typename T0> class Future; }
#else // @header-generator platform
#endif // @header-generator platform
namespace gametest { class BaseGameTestHelper; }
namespace gametest { class IGameTestFunctionContext; }
namespace gametest { class IGameTestFunctionRunResult; }
// clang-format on

namespace ScriptModuleGameTest {

class ScriptAsyncGameTestFunction : public ::ScriptModuleGameTest::BaseScriptGameTestFunction {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 112> mFunction;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        112,
        ::Scripting::Closure<
            ::Scripting::Future<void>(::Scripting::TypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestHelper>)>>
        mFunction;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAsyncGameTestFunction();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ScriptAsyncGameTestFunction();

    virtual std::unique_ptr<gametest::IGameTestFunctionRunResult> run(::gametest::BaseGameTestHelper&, ::gametest::IGameTestFunctionContext&) const;
    // clang-format on
#else // @header-generator platform
    virtual ::std::unique_ptr<::gametest::IGameTestFunctionRunResult>
    run(::gametest::BaseGameTestHelper&, ::gametest::IGameTestFunctionContext& fnContext) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptAsyncGameTestFunction(
        ::Scripting::WeakLifetimeScope,
#else // @header-generator platform
    MCAPI ScriptAsyncGameTestFunction(
        ::Scripting::WeakLifetimeScope scope,
#endif // @header-generator platform
        ::Scripting::Closure<
#if defined(LL_PLAT_A) // @header-generator platform
            Scripting::Future<void>(Scripting::TypedObjectHandle<ScriptModuleGameTest::ScriptGameTestHelper>)>,
        std::string const&
#else // @header-generator platform
            ::Scripting::Future<void>(::Scripting::TypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestHelper>)>
                             functionHandle,
        ::std::string const& testName
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::Scripting::WeakLifetimeScope,
#else // @header-generator platform
    MCAPI void* $ctor(
        ::Scripting::WeakLifetimeScope scope,
#endif // @header-generator platform
        ::Scripting::Closure<
#if defined(LL_PLAT_A) // @header-generator platform
            Scripting::Future<void>(Scripting::TypedObjectHandle<ScriptModuleGameTest::ScriptGameTestHelper>)>,
        std::string const&
#else // @header-generator platform
            ::Scripting::Future<void>(::Scripting::TypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestHelper>)>
                             functionHandle,
        ::std::string const& testName
#endif // @header-generator platform
    );
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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<gametest::IGameTestFunctionRunResult>
           $run(::gametest::BaseGameTestHelper&, ::gametest::IGameTestFunctionContext&) const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::gametest::IGameTestFunctionRunResult>
    $run(::gametest::BaseGameTestHelper&, ::gametest::IGameTestFunctionContext& fnContext) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
