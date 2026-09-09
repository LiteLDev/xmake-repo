#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandSelector.h"
#include "mc/server/commands/CommandSelectorResults.h"
#include "mc/server/commands/RelativeFloat.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class ChunkPos;
class CommandArea;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Random;
class Vec2;
// clang-format on

class SpreadPlayersCommand : public ::Command {
public:
    // SpreadPlayersCommand inner types define
    using CommandAreas = std::map<ChunkPos, std::unique_ptr<CommandArea>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 200>              mTargets;
    ::ll::TypedStorage<4, 8, ::RelativeFloat> mX;
    ::ll::TypedStorage<4, 8, ::RelativeFloat> maxHeight;
    ::ll::TypedStorage<4, 8, ::RelativeFloat> mZ;
    ::ll::TypedStorage<4, 4, float>           mDistance;
    ::ll::TypedStorage<4, 4, float>           mMaxRange;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SpreadPlayersCommand();

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
