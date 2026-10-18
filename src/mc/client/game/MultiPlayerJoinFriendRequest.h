#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/game/IMultiPlayerRequest.h"

// auto generated forward declare list
// clang-format off
class IMinecraftGame;
class IMultiPlayerServices;
// clang-format on

class MultiPlayerJoinFriendRequest : public ::IMultiPlayerRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mServerId;
    // NOLINTEND

public:
    // prevent constructor by default
    MultiPlayerJoinFriendRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MultiPlayerJoinFriendRequest();

    virtual ::IMultiPlayerRequest::Result update(::IMinecraftGame&, ::IMultiPlayerServices&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MultiPlayerJoinFriendRequest(std::string_view);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string_view);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::IMultiPlayerRequest::Result $update(::IMinecraftGame&, ::IMultiPlayerServices&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class MultiPlayerJoinFriendRequest {};
#endif // @header-generator platform
