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

struct RemovePack {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<Pack>> mPack;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk30da45;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    RemovePack& operator=(RemovePack const&);
    RemovePack(RemovePack const&);
    RemovePack();
#endif // @header-generator platform
};

} // namespace PackCommand
