#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_60/block/BlockSpecifier.h"
#include "mc/deps/shared_types/v1_21_100/biome/components/DefaultSurfaceSettings.h"

namespace SharedTypes::v1_21_100::SurfaceBuilder {

struct MesaSurfaceSettings : public ::SharedTypes::v1_21_100::SurfaceBuilder::DefaultSurfaceSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::SharedTypes::v1_20_60::BlockSpecifier> mClayMaterial;
    ::ll::TypedStorage<8, 64, ::SharedTypes::v1_20_60::BlockSpecifier> mHardClayMaterial;
    ::ll::TypedStorage<1, 1, bool>                                     mBrycePillars;
    ::ll::TypedStorage<1, 1, bool>                                     mHasForest;
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100::SurfaceBuilder
