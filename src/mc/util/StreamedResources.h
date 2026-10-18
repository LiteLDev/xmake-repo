#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
// clang-format on

namespace mce {

class StreamedResources {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void addToStreamedLocations(ulong const&);

    MCNAPI static void markAsNonStreamable(ulong const&);

    MCNAPI static bool shouldStream(::ResourceLocation const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static bool shouldStream(::ResourceLocation const& resourceLocation);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unordered_set<ulong>& mNonStreamableLocations();
#else // @header-generator platform
    MCNAPI static ::std::unordered_set<uint64>& mNonStreamableLocations();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unordered_set<ulong>& mStreamedDirectories();
#else // @header-generator platform
    MCNAPI static ::std::unordered_set<uint64>& mStreamedDirectories();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace mce
