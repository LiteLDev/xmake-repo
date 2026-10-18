#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
struct IPackLoadScoped;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class PackLoadStorage {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<ulong, std::unique_ptr<IPackLoadScoped>>> mScopedObjects;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnk25f19e;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PackLoadStorage& operator=(PackLoadStorage const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    PackLoadStorage(PackLoadStorage const&);
    PackLoadStorage();
#endif // @header-generator platform
};
