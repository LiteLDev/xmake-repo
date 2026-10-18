#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class EnchantmentInstance;
class ItemEnchants;
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentLevelOutOfBoundsError; }
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentType; }
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentTypeNotCompatibleError; }
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentUnknownIdError; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemEnchantmentInstance {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32>   mEnchantType;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemEnchantmentType>>
                                  mEnchantType;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, int> mLevel;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptItemEnchantmentInstance();
#else // @header-generator platform
    MCAPI ::std::variant<
        ::EnchantmentInstance,
        ::ScriptModuleMinecraft::ScriptItemEnchantmentLevelOutOfBoundsError,
        ::ScriptModuleMinecraft::ScriptItemEnchantmentUnknownIdError,
        ::ScriptModuleMinecraft::ScriptItemEnchantmentTypeNotCompatibleError>
    tryResolveInstance(::ItemEnchants& itemEnchants) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptItemEnchantmentInstance(::ScriptModuleMinecraft::ScriptItemEnchantmentInstance const&);

    MCNAPI ScriptItemEnchantmentInstance(::ScriptModuleMinecraft::ScriptItemEnchantmentInstance&&);

    MCNAPI ScriptItemEnchantmentInstance(::Scripting::WeakLifetimeScope&, ::EnchantmentInstance const&);

    MCNAPI ::ScriptModuleMinecraft::ScriptItemEnchantmentInstance&
    operator=(::ScriptModuleMinecraft::ScriptItemEnchantmentInstance const&);

    MCNAPI ::ScriptModuleMinecraft::ScriptItemEnchantmentInstance&
    operator=(::ScriptModuleMinecraft::ScriptItemEnchantmentInstance&&);

    MCNAPI std::variant<
        EnchantmentInstance,
        ScriptModuleMinecraft::ScriptItemEnchantmentLevelOutOfBoundsError,
        ScriptModuleMinecraft::ScriptItemEnchantmentUnknownIdError,
        ScriptModuleMinecraft::ScriptItemEnchantmentTypeNotCompatibleError>
    tryResolveInstance(::ItemEnchants&) const;

    MCNAPI ~ScriptItemEnchantmentInstance();
#else // @header-generator platform
    MCAPI ~ScriptItemEnchantmentInstance();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemEnchantmentInstance const&);

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemEnchantmentInstance&&);

    MCNAPI void* $ctor(::Scripting::WeakLifetimeScope&, ::EnchantmentInstance const&);
#else // @header-generator platform
    MCAPI static ::Scripting::InterfaceBinding bind();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
