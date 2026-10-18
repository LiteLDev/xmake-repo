#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/npc/ActionValue.h"
#include "mc/world/actor/npc/Button.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/npc/StoredCommand.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/actor/npc/action_mode/Enum.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace npc { struct StoredCommand; }
// clang-format on
#endif // @header-generator platform

namespace npc {

struct CommandAction {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 48, ::npc::ActionValue>              action;
    ::ll::TypedStorage<8, 48, ::npc::Button>                   button;
    ::ll::TypedStorage<1, 1, ::npc::_ActionMode::Enum>         mode;
    ::ll::TypedStorage<8, 24, std::vector<npc::StoredCommand>> commands;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::npc::ActionValue>                  action;
    ::ll::TypedStorage<8, 64, ::npc::Button>                       button;
    ::ll::TypedStorage<1, 1, ::npc::_ActionMode::Enum>             mode;
    ::ll::TypedStorage<8, 24, ::std::vector<::npc::StoredCommand>> commands;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    CommandAction& operator=(CommandAction const&);
    CommandAction(CommandAction const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator!=(::npc::CommandAction const&) const;
#else // @header-generator platform
    MCAPI bool operator!=(::npc::CommandAction const& rhs) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::npc::CommandAction const&) const;

    MCNAPI ~CommandAction();
#else // @header-generator platform
    MCAPI ~CommandAction();
#endif // @header-generator platform
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

} // namespace npc
