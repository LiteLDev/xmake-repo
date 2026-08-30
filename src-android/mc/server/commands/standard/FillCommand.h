#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/BlockStateCommandParam.h"
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandBlockName.h"
#include "mc/server/commands/CommandPosition.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
// clang-format on

class FillCommand : public ::Command {
public:
    // FillCommand inner types define
    enum class FillMode : int {
        Replace = 0,
        Destroy = 1,
        Hollow  = 2,
        Outline = 3,
        Keep    = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::CommandPosition>                   mFrom;
    ::ll::TypedStorage<4, 16, ::CommandPosition>                   mTo;
    ::ll::TypedStorage<8, 8, ::CommandBlockName>                   mBlock;
    ::ll::TypedStorage<8, 8, ::CommandBlockName>                   mReplaceBlock;
    ::ll::TypedStorage<8, 24, std::vector<BlockStateCommandParam>> mBlockStates;
    ::ll::TypedStorage<8, 24, std::vector<BlockStateCommandParam>> mReplaceBlockStates;
    ::ll::TypedStorage<4, 4, ::FillCommand::FillMode>              mMode;
    ::ll::TypedStorage<4, 4, int>                                  mBlockData;
    ::ll::TypedStorage<4, 4, int>                                  mReplaceBlockData;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FillCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
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
