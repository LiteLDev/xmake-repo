#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandSelector.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/server/commands/CommandSelectorResults.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/server/commands/RelativeFloat.h"

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
class BlockSource;
#else // @header-generator platform
#endif // @header-generator platform
class ChunkPos;
class CommandArea;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
#if defined(LL_PLAT_A) // @header-generator platform
class Random;
class Vec2;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class SpreadPlayersCommand : public ::Command {
public:
    // SpreadPlayersCommand inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using CommandAreas = std::map<ChunkPos, std::unique_ptr<CommandArea>>;
#else // @header-generator platform
    using CommandAreas = ::std::map<::ChunkPos, ::std::unique_ptr<::CommandArea>>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 200>              mTargets;
    ::ll::TypedStorage<4, 8, ::RelativeFloat> mX;
    ::ll::TypedStorage<4, 8, ::RelativeFloat> maxHeight;
    ::ll::TypedStorage<4, 8, ::RelativeFloat> mZ;
    ::ll::TypedStorage<4, 4, float>           mDistance;
    ::ll::TypedStorage<4, 4, float>           mMaxRange;
#else // @header-generator platform
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Actor>> mTargets;
    ::ll::TypedStorage<4, 8, ::RelativeFloat>              mX;
    ::ll::TypedStorage<4, 8, ::RelativeFloat>              maxHeight;
    ::ll::TypedStorage<4, 8, ::RelativeFloat>              mZ;
    ::ll::TypedStorage<4, 4, float>                        mDistance;
    ::ll::TypedStorage<4, 4, float>                        mMaxRange;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SpreadPlayersCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
#else // @header-generator platform
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void setup(::CommandRegistry&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static void setup(::CommandRegistry& registry);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
