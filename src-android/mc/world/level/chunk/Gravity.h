#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/heightmap_projection/Type.h"
#include "mc/world/level/levelgen/v2/processors/StructureProcessor.h"
#include "mc/world/level/levelgen/v2/processors/StructureProcessorType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockSource;
namespace Util { class XXHash; }
namespace br::worldgen { struct StructureBlockInfo; }
namespace br::worldgen { struct StructurePlaceSettings; }
// clang-format on

namespace br::worldgen::processors {

class Gravity : public ::br::worldgen::StructureProcessor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::br::worldgen::HeightmapProjection::Type> mHeightmap;
    ::ll::TypedStorage<4, 4, int>                                       mOffset;
    // NOLINTEND

public:
    // prevent constructor by default
    Gravity& operator=(Gravity const&);
    Gravity(Gravity const&);
    Gravity();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~Gravity();

    virtual std::optional<br::worldgen::StructureBlockInfo> process(::IBlockSource&, ::BlockPos, ::BlockPos, ::br::worldgen::StructureBlockInfo const&, ::br::worldgen::StructureBlockInfo&&, ::br::worldgen::StructurePlaceSettings const&) const;

    virtual ::br::worldgen::StructureProcessorType type() const;

    virtual void appendMetadataKey(::Util::XXHash&) const;
    // clang-format on
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::gsl::not_null<std::shared_ptr<const br::worldgen::StructureProcessor>> const& TERRAIN_MATCHING();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::optional<br::worldgen::StructureBlockInfo> $process(
        ::IBlockSource&,
        ::BlockPos,
        ::BlockPos,
        ::br::worldgen::StructureBlockInfo const&,
        ::br::worldgen::StructureBlockInfo&&,
        ::br::worldgen::StructurePlaceSettings const&
    ) const;

    MCNAPI ::br::worldgen::StructureProcessorType $type() const;

    MCNAPI void $appendMetadataKey(::Util::XXHash&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen::processors
