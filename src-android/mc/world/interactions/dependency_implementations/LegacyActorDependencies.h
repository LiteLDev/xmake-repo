#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/interactions/ILegacyActorDependencies.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

namespace Interactions {

class LegacyActorDependencies : public ::Interactions::ILegacyActorDependencies {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor&> mActor;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyActorDependencies& operator=(LegacyActorDependencies const&);
    LegacyActorDependencies(LegacyActorDependencies const&);
    LegacyActorDependencies();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isRemoved();
    // NOLINTEND
};

} // namespace Interactions
