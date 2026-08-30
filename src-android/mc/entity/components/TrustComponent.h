#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
// clang-format on

struct TrustComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_set<ActorUniqueID>> mTrustedPlayerIDs;
    // NOLINTEND

public:
    // prevent constructor by default
    TrustComponent& operator=(TrustComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI void assignTrustedPlayer(::ActorUniqueID const&);

    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&, ::DataLoadHelper&);
    // NOLINTEND
};
