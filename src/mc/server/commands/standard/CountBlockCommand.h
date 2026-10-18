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
#if defined(LL_PLAT_A) // @header-generator platform
class CommandRegistry;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class CountBlockCommand : public ::Command {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 16, ::CommandPosition>                   mPosition;
    ::ll::TypedStorage<8, 8, ::CommandBlockName>                   mBlock;
    ::ll::TypedStorage<8, 24, std::vector<BlockStateCommandParam>> mBlockStates;
    ::ll::TypedStorage<4, 4, int>                                  mData;
#else // @header-generator platform
    ::ll::TypedStorage<4, 16, ::CommandPosition>                       mPosition;
    ::ll::TypedStorage<8, 8, ::CommandBlockName>                       mBlock;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockStateCommandParam>> mBlockStates;
    ::ll::TypedStorage<4, 4, int>                                      mData;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
#else // @header-generator platform
    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND
};
