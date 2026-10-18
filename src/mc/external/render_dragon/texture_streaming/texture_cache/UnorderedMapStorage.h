#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/dragon__texturestreaming__CachedMipData.h"

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::texturestreaming {

#if defined(LL_PLAT_A) // @header-generator platform
struct UnorderedMapStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<ulong, dragon::texturestreaming::CachedMipData>> mStorage;
    ::ll::TypedStorage<4, 4, uint>                                                                mTotalSize;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::optional<cg::ImageBuffer> fetch(ulong const&, uchar const&) const;

    MCNAPI std::optional<std::vector<uchar>> getAvailableMips(ulong const&) const;

    MCNAPI uint getBytesPerPixel(ulong const&) const;

    MCNAPI uint getSize() const;

    MCNAPI std::pair<ushort, ushort> getSourceDimensions(ulong const&) const;

    MCNAPI std::vector<std::pair<ulong, uint>> getStorageDebugEntries() const;

    MCNAPI void insert(ulong const&, ::dragon::texturestreaming::CachedMipData&&);

    MCNAPI void release(ulong const&);

    MCNAPI ~UnorderedMapStorage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct UnorderedMapStorage {};
#endif // @header-generator platform

} // namespace dragon::texturestreaming
