#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
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

class ProtectedBlock : public ::br::worldgen::StructureProcessor {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString> mCannotReplace;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString> mCannotReplace;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ProtectedBlock& operator=(ProtectedBlock const&);
    ProtectedBlock(ProtectedBlock const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ProtectedBlock();
#else // @header-generator platform
    virtual ::std::optional<::br::worldgen::StructureBlockInfo> process(
        ::IBlockSource& region,
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
    MCNAPI std::optional<br::worldgen::StructureBlockInfo> $process(
        ::IBlockSource&,
#else // @header-generator platform
    MCAPI ::std::optional<::br::worldgen::StructureBlockInfo> $process(
        ::IBlockSource& region,
#endif // @header-generator platform
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
