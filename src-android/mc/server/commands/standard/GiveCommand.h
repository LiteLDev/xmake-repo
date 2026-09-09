#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandItem.h"
#include "mc/server/commands/CommandSelector.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Player;
namespace Json { class Value; }
// clang-format on

class GiveCommand : public ::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 200>            mTargets;
    ::ll::TypedStorage<8, 8, ::CommandItem> mItem;
    ::ll::TypedStorage<4, 4, int>           mCount;
    ::ll::TypedStorage<4, 4, int>           mData;
    ::ll::UntypedStorage<8, 16>             mComponents;
    ::ll::TypedStorage<1, 1, bool>          mHaveComponents;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GiveCommand();

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
