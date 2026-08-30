#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ServerCommand.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class ResourcePackStack;
struct PackInfo;
// clang-format on

class PackStackCommand : public ::ServerCommand {
public:
    // PackStackCommand inner types define
    enum class StackType : int {
        Server    = 0,
        Client    = 1,
        Undefined = 2,
    };

    enum class Verbose : int {
        Verbose = 0,
        Normal  = 1,
    };

    enum class ExcludeVanilla : int {
        Exclude = 0,
        Include = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PackStackCommand::StackType>      mStackType;
    ::ll::TypedStorage<4, 4, ::PackStackCommand::Verbose>        mVerbose;
    ::ll::TypedStorage<4, 4, ::PackStackCommand::ExcludeVanilla> mExcludeVanilla;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PackStackCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void outputPackStack(::CommandOutput&, ::ResourcePackStack const&, bool, bool);

    MCNAPI static void outputWorldTemplateData(::CommandOutput&, std::string const&, std::string const&, bool);

    MCNAPI static void setup(::CommandRegistry&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
