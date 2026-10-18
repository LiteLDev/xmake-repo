#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/scripting/modules/gametest/ScriptGameTestHelper.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/WeakTypedObjectHandle.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/gametest/framework/IGameTestFunctionContext.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleGameTest { class ScriptGameTestHelper; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace gametest { class BaseGameTestHelper; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleGameTest {

class ScriptGameTestFunctionContext : public ::gametest::IGameTestFunctionContext {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>                             mScope;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleGameTest::ScriptGameTestHelper>> mScriptGameTestHelper;
    ::ll::UntypedStorage<8, 32>                                                           mScriptGameTestHelperHandle;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>                                 mScope;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptModuleGameTest::ScriptGameTestHelper>> mScriptGameTestHelper;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestHelper>>
        mScriptGameTestHelperHandle;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptGameTestFunctionContext();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual ~ScriptGameTestFunctionContext() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
