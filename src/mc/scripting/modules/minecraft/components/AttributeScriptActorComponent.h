#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/ScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
class Attribute;
#if defined(LL_PLAT_A) // @header-generator platform
class WeakEntityRef;
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class AttributeScriptActorComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::reference_wrapper<const Attribute>> mSharedAttribute;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::Attribute const>> mSharedAttribute;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    AttributeScriptActorComponent& operator=(AttributeScriptActorComponent const&);
    AttributeScriptActorComponent();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~AttributeScriptActorComponent();

    virtual bool _isValid() const;
#else // @header-generator platform
    virtual ~AttributeScriptActorComponent() /*override*/ = default;
#endif // @header-generator platform

    virtual ::Scripting::Result_deprecated<float> getCurrent() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::Result_deprecated<bool> setCurrent(float const&) const;
#else // @header-generator platform
    virtual ::Scripting::Result_deprecated<bool> setCurrent(float const& value) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::Result<bool, ScriptModuleMinecraft::ScriptInvalidActorError, Scripting::ArgumentOutOfBoundsError> setCurrentV2(float const&) const;
#else // @header-generator platform
    virtual ::Scripting::
        Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::ArgumentOutOfBoundsError>
        setCurrentV2(float const& value) const;
#endif // @header-generator platform

    virtual ::Scripting::Result_deprecated<float> getValue() const;

    virtual ::Scripting::Result_deprecated<float> getEffectiveMinValue() const;

    virtual ::Scripting::Result_deprecated<float> getEffectiveMaxValue() const;

    virtual ::Scripting::Result_deprecated<void> resetToMinValue() const;

    virtual ::Scripting::Result_deprecated<void> resetToMaxValue() const;

    virtual ::Scripting::Result_deprecated<void> resetToDefaultValue() const;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AttributeScriptActorComponent(
        ::WeakEntityRef const&,
        ::Scripting::WeakLifetimeScope const&,
        std::string const&,
        ::Attribute const&
    );
#else // @header-generator platform
    virtual bool _isValid() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_isValid() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<float> $getCurrent() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<float> $getCurrent() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool> $setCurrent(float const& value) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<bool> $setCurrent(float const&) const;
#else // @header-generator platform
    MCAPI ::Scripting::
        Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::ArgumentOutOfBoundsError>
        $setCurrentV2(float const& value) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::
        Result<bool, ScriptModuleMinecraft::ScriptInvalidActorError, Scripting::ArgumentOutOfBoundsError>
        $setCurrentV2(float const&) const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<float> $getValue() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<float> $getValue() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<float> $getEffectiveMinValue() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<float> $getEffectiveMinValue() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<float> $getEffectiveMaxValue() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<float> $getEffectiveMaxValue() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<void> $resetToMinValue() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<void> $resetToMinValue() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<void> $resetToMaxValue() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<void> $resetToMaxValue() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<void> $resetToDefaultValue() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<void> $resetToDefaultValue() const;
#else // @header-generator platform
    MCAPI bool $_isValid() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
