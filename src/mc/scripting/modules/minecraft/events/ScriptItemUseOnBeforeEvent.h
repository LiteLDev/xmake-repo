#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptItemUseOnAfterEvent.h"

// auto generated forward declare list
// clang-format off
class Player;
struct ItemUseOnEvent;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemUseOnBeforeEvent : public ::ScriptModuleMinecraft::ScriptItemUseOnAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mCancel;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemUseOnBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptItemUseOnBeforeEvent(::ItemUseOnEvent const&, ::Player const&, ::Scripting::WeakLifetimeScope const&);
#else // @header-generator platform
    MCAPI ScriptItemUseOnBeforeEvent(
        ::ItemUseOnEvent const&               itemEvent,
        ::Player const&                       player,
        ::Scripting::WeakLifetimeScope const& scope
    );
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

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bindV010();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bindV010();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ItemUseOnEvent const&, ::Player const&, ::Scripting::WeakLifetimeScope const&);
#else // @header-generator platform
    MCAPI void*
    $ctor(::ItemUseOnEvent const& itemEvent, ::Player const& player, ::Scripting::WeakLifetimeScope const& scope);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
