#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace dragon::atlas { class IAtlasHandle; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::atlas {

#if defined(LL_PLAT_A) // @header-generator platform
struct AtlasTileHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<dragon::atlas::IAtlasHandle>> mAtlas;
    ::ll::TypedStorage<8, 8, ulong>                                       mAtlasId;
    ::ll::TypedStorage<4, 4, uint>                                        mTileIndex;
    ::ll::TypedStorage<4, 4, uint>                                        mVersion;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::string createUniqueName() const;

    MCNAPI bool isValid() const;

    MCNAPI explicit operator bool() const;

    MCNAPI bool operator<(::dragon::atlas::AtlasTileHandle const&) const;
    // NOLINTEND
};
#else // @header-generator platform
struct AtlasTileHandle {};
#endif // @header-generator platform

} // namespace dragon::atlas
