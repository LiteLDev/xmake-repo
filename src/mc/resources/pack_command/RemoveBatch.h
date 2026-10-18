#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/resources/pack_command/RemoveCommand.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace PackCommand {

struct RemoveBatch {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<::PackCommand::RemoveCommand>> mCommands;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnkacbd6c;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    RemoveBatch& operator=(RemoveBatch const&);
    RemoveBatch(RemoveBatch const&);
    RemoveBatch();
#endif // @header-generator platform
};

} // namespace PackCommand
