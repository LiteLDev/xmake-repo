#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/AttributeScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
class Attribute;
class WeakEntityRef;
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptHealthComponent : public ::ScriptModuleMinecraft::AttributeScriptActorComponent {
public:
    // prevent constructor by default
    ScriptHealthComponent& operator=(ScriptHealthComponent const&);
    ScriptHealthComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ScriptHealthComponent();

    virtual ::Scripting::Result_deprecated<bool> setCurrent(float const&) const;

    virtual ::Scripting::Result<bool, ScriptModuleMinecraft::ScriptInvalidActorError, Scripting::ArgumentOutOfBoundsError> setCurrentV2(float const&) const;

    virtual ::Scripting::Result_deprecated<void> resetToMinValue() const;

    virtual ::Scripting::Result_deprecated<void> resetToMaxValue() const;

    virtual ::Scripting::Result_deprecated<void> resetToDefaultValue() const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void notifyHealthChange(float const, float const) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const*& ComponentId();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<bool> $setCurrent(float const&) const;

    MCNAPI ::Scripting::
        Result<bool, ScriptModuleMinecraft::ScriptInvalidActorError, Scripting::ArgumentOutOfBoundsError>
        $setCurrentV2(float const&) const;

    MCNAPI ::Scripting::Result_deprecated<void> $resetToMinValue() const;

    MCNAPI ::Scripting::Result_deprecated<void> $resetToMaxValue() const;

    MCNAPI ::Scripting::Result_deprecated<void> $resetToDefaultValue() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
