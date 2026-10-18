#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/items/components/ScriptItemComponent.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/item/ItemInstance.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/ItemLockMode.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class ItemStackBase;
class Vec3;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptItemComponent; }
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptItemComponents; }
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct EngineError; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { struct Error; }
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32>                               mScriptStack;
    ::ll::UntypedStorage<8, 32>                               mItemType;
    ::ll::UntypedStorage<8, 40>                               mAttachedComponents;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>
        mScriptStack;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>> mItemType;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemComponent>>>
        mAttachedComponents;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptItemStack(ScriptItemStack const&);
#endif // @header-generator platform
    ScriptItemStack();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptItemStack(
        ::Scripting::WeakLifetimeScope&,
        ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemType> const&,
        int,
        int
#else // @header-generator platform
    MCAPI ScriptItemStack(
        ::Scripting::WeakLifetimeScope&                                                      scope,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType> const& itemTypeHandle,
        int                                                                                  amount,
        int                                                                                  data
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<void, Scripting::ArgumentOutOfBoundsError, Scripting::UnsupportedAPIError>
    _validateDynamicProperty(std::string const&, std::variant<double, float, bool, std::string, Vec3> const&) const;
#else // @header-generator platform
    MCAPI ::Scripting::Result<void, ::Scripting::ArgumentOutOfBoundsError, ::Scripting::UnsupportedAPIError>
    _validateDynamicProperty(
        ::std::string const&                                              key,
        ::std::variant<double, float, bool, ::std::string, ::Vec3> const& value
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::string> getCanDestroy() const;
#else // @header-generator platform
    MCAPI ::std::vector<::std::string> getCanDestroy() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::string> getCanPlaceOn() const;
#else // @header-generator platform
    MCAPI ::std::vector<::std::string> getCanPlaceOn() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemComponent>>
    getComponent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemComponents> components,
        ::std::string_view                                               id,
        bool                                                             includeCustom
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ScriptItemStack();
#else // @header-generator platform
    MCAPI ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemComponent>>
    getComponents(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemComponents> components, bool includeCustom);

    MCAPI ::Scripting::Result<::std::string, ::Scripting::EngineError> getLocalizationKey() const;

    MCAPI ::std::vector<::std::string> getLore() const;

    MCAPI ::std::optional<::std::string> getNameTag() const;

    MCAPI ::std::vector<::std::string> getTags() const;

    MCAPI ::std::string getTypeId() const;

    MCAPI ::ScriptModuleMinecraft::ScriptItemStack& operator=(::ScriptModuleMinecraft::ScriptItemStack const&);

    MCAPI ::Scripting::Result_deprecated<void>
    setCanDestroy(::std::optional<::std::vector<::std::string>> const& blockIdentifiers);

    MCAPI ::Scripting::Result_deprecated<void>
    setCanPlaceOn(::std::optional<::std::vector<::std::string>> const& blockIdentifiers);

    MCAPI ::Scripting::Result<void, ::Scripting::ArgumentOutOfBoundsError, ::Scripting::UnsupportedAPIError>
    setDynamicProperty(
        ::Scripting::ContextConfig const&                                                  contextConfig,
        ::std::string const&                                                               key,
        ::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>> const& optionalValue
    );

    MCAPI ~ScriptItemStack();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemComponents>& itemComponents,
        ::Scripting::Version const&                                       version
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<Scripting::ArgumentOutOfBoundsError>
    validateLoreLength(std::vector<std::string> const&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>
    createHandle(::Scripting::WeakLifetimeScope scope, ::ItemStackBase const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ulong const& MAX_NAME_TAG_LENGTH();
#else // @header-generator platform
    MCAPI static ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>
    createOptionalHandle(::Scripting::WeakLifetimeScope scope, ::ItemStackBase const& item);

    MCAPI static ::std::vector<::ScriptModuleMinecraft::ScriptRawMessageInterface>
    createRawLoreVector(::std::vector<::std::string> lore);

    MCAPI static ::std::optional<::std::vector<::std::string>> tryCreateLoreVector(
        ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>> const&
                       loreVariantList,
        ::std::string& errorMessage
    );

    MCAPI static ::std::optional<::Scripting::ArgumentOutOfBoundsError>
    validateLoreLength(::std::vector<::std::string> const& loreList);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::Scripting::WeakLifetimeScope&,
        ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemType> const&,
        int,
        int
#else // @header-generator platform
    MCAPI void* $ctor(
        ::Scripting::WeakLifetimeScope&                                                      scope,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType> const& itemTypeHandle,
        int                                                                                  amount,
        int                                                                                  data
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
