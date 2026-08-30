#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/GeneratorType.h"
#include "mc/world/level/chunk/NeighborAwareBlockUpgradeVersionType.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class CompoundTag;
class DimensionHeightRange;
class LevelSeed64;
// clang-format on

struct MetaDataTypeVisitor_Set {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::CompoundTag operator()(::BaseGameVersion const&) const;

    MCNAPI ::CompoundTag operator()(std::string const&) const;

    MCNAPI ::CompoundTag operator()(::LevelSeed64 const&) const;

    MCNAPI ::CompoundTag operator()(::GeneratorType const&) const;

    MCNAPI ::CompoundTag operator()(bool const&) const;

    MCNAPI ::CompoundTag operator()(short const&) const;

    MCNAPI ::CompoundTag operator()(::DimensionHeightRange const&) const;

    MCNAPI ::CompoundTag operator()(::NeighborAwareBlockUpgradeVersionType const&);
    // NOLINTEND
};
