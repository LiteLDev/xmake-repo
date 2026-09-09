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
    MCNAPI static void addToStreamedLocations(ulong const&);

    MCNAPI static void markAsNonStreamable(ulong const&);

    MCNAPI static bool shouldStream(::ResourceLocation const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::unordered_set<ulong>& mNonStreamableLocations();

    MCNAPI static std::unordered_set<ulong>& mStreamedDirectories();
    // NOLINTEND
};

} // namespace mce
