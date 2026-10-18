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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::variant<npc::CommandAction, npc::UrlAction>>> mActions;
    ::ll::TypedStorage<8, 24, std::vector<ulong>>                                            mButtons;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::variant<::npc::CommandAction, ::npc::UrlAction>>> mActions;
    ::ll::TypedStorage<8, 24, ::std::vector<uint64>>                                                 mButtons;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ActionContainer& operator=(ActionContainer const&);
    ActionContainer(ActionContainer const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::variant<npc::CommandAction, npc::UrlAction> const* at(ulong) const;
#else // @header-generator platform
    MCAPI void push(::std::variant<::npc::CommandAction, ::npc::UrlAction>&& action);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::variant<npc::CommandAction, npc::UrlAction>* at(ulong);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void remove(uint64 index);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong countButtons() const;
#else // @header-generator platform
    MCAPI void reset(::std::vector<::std::variant<::npc::CommandAction, ::npc::UrlAction>>&& data);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong countUrl() const;

    MCNAPI void push(std::variant<npc::CommandAction, npc::UrlAction>&&);

    MCNAPI void remove(ulong);

    MCNAPI void reset(std::vector<std::variant<npc::CommandAction, npc::UrlAction>>&&);

    MCNAPI ulong size() const;

    MCNAPI ulong toIndex(ulong) const;

    MCNAPI ~ActionContainer();
#else // @header-generator platform
    MCAPI ~ActionContainer();
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
