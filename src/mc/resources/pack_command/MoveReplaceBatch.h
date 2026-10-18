#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/resources/pack_command/MoveReplacePack.h"
#include "mc/resources/pack_command/PackCommand.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace PackCommand {

struct MoveReplaceBatch {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mCommands;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk747053;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    MoveReplaceBatch& operator=(MoveReplaceBatch const&);
    MoveReplaceBatch(MoveReplaceBatch const&);
    MoveReplaceBatch();
#endif // @header-generator platform
};

} // namespace PackCommand
