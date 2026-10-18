#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandItem.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
#if defined(LL_PLAT_A) // @header-generator platform
class CommandRegistry;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class TagsFromItemCommand : public ::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::CommandItem> mItem;
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
