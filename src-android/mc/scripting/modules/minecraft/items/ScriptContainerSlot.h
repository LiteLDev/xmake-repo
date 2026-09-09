#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft/ScriptContainerWrapper.h"
#include "mc/world/item/ItemContext.h"
#include "mc/world/item/ItemLockMode.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace ScriptModuleMinecraft { struct ScriptContainerRulesError; }
namespace ScriptModuleMinecraft { struct ScriptInvalidContainerSlotError; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct Error; }
namespace Scripting { struct UnsupportedAPIError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptContainerSlot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 232, ::ItemContext>                 mItemContext;
    ::ll::UntypedStorage<8, 40>                               mScriptContainerHandle;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptContainerSlot();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptContainerSlot(::ScriptModuleMinecraft::ScriptContainerSlot const&);

    MCNAPI ScriptContainerSlot(::ItemContext, ::Scripting::WeakLifetimeScope);

    MCNAPI ScriptContainerSlot(
        ::ItemContext,
        ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptContainerWrapper>,
        ::Scripting::WeakLifetimeScope
    );

    MCNAPI ::Scripting::Result<int, ScriptModuleMinecraft::ScriptInvalidContainerSlotError> getAmount() const;

    MCNAPI ::Scripting::Result<std::vector<std::string>, ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getCanDestroy() const;

    MCNAPI ::Scripting::Result<std::vector<std::string>, ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getCanPlaceOn() const;

    MCNAPI ::Scripting::Result<bool, ScriptModuleMinecraft::ScriptInvalidContainerSlotError> getKeepOnDeath() const;

    MCNAPI ::Scripting::Result<ItemLockMode, ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getLockMode() const;

    MCNAPI ::Scripting::Result<std::vector<std::string>, ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getLore() const;

    MCNAPI ::Scripting::Result<int, ScriptModuleMinecraft::ScriptInvalidContainerSlotError> getMaxAmount() const;

    MCNAPI ::Scripting::Result<std::optional<std::string>, ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getNameTag() const;

    MCNAPI ::Scripting::Result<std::vector<std::string>, ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getTags() const;

    MCNAPI ::Scripting::Result<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemType>,
        ScriptModuleMinecraft::ScriptInvalidContainerSlotError,
        Scripting::EngineError>
    getType() const;

    MCNAPI ::Scripting::Result<std::string, ScriptModuleMinecraft::ScriptInvalidContainerSlotError> getTypeId() const;

    MCNAPI ::Scripting::Result<bool, ScriptModuleMinecraft::ScriptInvalidContainerSlotError> isStackable() const;

    MCNAPI ::ScriptModuleMinecraft::ScriptContainerSlot& operator=(::ScriptModuleMinecraft::ScriptContainerSlot const&);

    MCNAPI ::Scripting::Result<void, ScriptModuleMinecraft::ScriptInvalidContainerSlotError, Scripting::Error>
    setCanDestroy(std::optional<std::vector<std::string>> const&);

    MCNAPI ::Scripting::Result<void, ScriptModuleMinecraft::ScriptInvalidContainerSlotError, Scripting::Error>
    setCanPlaceOn(std::optional<std::vector<std::string>> const&);

    MCNAPI ::Scripting::Result<
        void,
        ScriptModuleMinecraft::ScriptInvalidContainerSlotError,
        Scripting::ArgumentOutOfBoundsError,
        Scripting::UnsupportedAPIError>
    setDynamicProperty(
        ::Scripting::ContextConfig const&,
        std::string const&,
        std::optional<std::variant<double, float, bool, std::string, Vec3>> const&
    );

    MCNAPI ~ScriptContainerSlot();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptContainerSlot const&);

    MCNAPI void* $ctor(::ItemContext, ::Scripting::WeakLifetimeScope);

    MCNAPI void* $ctor(
        ::ItemContext,
        ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptContainerWrapper>,
        ::Scripting::WeakLifetimeScope
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
