#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/Color255RGB.h"
#include "mc/deps/shared_types/shared_types/Color255RGBA.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct PBRFallbackSettings {
public:
    // PBRFallbackSettings inner types declare
    // clang-format off
    struct PBRDataMER;
    struct PBRData;
    // clang-format on

    // PBRFallbackSettings inner types define
    struct PBRDataMER {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 16, ::SharedTypes::Color255RGB> mMetalnessEmissiveRoughness;
        // NOLINTEND
    };

    struct PBRData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 16, ::SharedTypes::Color255RGBA> mMetalnessEmissiveRoughnessSubsurface;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::PBRFallbackSettings::PBRData> mBlocks;
    ::ll::TypedStorage<4, 16, ::PBRFallbackSettings::PBRData> mActors;
    ::ll::TypedStorage<4, 16, ::PBRFallbackSettings::PBRData> mParticles;
    ::ll::TypedStorage<4, 16, ::PBRFallbackSettings::PBRData> mItems;
    // NOLINTEND
};
