#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/util/AssetType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/util/Reference.h"
#include "mc/world/level/levelgen/v2/processors/StructureProcessor.h"
#include "mc/world/level/levelgen/v2/processors/StructureProcessorType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockType;
#if defined(LL_PLAT_A) // @header-generator platform
class HashedString;
#else // @header-generator platform
#endif // @header-generator platform
class IBlockSource;
namespace Util { class XXHash; }
namespace br::worldgen { struct StructureBlockInfo; }
namespace br::worldgen { struct StructurePlaceSettings; }
// clang-format on

namespace br::worldgen::processors {

class BlockIgnore : public ::br::worldgen::StructureProcessor {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<const BlockType*>> mToIgnore;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockType const*>> mToIgnore;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    BlockIgnore& operator=(BlockIgnore const&);
    BlockIgnore(BlockIgnore const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~BlockIgnore();
#else // @header-generator platform
    virtual ::std::optional<::br::worldgen::StructureBlockInfo> process(
        ::IBlockSource&,
        ::BlockPos,
        ::BlockPos,
        ::br::worldgen::StructureBlockInfo const&,
        ::br::worldgen::StructureBlockInfo&& processedBlockInfo,
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
#else // @header-generator platform
    virtual void appendMetadataKey(::Util::XXHash& hash) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void appendMetadataKey(::Util::XXHash&) const;
    // clang-format on
#else // @header-generator platform
    virtual ~BlockIgnore() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bootstrap();
#else // @header-generator platform
    MCAPI static void bootstrap();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::br::worldgen::processors::BlockIgnore
    from(std::vector<SharedTypes::Reference<(SharedTypes::AssetType)0>> const&);
#else // @header-generator platform
    MCAPI static ::br::worldgen::processors::BlockIgnore
    from(::std::vector<::SharedTypes::Reference<0>> const& toIgnore);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::gsl::not_null<std::shared_ptr<br::worldgen::StructureProcessor>> const& STRUCTURE_BLOCK();
#else // @header-generator platform
    MCAPI static ::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor>> const& STRUCTURE_BLOCK();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<br::worldgen::StructureBlockInfo> $process(
#else // @header-generator platform
    MCAPI ::std::optional<::br::worldgen::StructureBlockInfo> $process(
#endif // @header-generator platform
        ::IBlockSource&,
        ::BlockPos,
        ::BlockPos,
        ::br::worldgen::StructureBlockInfo const&,
#if defined(LL_PLAT_A) // @header-generator platform
        ::br::worldgen::StructureBlockInfo&&,
#else // @header-generator platform
        ::br::worldgen::StructureBlockInfo&& processedBlockInfo,
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
#else // @header-generator platform
    MCAPI void $appendMetadataKey(::Util::XXHash& hash) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen::processors
