#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/GameConnectionInfo.h"

struct TransferToServerContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                   mMultiplayerDisabledTextTitle;
    ::ll::TypedStorage<8, 24, std::string>                   mMultiplayerDisabledTextBody;
    ::ll::TypedStorage<8, 640, ::Social::GameConnectionInfo> mConnectionInfo;
    ::ll::TypedStorage<8, 24, std::string>                   mSourceExperienceSessionId;
    // NOLINTEND

public:
    // prevent constructor by default
    TransferToServerContext& operator=(TransferToServerContext const&);
    TransferToServerContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TransferToServerContext(::TransferToServerContext const&);

    MCNAPI ~TransferToServerContext();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::TransferToServerContext const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
