#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/legacy/FilterSubject.h"
#include "mc/server/commands/CurrentCmdVersion.h"
#include "mc/world/level/CommandOriginSystem.h"

// auto generated forward declare list
// clang-format off
class Command;
class ILevel;
class RenderParams;
// clang-format on

class CommandResponseBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::CurrentCmdVersion>                  mCommandVersion;
    ::ll::TypedStorage<8, 24, std::vector<HashedString>>           mRawCommands;
    ::ll::TypedStorage<2, 2, ::SharedTypes::Legacy::FilterSubject> mTarget;
    ::ll::TypedStorage<8, 24, std::vector<Command*>>               mCompiledCommands;
    ::ll::TypedStorage<1, 1, bool>                                 mIsCompiled;
    ::ll::TypedStorage<1, 1, bool>                                 mSuccess;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CommandResponseBase();

    virtual ::CommandOriginSystem _getCommandOriginSystem() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _addCommand(std::string const&);

    MCNAPI void _executeAction(::RenderParams&) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& NameID();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::CommandOriginSystem $_getCommandOriginSystem() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
