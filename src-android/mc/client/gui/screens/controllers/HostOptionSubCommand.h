#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HostOptionSubCommand {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mButtonText;
    ::ll::TypedStorage<8, 24, std::string> mTexture;
    ::ll::TypedStorage<8, 24, std::string> mSubCommand;
    // NOLINTEND

public:
    // prevent constructor by default
    HostOptionSubCommand& operator=(HostOptionSubCommand const&);
    HostOptionSubCommand();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HostOptionSubCommand(::HostOptionSubCommand const&);

    MCNAPI ~HostOptionSubCommand();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::HostOptionSubCommand const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
