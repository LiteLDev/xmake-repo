#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class ResourcePack;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace RepositoryLoading {

struct VanillaPacks {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<ResourcePack>> mEditorPack;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ResourcePack>> mVanillaPack;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk557bfa;
    ::ll::UntypedStorage<8, 16> mUnk7981ef;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    VanillaPacks& operator=(VanillaPacks const&);
    VanillaPacks(VanillaPacks const&);
    VanillaPacks();
#endif // @header-generator platform
};

} // namespace RepositoryLoading
