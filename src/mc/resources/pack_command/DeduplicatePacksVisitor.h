#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/resource/PackIdVersion.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace PackCommand {

struct DeduplicatePacksVisitor {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<PackIdVersion>> mVisitedPacks;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk694060;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    DeduplicatePacksVisitor& operator=(DeduplicatePacksVisitor const&);
    DeduplicatePacksVisitor(DeduplicatePacksVisitor const&);
    DeduplicatePacksVisitor();
#endif // @header-generator platform
};

} // namespace PackCommand
