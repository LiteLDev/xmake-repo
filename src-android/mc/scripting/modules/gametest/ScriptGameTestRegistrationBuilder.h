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
    ::ll::UntypedStorage<8, 32>                                                                  mScriptingHandle;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ScriptModuleGameTest::BaseScriptGameTestFunction>> mGameTestFunction;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptGameTestRegistrationBuilder& operator=(ScriptGameTestRegistrationBuilder const&);
    ScriptGameTestRegistrationBuilder(ScriptGameTestRegistrationBuilder const&);
    ScriptGameTestRegistrationBuilder();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptGameTestRegistrationBuilder(
        std::shared_ptr<ScriptModuleGameTest::BaseScriptGameTestFunction>
    );

    MCNAPI ScriptGameTestRegistrationBuilder(::ScriptModuleGameTest::ScriptGameTestRegistrationBuilder&&);

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
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
