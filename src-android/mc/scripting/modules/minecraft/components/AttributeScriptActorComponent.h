#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/ScriptActorComponent.h"

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

class AttributeScriptActorComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::reference_wrapper<const Attribute>> mSharedAttribute;
    // NOLINTEND

public:
    // prevent constructor by default
    AttributeScriptActorComponent& operator=(AttributeScriptActorComponent const&);
    AttributeScriptActorComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~AttributeScriptActorComponent();

    virtual bool _isValid() const;

    virtual ::Scripting::Result_deprecated<float> getCurrent() const;

    virtual ::Scripting::Result_deprecated<bool> setCurrent(float const&) const;

    virtual ::Scripting::Result<bool, ScriptModuleMinecraft::ScriptInvalidActorError, Scripting::ArgumentOutOfBoundsError> setCurrentV2(float const&) const;

    virtual ::Scripting::Result_deprecated<float> getValue() const;

    virtual ::Scripting::Result_deprecated<float> getEffectiveMinValue() const;

    virtual ::Scripting::Result_deprecated<float> getEffectiveMaxValue() const;

    virtual ::Scripting::Result_deprecated<void> resetToMinValue() const;

    virtual ::Scripting::Result_deprecated<void> resetToMaxValue() const;

    virtual ::Scripting::Result_deprecated<void> resetToDefaultValue() const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AttributeScriptActorComponent(
        ::WeakEntityRef const&,
        ::Scripting::WeakLifetimeScope const&,
        std::string const&,
        ::Attribute const&
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::WeakEntityRef const&, ::Scripting::WeakLifetimeScope const&, std::string const&, ::Attribute const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $_isValid() const;

    MCNAPI ::Scripting::Result_deprecated<float> $getCurrent() const;

    MCNAPI ::Scripting::Result_deprecated<bool> $setCurrent(float const&) const;

    MCNAPI ::Scripting::
        Result<bool, ScriptModuleMinecraft::ScriptInvalidActorError, Scripting::ArgumentOutOfBoundsError>
        $setCurrentV2(float const&) const;

    MCNAPI ::Scripting::Result_deprecated<float> $getValue() const;

    MCNAPI ::Scripting::Result_deprecated<float> $getEffectiveMinValue() const;

    MCNAPI ::Scripting::Result_deprecated<float> $getEffectiveMaxValue() const;

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
