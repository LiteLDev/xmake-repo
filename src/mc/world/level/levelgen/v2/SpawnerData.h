#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/WeightedRandom.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ActorType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/levelgen/v2/OverrideState.h"

namespace br::worldgen {

struct SpawnerData : public ::WeightedRandom::WeighedRandomItem {
public:
    // SpawnerData inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct Population;
#else // @header-generator platform
#endif // @header-generator platform
    struct Brightness;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct Population;
#endif // @header-generator platform
    // clang-format on

    // SpawnerData inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct Population {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, short> surface;
        ::ll::TypedStorage<2, 2, short> underground;
        // NOLINTEND
    };

#else // @header-generator platform
#endif // @header-generator platform
    struct Brightness {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, short> min;
        ::ll::TypedStorage<2, 2, short> max;
        ::ll::TypedStorage<1, 1, bool>  raw;
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct Population {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, short> surface;
        ::ll::TypedStorage<2, 2, short> underground;
        // NOLINTEND
    };

#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier>                            entity;
    ::ll::TypedStorage<2, 2, short>                                                    minCount;
    ::ll::TypedStorage<2, 2, short>                                                    maxCount;
    ::ll::TypedStorage<1, 1, ::br::worldgen::OverrideState>                            surface;
    ::ll::TypedStorage<1, 1, ::br::worldgen::OverrideState>                            underground;
    ::ll::TypedStorage<1, 1, ::br::worldgen::OverrideState>                            underwater;
    ::ll::TypedStorage<2, 6, ::std::optional<::br::worldgen::SpawnerData::Population>> population;
    ::ll::TypedStorage<2, 8, ::std::optional<::br::worldgen::SpawnerData::Brightness>> brightness;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::br::worldgen::SpawnerData make(::ActorType, short, short, short);

    MCNAPI static ::br::worldgen::SpawnerData make(std::string_view, short, short, short);

    MCNAPI static ::br::worldgen::SpawnerData make(::ActorDefinitionIdentifier, short, short, short);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::br::worldgen::SpawnerData
    make(::std::string_view id, short probabilityWeight, short minCount, short maxCount);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace br::worldgen
