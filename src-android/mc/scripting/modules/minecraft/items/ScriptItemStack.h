#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/items/components/ScriptItemComponent.h"
#include "mc/world/item/ItemInstance.h"
#include "mc/world/item/ItemLockMode.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptItemComponents; }
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct Error; }
namespace Scripting { struct UnsupportedAPIError; }
namespace Scripting { struct Version; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemStack {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::ItemInstance>                mItemInstance;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::UntypedStorage<8, 32>                               mScriptStack;
    ::ll::UntypedStorage<8, 32>                               mItemType;
    ::ll::UntypedStorage<8, 40>                               mAttachedComponents;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemStack();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptItemStack(
        ::Scripting::WeakLifetimeScope&,
        ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemType> const&,
        int,
        int
    );

    MCNAPI ::Scripting::Result<void, Scripting::ArgumentOutOfBoundsError, Scripting::UnsupportedAPIError>
    _validateDynamicProperty(std::string const&, std::variant<double, float, bool, std::string, Vec3> const&) const;

    MCNAPI std::vector<std::string> getCanDestroy() const;

    MCNAPI std::vector<std::string> getCanPlaceOn() const;

    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemComponent>>
           getComponent(std::shared_ptr<ScriptModuleMinecraft::ScriptItemComponents>, std::string_view, bool);

    MCNAPI std::vector<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemComponent>>
           getComponents(std::shared_ptr<ScriptModuleMinecraft::ScriptItemComponents>, bool);

    MCNAPI ::Scripting::Result<std::string, Scripting::EngineError> getLocalizationKey() const;

    MCNAPI std::vector<std::string> getLore() const;

    MCNAPI std::vector<std::string> getTags() const;

    MCNAPI ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemType> getType() const;

    MCNAPI ::Scripting::Result_deprecated<void> setCanDestroy(std::optional<std::vector<std::string>> const&);

    MCNAPI ::Scripting::Result_deprecated<void> setCanPlaceOn(std::optional<std::vector<std::string>> const&);

    MCNAPI ::Scripting::Result<void, Scripting::ArgumentOutOfBoundsError, Scripting::UnsupportedAPIError>
    setDynamicProperty(
        ::Scripting::ContextConfig const&,
        std::string const&,
        std::optional<std::variant<double, float, bool, std::string, Vec3>> const&
    );

    MCNAPI ~ScriptItemStack();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding
    bind(std::shared_ptr<ScriptModuleMinecraft::ScriptItemComponents>&, ::Scripting::Version const&);

    MCNAPI static ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemStack>
    createHandle(::Scripting::WeakLifetimeScope, ::ItemStackBase const&);

    MCNAPI static std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemStack>>
    createOptionalHandle(::Scripting::WeakLifetimeScope, ::ItemStackBase const&);

    MCNAPI static std::vector<ScriptModuleMinecraft::ScriptRawMessageInterface>
        createRawLoreVector(std::vector<std::string>);

    MCNAPI static std::optional<std::vector<std::string>> tryCreateLoreVector(
        std::vector<std::variant<std::string, ScriptModuleMinecraft::ScriptRawMessageInterface>> const&,
        std::string&
    );

    MCNAPI static std::optional<Scripting::ArgumentOutOfBoundsError>
    validateLoreLength(std::vector<std::string> const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ulong const& MAX_NAME_TAG_LENGTH();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Scripting::WeakLifetimeScope&,
        ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemType> const&,
        int,
        int
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
