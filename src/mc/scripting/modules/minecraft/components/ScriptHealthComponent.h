#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/AttributeScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Attribute;
class WeakEntityRef;
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct ArgumentOutOfBoundsError; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { struct ClassBinding; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptHealthComponent : public ::ScriptModuleMinecraft::AttributeScriptActorComponent {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ScriptHealthComponent& operator=(ScriptHealthComponent const&);
    ScriptHealthComponent();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ScriptHealthComponent();
#else // @header-generator platform
    virtual ::Scripting::Result_deprecated<bool> setCurrent(float const& value) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::Result_deprecated<bool> setCurrent(float const&) const;
#else // @header-generator platform
    virtual ::Scripting::
        Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::ArgumentOutOfBoundsError>
        setCurrentV2(float const& value) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::Result<bool, ScriptModuleMinecraft::ScriptInvalidActorError, Scripting::ArgumentOutOfBoundsError> setCurrentV2(float const&) const;
#else // @header-generator platform
    virtual ::Scripting::Result_deprecated<void> resetToMinValue() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::Result_deprecated<void> resetToMinValue() const;
#else // @header-generator platform
    virtual ::Scripting::Result_deprecated<void> resetToMaxValue() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::Result_deprecated<void> resetToMaxValue() const;

    virtual ::Scripting::Result_deprecated<void> resetToDefaultValue() const;
    // clang-format on
#else // @header-generator platform
    virtual ::Scripting::Result_deprecated<void> resetToDefaultValue() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void notifyHealthChange(float const oldValue, float const newValue) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<bool> $setCurrent(float const&) const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool> $setCurrent(float const& value) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::
        Result<bool, ScriptModuleMinecraft::ScriptInvalidActorError, Scripting::ArgumentOutOfBoundsError>
        $setCurrentV2(float const&) const;
#else // @header-generator platform
    MCAPI ::Scripting::
        Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::ArgumentOutOfBoundsError>
        $setCurrentV2(float const& value) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<void> $resetToMinValue() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<void> $resetToMinValue() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<void> $resetToMaxValue() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<void> $resetToMaxValue() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<void> $resetToDefaultValue() const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<void> $resetToDefaultValue() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
