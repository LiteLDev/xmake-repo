#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct BiomeData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> label;
    ::ll::TypedStorage<4, 4, int>          id;
    ::ll::TypedStorage<4, 4, int>          dimension;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeData& operator=(BiomeData const&);
    BiomeData(BiomeData const&);
    BiomeData();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct BiomeData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> label;
    ::ll::TypedStorage<4, 4, int>            id;
    ::ll::TypedStorage<4, 4, int>            dimension;
    // NOLINTEND
};
#else // @header-generator platform
struct BiomeData {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
