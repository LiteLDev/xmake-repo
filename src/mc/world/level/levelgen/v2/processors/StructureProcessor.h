#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/util/AssetType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/util/Reference.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/levelgen/v2/heightmap_projection/Type.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/levelgen/v2/processors/StructureProcessorType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class HashedString;
class IBlockSource;
struct IntProvider;
namespace Util { class XXHash; }
namespace br::worldgen { struct StructureBlockInfo; }
namespace br::worldgen { struct StructurePlaceSettings; }
namespace br::worldgen::processors { struct RuleSet; }
// clang-format on

namespace br::worldgen {

struct StructureProcessor {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~StructureProcessor();
#else // @header-generator platform
    virtual ~StructureProcessor() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<br::worldgen::StructureBlockInfo> process(::IBlockSource&, ::BlockPos, ::BlockPos, ::br::worldgen::StructureBlockInfo const&, ::br::worldgen::StructureBlockInfo&&, ::br::worldgen::StructurePlaceSettings const&) const;
#else // @header-generator platform
    virtual ::std::optional<::br::worldgen::StructureBlockInfo> process(
        ::IBlockSource&,
        ::BlockPos,
        ::BlockPos,
        ::br::worldgen::StructureBlockInfo const&,
        ::br::worldgen::StructureBlockInfo&& processedBlockInfo,
        ::br::worldgen::StructurePlaceSettings const&
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<br::worldgen::StructureBlockInfo> finalize(::IBlockSource&, ::BlockPos, ::BlockPos, std::vector<br::worldgen::StructureBlockInfo> const&, std::vector<br::worldgen::StructureBlockInfo>&&, ::br::worldgen::StructurePlaceSettings const&) const;
#else // @header-generator platform
    virtual ::std::vector<::br::worldgen::StructureBlockInfo> finalize(
        ::IBlockSource&                                          region,
        ::BlockPos                                               pos,
        ::BlockPos                                               structurePos,
        ::std::vector<::br::worldgen::StructureBlockInfo> const& originalBlocks,
        ::std::vector<::br::worldgen::StructureBlockInfo>&&      processedBlocks,
        ::br::worldgen::StructurePlaceSettings const&            settings
    ) const;
#endif // @header-generator platform

    virtual ::br::worldgen::StructureProcessorType type() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void appendMetadataKey(::Util::XXHash&) const;
    // clang-format on
#else // @header-generator platform
    virtual void appendMetadataKey(::Util::XXHash& hash) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::gsl::not_null<std::shared_ptr<br::worldgen::StructureProcessor>>
    BlockIgnore(std::vector<SharedTypes::Reference<(SharedTypes::AssetType)0>> const&);
#else // @header-generator platform
    MCAPI static ::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor>>
    BlockIgnore(::std::vector<::SharedTypes::Reference<0>> const& blocks);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::gsl::not_null<std::shared_ptr<br::worldgen::StructureProcessor>>
        Capped(::gsl::not_null<std::shared_ptr<br::worldgen::StructureProcessor>>, ::IntProvider);
#else // @header-generator platform
    MCAPI static ::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor>>
    Capped(::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor>> delegate, ::IntProvider limit);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::gsl::not_null<std::shared_ptr<br::worldgen::StructureProcessor>> Protected(::HashedString const&);
#else // @header-generator platform
    MCAPI static ::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor>>
    Protected(::HashedString const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::gsl::not_null<std::shared_ptr<br::worldgen::StructureProcessor>> Protected(std::string_view);
#else // @header-generator platform
    MCAPI static ::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor>>
    Protected(::std::string_view tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::gsl::not_null<std::shared_ptr<br::worldgen::StructureProcessor>>
        Rule(std::vector<br::worldgen::processors::RuleSet>);

    MCNAPI static void bootstrap();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor>>
    Rule(::std::vector<::br::worldgen::processors::RuleSet> rules);
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

} // namespace br::worldgen
