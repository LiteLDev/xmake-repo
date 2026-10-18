#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Clubs {

#if defined(LL_PLAT_A) // @header-generator platform
struct ClubModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mClubID;
    ::ll::TypedStorage<8, 24, std::string> mClubDescription;
    ::ll::TypedStorage<8, 24, std::string> mClubIcon;
    ::ll::TypedStorage<8, 24, std::string> mClubName;
    // NOLINTEND

public:
    // prevent constructor by default
    ClubModel(ClubModel const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ClubModel();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct ClubModel {};
#endif // @header-generator platform

} // namespace Clubs
