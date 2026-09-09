#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_60/block/BlockSpecifier.h"

namespace SharedTypes::v1_21_100::SurfaceBuilder {

struct CappedSurfaceSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_20_60::BlockSpecifier>>   mFloorMaterials;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_20_60::BlockSpecifier>>   mCeilingMaterials;
    ::ll::TypedStorage<8, 64, ::SharedTypes::v1_20_60::BlockSpecifier>              mSeaMaterial;
    ::ll::TypedStorage<8, 64, ::SharedTypes::v1_20_60::BlockSpecifier>              mFoundationMaterial;
    ::ll::TypedStorage<8, 72, std::optional<SharedTypes::v1_20_60::BlockSpecifier>> mBeachMaterial;
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100::SurfaceBuilder
