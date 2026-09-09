#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { struct StructureProcessor; }
// clang-format on

namespace br::worldgen {

struct StructurePlaceSettings {
public:
    // StructurePlaceSettings inner types define
    enum RetainLiquid : uint {
        REMOVE = 0,
        RETAIN = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, ::Rotation> rotation;
    ::ll::TypedStorage<1, 1, ::Mirror> mirror;
    ::ll::TypedStorage<4, 12, ::BlockPos> rotationPivot;
    ::ll::TypedStorage<4, 24, ::BoundingBox> chunkBB;
    ::ll::TypedStorage<4, 4, ::br::worldgen::StructurePlaceSettings::RetainLiquid> liquids;
    ::ll::TypedStorage<8, 24, std::vector<gsl::not_null<std::shared_ptr<const br::worldgen::StructureProcessor>>>> processors;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~StructurePlaceSettings();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace br::worldgen
