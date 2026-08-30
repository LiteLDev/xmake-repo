#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class BaseGameVersion;
class InteractionResult;
class ItemStack;
class Player;
// clang-format on

class BucketableComponent {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::InteractionResult getInteraction(::Actor&, ::Player&, ::ActorInteraction&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BaseGameVersion const& WATER_BUCKET_USEABLE_VERSION();
    // NOLINTEND
};
