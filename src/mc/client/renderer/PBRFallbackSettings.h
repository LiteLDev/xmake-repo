#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/Color255RGB.h"
#include "mc/deps/shared_types/shared_types/Color255RGBA.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct PBRFallbackSettings {
public:
    // PBRFallbackSettings inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct PBRDataMER;
#else // @header-generator platform
#endif // @header-generator platform
    struct PBRData;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct PBRDataMER;
#endif // @header-generator platform
    // clang-format on

    // PBRFallbackSettings inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct PBRDataMER {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 16, ::SharedTypes::Color255RGB> mMetalnessEmissiveRoughness;
        // NOLINTEND
    };
#else // @header-generator platform
    struct PBRData {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    struct PBRDataMER {};
#endif // @header-generator platform
};
