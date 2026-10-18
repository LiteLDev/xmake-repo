#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct RealmJoinFailureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::optional<std::string>>              worldName;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::string>>> nonMemberPartyXuids;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmJoinFailureData& operator=(RealmJoinFailureData const&);
    RealmJoinFailureData(RealmJoinFailureData const&);
    RealmJoinFailureData();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct RealmJoinFailureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                worldName;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>> nonMemberPartyXuids;
    // NOLINTEND
};
#else // @header-generator platform
struct RealmJoinFailureData {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
