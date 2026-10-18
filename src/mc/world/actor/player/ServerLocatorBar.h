#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Player;
class ServerWaypointGroup;
// clang-format on

class ServerLocatorBar {
public:
    // ServerLocatorBar inner types declare
    // clang-format off
    class GroupStrongHandle;
    // clang-format on

    // ServerLocatorBar inner types define
    class GroupStrongHandle {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 16, std::shared_ptr<ServerWaypointGroup>> mWaypointGroup;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::ServerWaypointGroup* get() const;

        MCNAPI explicit operator bool() const;

        MCNAPI ::ServerWaypointGroup* operator->() const;
#else // @header-generator platform
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ServerWaypointGroup>> mWaypointGroup;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<ServerWaypointGroup>>> mWaypointGroups;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::ServerWaypointGroup>>> mWaypointGroups;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ServerLocatorBar::GroupStrongHandle createGroupHandle();
#else // @header-generator platform
    MCAPI ::ServerLocatorBar::GroupStrongHandle createGroupHandle();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void update(::Player&);

    MCNAPI ~ServerLocatorBar();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void update(::Player& player);
#endif // @header-generator platform
    // NOLINTEND
};
