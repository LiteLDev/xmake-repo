#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_60/block/BlockSpecifier.h"

namespace SharedTypes::v1_21_100::SurfaceBuilder {

struct DefaultSurfaceSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                      mSeaFloorDepth;
    ::ll::TypedStorage<8, 64, ::SharedTypes::v1_20_60::BlockSpecifier> mSeaFloorMaterial;
    ::ll::TypedStorage<8, 64, ::SharedTypes::v1_20_60::BlockSpecifier> mFoundationMaterial;
    ::ll::TypedStorage<8, 64, ::SharedTypes::v1_20_60::BlockSpecifier> mMidMaterial;
    ::ll::TypedStorage<8, 64, ::SharedTypes::v1_20_60::BlockSpecifier> mTopMaterial;
    ::ll::TypedStorage<8, 64, ::SharedTypes::v1_20_60::BlockSpecifier> mSeaMaterial;
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100::SurfaceBuilder
