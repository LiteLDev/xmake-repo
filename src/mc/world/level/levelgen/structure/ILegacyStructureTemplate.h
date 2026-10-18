#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class LegacyStructureSettings;
class Random;
// clang-format on

class ILegacyStructureTemplate {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual std::unordered_map<BlockPos, std::string> getMarkers(::BlockPos const&, ::LegacyStructureSettings&) const = 0;
#else // @header-generator platform
    virtual ::std::unordered_map<::BlockPos, ::std::string>
    getMarkers(::BlockPos const& position, ::LegacyStructureSettings& settings) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void placeInWorld(::BlockSource&, ::BlockPos const&, ::LegacyStructureSettings&, ::Random&) const = 0;
    // clang-format on
#else // @header-generator platform
    virtual void placeInWorld(
        ::BlockSource&             region,
        ::BlockPos const&          pos,
        ::LegacyStructureSettings& settings,
        ::Random&                  random
    ) const = 0;
#endif // @header-generator platform
    // NOLINTEND
};
