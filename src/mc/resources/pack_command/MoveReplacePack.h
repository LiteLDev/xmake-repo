#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class Pack;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace PackCommand {

struct MoveReplacePack {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<Pack>> mNewPack;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk9af43c;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    MoveReplacePack& operator=(MoveReplacePack const&);
    MoveReplacePack(MoveReplacePack const&);
    MoveReplacePack();
#endif // @header-generator platform
};

} // namespace PackCommand
