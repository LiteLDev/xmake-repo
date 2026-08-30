#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IMinecraftGame;
class IMultiPlayerRequest;
class IMultiPlayerServices;
// clang-format on

class MultiPlayerRequestManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&>                                  mMinecraftGame;
    ::ll::TypedStorage<8, 8, ::IMultiPlayerServices&>                            mMultiplayerServices;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<IMultiPlayerRequest>>> mRequests;
    // NOLINTEND

public:
    // prevent constructor by default
    MultiPlayerRequestManager& operator=(MultiPlayerRequestManager const&);
    MultiPlayerRequestManager(MultiPlayerRequestManager const&);
    MultiPlayerRequestManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MultiPlayerRequestManager(::IMinecraftGame&, ::IMultiPlayerServices&);

    MCNAPI void addRequest(std::unique_ptr<IMultiPlayerRequest>&&);

    MCNAPI void update();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IMinecraftGame&, ::IMultiPlayerServices&);
    // NOLINTEND
};
