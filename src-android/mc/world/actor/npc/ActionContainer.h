#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/npc/CommandAction.h"
#include "mc/world/actor/npc/UrlAction.h"

namespace npc {

struct ActionContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::variant<npc::CommandAction, npc::UrlAction>>> mActions;
    ::ll::TypedStorage<8, 24, std::vector<ulong>>                                            mButtons;
    // NOLINTEND

public:
    // prevent constructor by default
    ActionContainer& operator=(ActionContainer const&);
    ActionContainer(ActionContainer const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::variant<npc::CommandAction, npc::UrlAction> const* at(ulong) const;

    MCNAPI std::variant<npc::CommandAction, npc::UrlAction>* at(ulong);

    MCNAPI ulong countButtons() const;

    MCNAPI ulong countUrl() const;

    MCNAPI void push(std::variant<npc::CommandAction, npc::UrlAction>&&);

    MCNAPI void remove(ulong);

    MCNAPI void reset(std::vector<std::variant<npc::CommandAction, npc::UrlAction>>&&);

    MCNAPI ulong size() const;

    MCNAPI ulong toIndex(ulong) const;

    MCNAPI ~ActionContainer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace npc
