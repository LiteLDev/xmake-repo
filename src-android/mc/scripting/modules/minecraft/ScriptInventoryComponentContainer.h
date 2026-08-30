#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/ScriptContainer.h"

// auto generated forward declare list
// clang-format off
class Container;
class FillingContainer;
class ItemContext;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptInventoryComponentContainer : public ::ScriptModuleMinecraft::ScriptContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mEntityRef;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptInventoryComponentContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptInventoryComponentContainer();

    virtual ::Scripting::Result_deprecated<int> getEmptySlotsCount() const;

    virtual ::Container* _tryGetContainer() const;

    virtual ::ItemContext _getItemContext(int) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptInventoryComponentContainer(::WeakEntityRef const&, ::Scripting::WeakLifetimeScope const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindV010();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::WeakEntityRef const&, ::Scripting::WeakLifetimeScope const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<int> $getEmptySlotsCount() const;

    MCNAPI ::Container* $_tryGetContainer() const;

    MCNAPI ::ItemContext $_getItemContext(int) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
