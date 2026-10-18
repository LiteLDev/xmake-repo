#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/server/commands/BlockStateCommandParam.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandBlockName.h"
#include "mc/server/commands/CommandPosition.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class BlockStateCommandParam;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 16, ::CommandPosition>                   mFrom;
    ::ll::TypedStorage<4, 16, ::CommandPosition>                   mTo;
    ::ll::TypedStorage<8, 8, ::CommandBlockName>                   mBlock;
    ::ll::TypedStorage<8, 8, ::CommandBlockName>                   mReplaceBlock;
    ::ll::TypedStorage<8, 24, std::vector<BlockStateCommandParam>> mBlockStates;
    ::ll::TypedStorage<8, 24, std::vector<BlockStateCommandParam>> mReplaceBlockStates;
    ::ll::TypedStorage<4, 4, ::FillCommand::FillMode>              mMode;
    ::ll::TypedStorage<4, 4, int>                                  mBlockData;
    ::ll::TypedStorage<4, 4, int>                                  mReplaceBlockData;
#else // @header-generator platform
    ::ll::TypedStorage<4, 16, ::CommandPosition>                       mFrom;
    ::ll::TypedStorage<4, 16, ::CommandPosition>                       mTo;
    ::ll::TypedStorage<8, 8, ::CommandBlockName>                       mBlock;
    ::ll::TypedStorage<8, 8, ::CommandBlockName>                       mReplaceBlock;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockStateCommandParam>> mBlockStates;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockStateCommandParam>> mReplaceBlockStates;
    ::ll::TypedStorage<4, 4, ::FillCommand::FillMode>                  mMode;
    ::ll::TypedStorage<4, 4, int>                                      mBlockData;
    ::ll::TypedStorage<4, 4, int>                                      mReplaceBlockData;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~FillCommand();

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
