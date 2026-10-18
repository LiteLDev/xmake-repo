#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/processors/StructureProcessor.h"
#include "mc/world/level/levelgen/v2/processors/StructureProcessorType.h"
#include "mc/world/level/levelgen/v2/providers/IntProvider.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockSource;
namespace Util { class XXHash; }
namespace br::worldgen { struct StructureBlockInfo; }
namespace br::worldgen { struct StructurePlaceSettings; }
// clang-format on

namespace br::worldgen::processors {

class Capped : public ::br::worldgen::StructureProcessor {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<const br::worldgen::StructureProcessor>>> mDelegate;
    ::ll::TypedStorage<8, 32, ::IntProvider>                                                            mLimit;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor const>>> mDelegate;
    ::ll::TypedStorage<8, 32, ::IntProvider>                                                                mLimit;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    Capped& operator=(Capped const&);
    Capped(Capped const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~Capped();
#else // @header-generator platform
    virtual ::std::vector<::br::worldgen::StructureBlockInfo> finalize(
        ::IBlockSource&                                          region,
        ::BlockPos                                               pos,
        ::BlockPos                                               structurePos,
        ::std::vector<::br::worldgen::StructureBlockInfo> const& originalBlocks,
        ::std::vector<::br::worldgen::StructureBlockInfo>&&      processedBlocks,
        ::br::worldgen::StructurePlaceSettings const&            settings
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<br::worldgen::StructureBlockInfo> finalize(::IBlockSource&, ::BlockPos, ::BlockPos, std::vector<br::worldgen::StructureBlockInfo> const&, std::vector<br::worldgen::StructureBlockInfo>&&, ::br::worldgen::StructurePlaceSettings const&) const;
#else // @header-generator platform
    virtual ::br::worldgen::StructureProcessorType type() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::br::worldgen::StructureProcessorType type() const;

    virtual void appendMetadataKey(::Util::XXHash&) const;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void appendMetadataKey(::Util::XXHash& hash) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<br::worldgen::StructureBlockInfo> $finalize(
        ::IBlockSource&,
        ::BlockPos,
        ::BlockPos,
        std::vector<br::worldgen::StructureBlockInfo> const&,
        std::vector<br::worldgen::StructureBlockInfo>&&,
        ::br::worldgen::StructurePlaceSettings const&
#else // @header-generator platform
    MCAPI ::std::vector<::br::worldgen::StructureBlockInfo> $finalize(
        ::IBlockSource&                                          region,
        ::BlockPos                                               pos,
        ::BlockPos                                               structurePos,
        ::std::vector<::br::worldgen::StructureBlockInfo> const& originalBlocks,
        ::std::vector<::br::worldgen::StructureBlockInfo>&&      processedBlocks,
        ::br::worldgen::StructurePlaceSettings const&            settings
#endif // @header-generator platform
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
