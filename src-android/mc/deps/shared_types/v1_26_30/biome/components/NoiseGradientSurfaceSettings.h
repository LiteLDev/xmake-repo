#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_60/block/BlockSpecifier.h"
#include "mc/deps/shared_types/v1_26_30/NoiseDescriptor.h"
#include "mc/deps/shared_types/v1_26_30/block/NoiseBlockSpecifier.h"

namespace SharedTypes::v1_26_30::SurfaceBuilder {

struct NoiseGradientSurfaceSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::optional<std::vector<SharedTypes::v1_20_60::BlockSpecifier>>> mNonReplaceableBlocks;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_26_30::NoiseBlockSpecifier>>           mGradientBlockRanges;
    ::ll::TypedStorage<8, 56, ::SharedTypes::v1_26_30::NoiseDescriptor>                          mNoiseDescriptor;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30::SurfaceBuilder
