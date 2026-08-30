#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/IRequestAction.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CompoundTag;
class Dimension;
class ICommandOriginLoader;
class ServerLevel;
// clang-format on

class FunctionAction : public ::IRequestAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<CommandOrigin>> mCommandOrigin;
    ::ll::TypedStorage<8, 24, std::string>                   mFilePath;
    // NOLINTEND

public:
    // prevent constructor by default
    FunctionAction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FunctionAction();

    virtual void execute(::ServerLevel&, ::Dimension&);

    virtual void serialize(::CompoundTag&);

    virtual bool operator==(::IRequestAction const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::string const& getFilePath() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isValidTag(::CompoundTag const&);

    MCNAPI static std::unique_ptr<FunctionAction> load(::CompoundTag const&, ::ICommandOriginLoader&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $execute(::ServerLevel&, ::Dimension&);

    MCNAPI void $serialize(::CompoundTag&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
