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
#if defined(LL_PLAT_A) // @header-generator platform
    enum RetainLiquid : uint {
        REMOVE = 0,
        RETAIN = 1,
#else // @header-generator platform
    enum class RetainLiquid : int {
        Remove = 0,
        Retain = 1,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<1, 1, ::Rotation> rotation;
    ::ll::TypedStorage<1, 1, ::Mirror> mirror;
    ::ll::TypedStorage<4, 12, ::BlockPos> rotationPivot;
    ::ll::TypedStorage<4, 24, ::BoundingBox> chunkBB;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, ::Rotation>                                           rotation;
    ::ll::TypedStorage<1, 1, ::Mirror>                                             mirror;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                          rotationPivot;
    ::ll::TypedStorage<4, 24, ::BoundingBox>                                       chunkBB;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::br::worldgen::StructurePlaceSettings::RetainLiquid> liquids;
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::
        TypedStorage<8, 24, ::std::vector<::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor const>>>>
            processors;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace br::worldgen
