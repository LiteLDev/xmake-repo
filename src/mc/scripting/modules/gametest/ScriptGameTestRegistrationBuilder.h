#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace ScriptModuleGameTest { class BaseScriptGameTestFunction; }
namespace ScriptModuleMinecraft { class ScriptDimensionType; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleGameTest {

class ScriptGameTestRegistrationBuilder {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32>                                                                  mScriptingHandle;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ScriptModuleGameTest::BaseScriptGameTestFunction>> mGameTestFunction;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::WeakTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>>
                                                                                                     mScriptingHandle;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ScriptModuleGameTest::BaseScriptGameTestFunction>> mGameTestFunction;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptGameTestRegistrationBuilder& operator=(ScriptGameTestRegistrationBuilder const&);
    ScriptGameTestRegistrationBuilder(ScriptGameTestRegistrationBuilder const&);
    ScriptGameTestRegistrationBuilder();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ScriptGameTestRegistrationBuilder(
        std::shared_ptr<ScriptModuleGameTest::BaseScriptGameTestFunction>
#else // @header-generator platform
    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    batch(::std::string batchName);

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    maxAttempts(int maxAttempts);

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    maxTicks(int maxTicks);

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    padding(int blockPadding);

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    required(bool required);

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    requiredSuccessfulAttempts(int requiredSuccessfulAttempts);

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    rotate(bool rotate);

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    setupTicks(int setupTicks);

    MCAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>,
        ::Scripting::InvalidArgumentError,
        ::Scripting::EngineError>
    structureLocation(
        ::Vec3                                                                                       structureLocation,
        ::std::optional<::std::variant<::ScriptModuleMinecraft::ScriptDimensionType, ::std::string>> dimensionTypeVar
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptGameTestRegistrationBuilder(::ScriptModuleGameTest::ScriptGameTestRegistrationBuilder&&);
#else // @header-generator platform
    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    structureName(::std::string structureName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::StrongTypedObjectHandle<ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
        batch(std::string);

    MCNAPI ::Scripting::StrongTypedObjectHandle<ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    maxAttempts(int);

    MCNAPI ::Scripting::StrongTypedObjectHandle<ScriptModuleGameTest::ScriptGameTestRegistrationBuilder> maxTicks(int);

    MCNAPI ::ScriptModuleGameTest::ScriptGameTestRegistrationBuilder&
    operator=(::ScriptModuleGameTest::ScriptGameTestRegistrationBuilder&&);

    MCNAPI ::Scripting::StrongTypedObjectHandle<ScriptModuleGameTest::ScriptGameTestRegistrationBuilder> padding(int);

    MCNAPI ::Scripting::StrongTypedObjectHandle<ScriptModuleGameTest::ScriptGameTestRegistrationBuilder> required(bool);

    MCNAPI ::Scripting::StrongTypedObjectHandle<ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    requiredSuccessfulAttempts(int);

    MCNAPI ::Scripting::StrongTypedObjectHandle<ScriptModuleGameTest::ScriptGameTestRegistrationBuilder> rotate(bool);

    MCNAPI void setScriptObjectHandle(
        ::Scripting::WeakTypedObjectHandle<ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    );

    MCNAPI ::Scripting::StrongTypedObjectHandle<ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    setupTicks(int);

    MCNAPI ::Scripting::Result<
        Scripting::StrongTypedObjectHandle<ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>,
        Scripting::InvalidArgumentError,
        Scripting::EngineError>
        structureLocation(::Vec3, std::optional<std::variant<ScriptModuleMinecraft::ScriptDimensionType, std::string>>);

    MCNAPI ::Scripting::StrongTypedObjectHandle<ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
        structureName(std::string);

    MCNAPI ::Scripting::StrongTypedObjectHandle<ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
        tag(std::string);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<ScriptModuleGameTest::BaseScriptGameTestFunction>);

    MCNAPI void* $ctor(::ScriptModuleGameTest::ScriptGameTestRegistrationBuilder&&);
#else // @header-generator platform
    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    tag(::std::string tag);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
