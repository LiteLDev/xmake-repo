#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class Pack;
class ResourcePack;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace PackCommand {

struct PackAssociations {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<Pack>>         mPack;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ResourcePack>> mResourcePack;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk2108b3;
    ::ll::UntypedStorage<8, 16> mUnkb07109;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    PackAssociations& operator=(PackAssociations const&);
    PackAssociations(PackAssociations const&);
    PackAssociations();
#endif // @header-generator platform
};

} // namespace PackCommand
