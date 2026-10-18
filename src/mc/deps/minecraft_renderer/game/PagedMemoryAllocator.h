#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace mce::detail { struct Page; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::detail {

#if defined(LL_PLAT_A) // @header-generator platform
class PagedMemoryAllocator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong const>                                      mVolumeByteSize;
    ::ll::TypedStorage<8, 8, ulong const>                                      mVolumesPerPage;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<mce::detail::Page>>> mPages;
    ::ll::TypedStorage<8, 24, std::set<ulong>>                                 mFreePageIndices;
    ::ll::TypedStorage<8, 24, std::set<uint>>                                  mFreeOffsets;
    // NOLINTEND
};
#else // @header-generator platform
class PagedMemoryAllocator {};
#endif // @header-generator platform

} // namespace mce::detail
