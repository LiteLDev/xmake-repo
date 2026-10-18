#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Actor;
class IBlockSource;
class ILevel;
class Vec3;
struct DimensionType;
// clang-format on

class ActorRenderCandidates {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<gsl::not_null<Actor*>>> mBuffer;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addNearbyActors(::IBlockSource&, ::Vec3 const&, float);

    MCNAPI void addPlayers(::ILevel&, ::DimensionType const&, ::Vec3 const&, float);

    MCNAPI void clear();

    MCNAPI void forEach(std::function<void(Actor&)>);

    MCNAPI void sortAndRemoveDuplicates();
    // NOLINTEND
};
#else // @header-generator platform
class ActorRenderCandidates {};
#endif // @header-generator platform
