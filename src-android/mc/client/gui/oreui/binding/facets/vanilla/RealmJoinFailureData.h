#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

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

} // namespace OreUI
