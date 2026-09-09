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
    ::ll::TypedStorage<8, 72, std::optional<ScriptModuleMinecraft::ScriptContainerRules>> mContainerRules;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>                             mScope;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ScriptContainer();

    virtual ::Scripting::Result_deprecated<int> getSize() const;

    virtual ::Scripting::Result_deprecated<int> getEmptySlotsCount() const;

    virtual ::Scripting::Result_deprecated<void> setItemV010(int, ::ScriptModuleMinecraft::ScriptItemStack const&) const;

    virtual ::Scripting::Result<void, ScriptModuleMinecraft::ScriptContainerRulesError, Scripting::Error> setItem(int, std::optional<ScriptModuleMinecraft::ScriptItemStack> const&) const;

    virtual ::Scripting::Result_deprecated<std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemStack>>> getItemV010(int) const;

    virtual ::Scripting::Result_deprecated<std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemStack>>> getItem(int) const;

    virtual ::Scripting::Result_deprecated<void> addItemV010(::ScriptModuleMinecraft::ScriptItemStack const&) const;

    virtual ::Scripting::Result_deprecated<bool> transferItemV010(int, int, ::ScriptModuleMinecraft::ScriptContainer&) const;

    virtual ::Scripting::Result<void, ScriptModuleMinecraft::ScriptContainerRulesError, Scripting::Error> moveItem(int, int, ::ScriptModuleMinecraft::ScriptContainerWrapper&) const;

    virtual ::Scripting::Result_deprecated<bool> swapItemsV010(int, int, ::ScriptModuleMinecraft::ScriptContainer&) const;

    virtual ::Scripting::Result<void, ScriptModuleMinecraft::ScriptContainerRulesError, Scripting::Error> swapItems(int, int, ::ScriptModuleMinecraft::ScriptContainerWrapper&) const;

    virtual ::Scripting::Result_deprecated<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptContainerSlot>> getSlot(int, ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptContainerWrapper>);

    virtual ::Scripting::Result_deprecated<void> clearAll() const;

    virtual ::Container* _tryGetContainer() const = 0;

    virtual ::ItemContext _getItemContext(int) const = 0;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptContainer(::Scripting::WeakLifetimeScope const&);

    MCNAPI ::Scripting::Result<
        std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemStack>>,
        ScriptModuleMinecraft::ScriptContainerRulesError,
        Scripting::Error>
    addItem(::ScriptModuleMinecraft::ScriptItemStack const&) const;

    MCNAPI ::Scripting::Result<int, ScriptModuleMinecraft::ScriptInvalidContainerError> getWeight() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::optional<Scripting::Error> _isSlotBeyondMaxCapacity(::Container&, int);

    MCNAPI static std::optional<Scripting::Error> _isSlotInvalid(::Container&, int);

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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<int> $getSize() const;

    MCNAPI ::Scripting::Result_deprecated<int> $getEmptySlotsCount() const;

    MCNAPI ::Scripting::Result_deprecated<void>
    $setItemV010(int, ::ScriptModuleMinecraft::ScriptItemStack const&) const;

    MCNAPI ::Scripting::Result<void, ScriptModuleMinecraft::ScriptContainerRulesError, Scripting::Error>
    $setItem(int, std::optional<ScriptModuleMinecraft::ScriptItemStack> const&) const;

    MCNAPI ::Scripting::Result_deprecated<
        std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemStack>>>
    $getItemV010(int) const;

    MCNAPI ::Scripting::Result_deprecated<
        std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemStack>>>
    $getItem(int) const;

    MCNAPI ::Scripting::Result_deprecated<void> $addItemV010(::ScriptModuleMinecraft::ScriptItemStack const&) const;

    MCNAPI ::Scripting::Result_deprecated<bool>
    $transferItemV010(int, int, ::ScriptModuleMinecraft::ScriptContainer&) const;

    MCNAPI ::Scripting::Result<void, ScriptModuleMinecraft::ScriptContainerRulesError, Scripting::Error>
    $moveItem(int, int, ::ScriptModuleMinecraft::ScriptContainerWrapper&) const;

    MCNAPI ::Scripting::Result_deprecated<bool>
    $swapItemsV010(int, int, ::ScriptModuleMinecraft::ScriptContainer&) const;

    MCNAPI ::Scripting::Result<void, ScriptModuleMinecraft::ScriptContainerRulesError, Scripting::Error>
    $swapItems(int, int, ::ScriptModuleMinecraft::ScriptContainerWrapper&) const;

    MCNAPI ::Scripting::Result_deprecated<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptContainerSlot>>
    $getSlot(int, ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptContainerWrapper>);

    MCNAPI ::Scripting::Result_deprecated<void> $clearAll() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
