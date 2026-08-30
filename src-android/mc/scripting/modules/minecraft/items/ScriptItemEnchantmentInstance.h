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
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemEnchantmentInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>   mEnchantType;
    ::ll::TypedStorage<4, 4, int> mLevel;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptItemEnchantmentInstance();

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
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemEnchantmentInstance const&);

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemEnchantmentInstance&&);

    MCNAPI void* $ctor(::Scripting::WeakLifetimeScope&, ::EnchantmentInstance const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
