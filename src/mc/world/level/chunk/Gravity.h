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
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    Gravity& operator=(Gravity const&);
    Gravity(Gravity const&);
    Gravity();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~Gravity();
#else // @header-generator platform
    virtual ::std::optional<::br::worldgen::StructureBlockInfo> process(
        ::IBlockSource& region,
        ::BlockPos,
        ::BlockPos,
        ::br::worldgen::StructureBlockInfo const& originalBlockInfo,
        ::br::worldgen::StructureBlockInfo&&      processedBlockInfo,
        ::br::worldgen::StructurePlaceSettings const&
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<br::worldgen::StructureBlockInfo> process(::IBlockSource&, ::BlockPos, ::BlockPos, ::br::worldgen::StructureBlockInfo const&, ::br::worldgen::StructureBlockInfo&&, ::br::worldgen::StructurePlaceSettings const&) const;
#else // @header-generator platform
    virtual ::br::worldgen::StructureProcessorType type() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::br::worldgen::StructureProcessorType type() const;

    virtual void appendMetadataKey(::Util::XXHash&) const;
    // clang-format on
#else // @header-generator platform
    virtual void appendMetadataKey(::Util::XXHash& hash) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::gsl::not_null<std::shared_ptr<const br::worldgen::StructureProcessor>> const& TERRAIN_MATCHING();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor const>> const& TERRAIN_MATCHING();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<br::worldgen::StructureBlockInfo> $process(
        ::IBlockSource&,
#else // @header-generator platform
    MCAPI ::std::optional<::br::worldgen::StructureBlockInfo> $process(
        ::IBlockSource& region,
#endif // @header-generator platform
        ::BlockPos,
        ::BlockPos,
#if defined(LL_PLAT_A) // @header-generator platform
        ::br::worldgen::StructureBlockInfo const&,
        ::br::worldgen::StructureBlockInfo&&,
#else // @header-generator platform
        ::br::worldgen::StructureBlockInfo const& originalBlockInfo,
        ::br::worldgen::StructureBlockInfo&&      processedBlockInfo,
#endif // @header-generator platform
        ::br::worldgen::StructurePlaceSettings const&
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::br::worldgen::StructureProcessorType $type() const;
#else // @header-generator platform
    MCFOLD ::br::worldgen::StructureProcessorType $type() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $appendMetadataKey(::Util::XXHash&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $appendMetadataKey(::Util::XXHash& hash) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};

} // namespace br::worldgen::processors
