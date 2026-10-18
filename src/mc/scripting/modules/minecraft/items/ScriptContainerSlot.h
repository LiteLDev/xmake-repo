#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/ScriptContainerWrapper.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/item/ItemContext.h"
#include "mc/world/item/ItemLockMode.h"

// auto generated forward declare list
// clang-format off
class Vec3;
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptItemStack; }
#else // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptContainerWrapper; }
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptItemType; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptContainerRulesError; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptInvalidContainerSlotError; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 232, ::ItemContext>                 mItemContext;
    ::ll::UntypedStorage<8, 40>                               mScriptContainerHandle;
#else // @header-generator platform
    ::ll::TypedStorage<8, 232, ::ItemContext> mItemContext;
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptContainerWrapper>>>
                                                              mScriptContainerHandle;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptContainerSlot& operator=(ScriptContainerSlot const&);
#endif // @header-generator platform
    ScriptContainerSlot();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptContainerSlot(::ScriptModuleMinecraft::ScriptContainerSlot const&);
#else // @header-generator platform
    MCAPI ScriptContainerSlot(::ScriptModuleMinecraft::ScriptContainerSlot const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptContainerSlot(::ItemContext, ::Scripting::WeakLifetimeScope);
#else // @header-generator platform
    MCAPI ScriptContainerSlot(::ItemContext itemContext, ::Scripting::WeakLifetimeScope scope);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptContainerSlot(
        ::ItemContext,
        ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptContainerWrapper>,
        ::Scripting::WeakLifetimeScope
#else // @header-generator platform
    MCAPI ScriptContainerSlot(
        ::ItemContext                                                                         itemContext,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptContainerWrapper> scriptContainerHandle,
        ::Scripting::WeakLifetimeScope                                                        scope
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<int, ScriptModuleMinecraft::ScriptInvalidContainerSlotError> getAmount() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result<int, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError> getAmount() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<std::vector<std::string>, ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
#else // @header-generator platform
    MCAPI ::Scripting::Result<::std::vector<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
#endif // @header-generator platform
    getCanDestroy() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<std::vector<std::string>, ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
#else // @header-generator platform
    MCAPI ::Scripting::Result<::std::vector<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
#endif // @header-generator platform
    getCanPlaceOn() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<bool, ScriptModuleMinecraft::ScriptInvalidContainerSlotError> getKeepOnDeath() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError> getKeepOnDeath() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<ItemLockMode, ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
#else // @header-generator platform
    MCAPI ::Scripting::Result<::ItemLockMode, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
#endif // @header-generator platform
    getLockMode() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<std::vector<std::string>, ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
#else // @header-generator platform
    MCAPI ::Scripting::Result<::std::vector<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
#endif // @header-generator platform
    getLore() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<int, ScriptModuleMinecraft::ScriptInvalidContainerSlotError> getMaxAmount() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result<int, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError> getMaxAmount() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<std::optional<std::string>, ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
#else // @header-generator platform
    MCAPI ::Scripting::Result<::std::optional<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
#endif // @header-generator platform
    getNameTag() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<std::vector<std::string>, ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
#else // @header-generator platform
    MCAPI ::Scripting::Result<::std::vector<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
#endif // @header-generator platform
    getTags() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemType>,
        ScriptModuleMinecraft::ScriptInvalidContainerSlotError,
        Scripting::EngineError>
#else // @header-generator platform
    MCAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>,
        ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError,
        ::Scripting::EngineError>
#endif // @header-generator platform
    getType() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<std::string, ScriptModuleMinecraft::ScriptInvalidContainerSlotError> getTypeId() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result<::std::string, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getTypeId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<bool, ScriptModuleMinecraft::ScriptInvalidContainerSlotError> isStackable() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError> isStackable() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScriptModuleMinecraft::ScriptContainerSlot& operator=(::ScriptModuleMinecraft::ScriptContainerSlot const&);
#else // @header-generator platform
    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError, ::Scripting::Error>
    setCanDestroy(::std::optional<::std::vector<::std::string>> const& blockIdentifiers);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<void, ScriptModuleMinecraft::ScriptInvalidContainerSlotError, Scripting::Error>
    setCanDestroy(std::optional<std::vector<std::string>> const&);
#else // @header-generator platform
    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError, ::Scripting::Error>
    setCanPlaceOn(::std::optional<::std::vector<::std::string>> const& blockIdentifiers);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<void, ScriptModuleMinecraft::ScriptInvalidContainerSlotError, Scripting::Error>
    setCanPlaceOn(std::optional<std::vector<std::string>> const&);

    MCNAPI ::Scripting::Result<
#else // @header-generator platform
    MCAPI ::Scripting::Result<
#endif // @header-generator platform
        void,
#if defined(LL_PLAT_A) // @header-generator platform
        ScriptModuleMinecraft::ScriptInvalidContainerSlotError,
        Scripting::ArgumentOutOfBoundsError,
        Scripting::UnsupportedAPIError>
#else // @header-generator platform
        ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError,
        ::Scripting::ArgumentOutOfBoundsError,
        ::Scripting::UnsupportedAPIError>
#endif // @header-generator platform
    setDynamicProperty(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Scripting::ContextConfig const&,
        std::string const&,
        std::optional<std::variant<double, float, bool, std::string, Vec3>> const&
#else // @header-generator platform
        ::Scripting::ContextConfig const&                                                  contextConfig,
        ::std::string const&                                                               key,
        ::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>> const& optionalValue
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ScriptContainerSlot();
#else // @header-generator platform
    MCAPI ~ScriptContainerSlot();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptContainerSlot const&);
#else // @header-generator platform
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptContainerSlot const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ItemContext, ::Scripting::WeakLifetimeScope);
#else // @header-generator platform
    MCAPI void* $ctor(::ItemContext itemContext, ::Scripting::WeakLifetimeScope scope);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::ItemContext,
        ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptContainerWrapper>,
        ::Scripting::WeakLifetimeScope
#else // @header-generator platform
    MCAPI void* $ctor(
        ::ItemContext                                                                         itemContext,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptContainerWrapper> scriptContainerHandle,
        ::Scripting::WeakLifetimeScope                                                        scope
#endif // @header-generator platform
    );
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
