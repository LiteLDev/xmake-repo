#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace dragon::atlas { class IAtlasHandle; }
// clang-format on

namespace dragon::atlas {

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

} // namespace dragon::atlas
