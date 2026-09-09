#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/WeightedRandom.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/level/levelgen/v2/OverrideState.h"

namespace br::worldgen {

struct SpawnerData : public ::WeightedRandom::WeighedRandomItem {
public:
    // SpawnerData inner types declare
    // clang-format off
    struct Population;
    struct Brightness;
    // clang-format on

    // SpawnerData inner types define
    struct Population {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, short> surface;
        ::ll::TypedStorage<2, 2, short> underground;
        // NOLINTEND
    };

    struct Brightness {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, short> min;
        ::ll::TypedStorage<2, 2, short> max;
        ::ll::TypedStorage<1, 1, bool>  raw;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 136, ::ActorDefinitionIdentifier>                        entity;
    ::ll::TypedStorage<2, 2, short>                                                minCount;
    ::ll::TypedStorage<2, 2, short>                                                maxCount;
    ::ll::TypedStorage<1, 1, ::br::worldgen::OverrideState>                        surface;
    ::ll::TypedStorage<1, 1, ::br::worldgen::OverrideState>                        underground;
    ::ll::TypedStorage<1, 1, ::br::worldgen::OverrideState>                        underwater;
    ::ll::TypedStorage<2, 6, std::optional<br::worldgen::SpawnerData::Population>> population;
    ::ll::TypedStorage<2, 8, std::optional<br::worldgen::SpawnerData::Brightness>> brightness;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::br::worldgen::SpawnerData inBrightness(short, short) const;

    MCNAPI ::br::worldgen::SpawnerData inRawBrightness(short, short) const;

    MCNAPI ::br::worldgen::SpawnerData spawnsOnSurface(::br::worldgen::OverrideState) const;

    MCNAPI ::br::worldgen::SpawnerData spawnsUnderground(::br::worldgen::OverrideState) const;

    MCNAPI ::br::worldgen::SpawnerData spawnsUnderwater(::br::worldgen::OverrideState) const;

    MCNAPI ::br::worldgen::SpawnerData withPopulation(short, short) const;

    MCNAPI ~SpawnerData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::br::worldgen::SpawnerData make(::ActorType, short, short, short);

    MCNAPI static ::br::worldgen::SpawnerData make(std::string_view, short, short, short);

    MCNAPI static ::br::worldgen::SpawnerData make(::ActorDefinitionIdentifier, short, short, short);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace br::worldgen
