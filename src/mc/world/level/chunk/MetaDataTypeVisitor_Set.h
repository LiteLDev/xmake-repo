#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/GeneratorType.h"
#include "mc/world/level/chunk/NeighborAwareBlockUpgradeVersionType.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BaseGameVersion;
#else // @header-generator platform
#endif // @header-generator platform
class CompoundTag;
class DimensionHeightRange;
#if defined(LL_PLAT_A) // @header-generator platform
class LevelSeed64;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

struct MetaDataTypeVisitor_Set {
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CompoundTag operator()(::BaseGameVersion const&) const;
#else // @header-generator platform
    MCAPI ::CompoundTag operator()(::std::string const& value) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CompoundTag operator()(std::string const&) const;

    MCNAPI ::CompoundTag operator()(::LevelSeed64 const&) const;

    MCNAPI ::CompoundTag operator()(::GeneratorType const&) const;

    MCNAPI ::CompoundTag operator()(bool const&) const;

    MCNAPI ::CompoundTag operator()(short const&) const;

    MCNAPI ::CompoundTag operator()(::DimensionHeightRange const&) const;

    MCNAPI ::CompoundTag operator()(::NeighborAwareBlockUpgradeVersionType const&);
#else // @header-generator platform
    MCAPI ::CompoundTag operator()(::DimensionHeightRange const& value) const;
#endif // @header-generator platform
    // NOLINTEND
};
