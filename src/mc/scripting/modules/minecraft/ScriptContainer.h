#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/ScriptContainerRules.h"

// auto generated forward declare list
// clang-format off
class Container;
class ItemContext;
namespace ScriptModuleMinecraft { class ScriptContainerSlot; }
namespace ScriptModuleMinecraft { class ScriptContainerWrapper; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { struct ScriptContainerRulesError; }
namespace ScriptModuleMinecraft { struct ScriptInvalidContainerError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptContainer {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 72, std::optional<ScriptModuleMinecraft::ScriptContainerRules>> mContainerRules;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>                             mScope;
#else // @header-generator platform
    ::ll::TypedStorage<8, 72, ::std::optional<::ScriptModuleMinecraft::ScriptContainerRules>> mContainerRules;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>                                 mScope;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptContainer();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ScriptContainer();
#else // @header-generator platform
    virtual ~ScriptContainer() = default;
#endif // @header-generator platform

    virtual ::Scripting::Result_deprecated<int> getSize() const;

    virtual ::Scripting::Result_deprecated<int> getEmptySlotsCount() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::Result_deprecated<void> setItemV010(int, ::ScriptModuleMinecraft::ScriptItemStack const&) const;
#else // @header-generator platform
    virtual ::Scripting::Result_deprecated<void>
    setItemV010(int slot, ::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::Result<void, ScriptModuleMinecraft::ScriptContainerRulesError, Scripting::Error> setItem(int, std::optional<ScriptModuleMinecraft::ScriptItemStack> const&) const;
#else // @header-generator platform
    virtual ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptContainerRulesError, ::Scripting::Error>
    setItem(int slot, ::std::optional<::ScriptModuleMinecraft::ScriptItemStack> const& scriptItemStack) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::Result_deprecated<std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemStack>>> getItemV010(int) const;
#else // @header-generator platform
    virtual ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
    getItemV010(int slot) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::Result_deprecated<std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemStack>>> getItem(int) const;
#else // @header-generator platform
    virtual ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
    getItem(int slot) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::Result_deprecated<void> addItemV010(::ScriptModuleMinecraft::ScriptItemStack const&) const;
#else // @header-generator platform
    virtual ::Scripting::Result_deprecated<void>
    addItemV010(::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::Result_deprecated<bool> transferItemV010(int, int, ::ScriptModuleMinecraft::ScriptContainer&) const;
#else // @header-generator platform
    virtual ::Scripting::Result_deprecated<bool>
    transferItemV010(int fromSlot, int toSlot, ::ScriptModuleMinecraft::ScriptContainer& toScriptContainer) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::Result<void, ScriptModuleMinecraft::ScriptContainerRulesError, Scripting::Error> moveItem(int, int, ::ScriptModuleMinecraft::ScriptContainerWrapper&) const;
#else // @header-generator platform
    virtual ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptContainerRulesError, ::Scripting::Error>
    moveItem(int fromSlot, int toSlot, ::ScriptModuleMinecraft::ScriptContainerWrapper& toScriptContainer) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::Result_deprecated<bool> swapItemsV010(int, int, ::ScriptModuleMinecraft::ScriptContainer&) const;
#else // @header-generator platform
    virtual ::Scripting::Result_deprecated<bool>
    swapItemsV010(int slot, int otherSlot, ::ScriptModuleMinecraft::ScriptContainer& otherScriptContainer) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::Result<void, ScriptModuleMinecraft::ScriptContainerRulesError, Scripting::Error> swapItems(int, int, ::ScriptModuleMinecraft::ScriptContainerWrapper&) const;
#else // @header-generator platform
    virtual ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptContainerRulesError, ::Scripting::Error>
    swapItems(int slot, int otherSlot, ::ScriptModuleMinecraft::ScriptContainerWrapper& otherScriptContainer) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::Result_deprecated<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptContainerSlot>> getSlot(int, ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptContainerWrapper>);
#else // @header-generator platform
    virtual ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptContainerSlot>>
    getSlot(
        int slot,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptContainerWrapper>
            scriptContainerWrapperHandle
    );
#endif // @header-generator platform

    virtual ::Scripting::Result_deprecated<void> clearAll() const;

    virtual ::Container* _tryGetContainer() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemContext _getItemContext(int) const = 0;
    // clang-format on
#else // @header-generator platform
    virtual ::ItemContext _getItemContext(int slot) const = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ScriptContainer(::Scripting::WeakLifetimeScope const&);
#else // @header-generator platform
    MCAPI ::Scripting::Result<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>,
        ::ScriptModuleMinecraft::ScriptContainerRulesError,
        ::Scripting::Error>
    addItem(::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<
        std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemStack>>,
        ScriptModuleMinecraft::ScriptContainerRulesError,
        Scripting::Error>
    addItem(::ScriptModuleMinecraft::ScriptItemStack const&) const;

    MCNAPI ::Scripting::Result<int, ScriptModuleMinecraft::ScriptInvalidContainerError> getWeight() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result<int, ::ScriptModuleMinecraft::ScriptInvalidContainerError> getWeight() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<Scripting::Error> _isSlotBeyondMaxCapacity(::Container&, int);
#else // @header-generator platform
    MCAPI static ::std::optional<::Scripting::Error> _isSlotBeyondMaxCapacity(::Container& container, int slot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<Scripting::Error> _isSlotInvalid(::Container&, int);
#else // @header-generator platform
    MCAPI static ::std::optional<::Scripting::Error> _isSlotInvalid(::Container& container, int slot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::WeakLifetimeScope const&);
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
    MCNAPI ::Scripting::Result_deprecated<int> $getSize() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<int> $getSize() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<int> $getEmptySlotsCount() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<int> $getEmptySlotsCount() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<void>
    $setItemV010(int, ::ScriptModuleMinecraft::ScriptItemStack const&) const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<void>
    $setItemV010(int slot, ::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<void, ScriptModuleMinecraft::ScriptContainerRulesError, Scripting::Error>
    $setItem(int, std::optional<ScriptModuleMinecraft::ScriptItemStack> const&) const;
#else // @header-generator platform
    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptContainerRulesError, ::Scripting::Error>
    $setItem(int slot, ::std::optional<::ScriptModuleMinecraft::ScriptItemStack> const& scriptItemStack) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<
        std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemStack>>>
    $getItemV010(int) const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
    $getItemV010(int slot) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<
        std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemStack>>>
    $getItem(int) const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
    $getItem(int slot) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<void> $addItemV010(::ScriptModuleMinecraft::ScriptItemStack const&) const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<void>
    $addItemV010(::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<bool>
    $transferItemV010(int, int, ::ScriptModuleMinecraft::ScriptContainer&) const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool>
    $transferItemV010(int fromSlot, int toSlot, ::ScriptModuleMinecraft::ScriptContainer& toScriptContainer) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<void, ScriptModuleMinecraft::ScriptContainerRulesError, Scripting::Error>
    $moveItem(int, int, ::ScriptModuleMinecraft::ScriptContainerWrapper&) const;
#else // @header-generator platform
    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptContainerRulesError, ::Scripting::Error>
    $moveItem(int fromSlot, int toSlot, ::ScriptModuleMinecraft::ScriptContainerWrapper& toScriptContainer) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<bool>
    $swapItemsV010(int, int, ::ScriptModuleMinecraft::ScriptContainer&) const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool>
    $swapItemsV010(int slot, int otherSlot, ::ScriptModuleMinecraft::ScriptContainer& otherScriptContainer) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<void, ScriptModuleMinecraft::ScriptContainerRulesError, Scripting::Error>
    $swapItems(int, int, ::ScriptModuleMinecraft::ScriptContainerWrapper&) const;
#else // @header-generator platform
    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptContainerRulesError, ::Scripting::Error>
    $swapItems(int slot, int otherSlot, ::ScriptModuleMinecraft::ScriptContainerWrapper& otherScriptContainer) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptContainerSlot>>
    $getSlot(int, ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptContainerWrapper>);
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptContainerSlot>>
    $getSlot(
        int slot,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptContainerWrapper>
            scriptContainerWrapperHandle
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<void> $clearAll() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<void> $clearAll() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
