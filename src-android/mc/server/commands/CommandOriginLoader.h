#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ICommandOriginLoader.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CompoundTag;
class ServerLevel;
// clang-format on

class CommandOriginLoader : public ::ICommandOriginLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ServerLevel&> mServerLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandOriginLoader& operator=(CommandOriginLoader const&);
    CommandOriginLoader(CommandOriginLoader const&);
    CommandOriginLoader();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CommandOriginLoader();

    virtual std::unique_ptr<CommandOrigin> load(::CompoundTag const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CommandOriginLoader(::ServerLevel&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<CommandOrigin> load(::CompoundTag const&, ::ServerLevel&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ServerLevel&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<CommandOrigin> $load(::CompoundTag const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
