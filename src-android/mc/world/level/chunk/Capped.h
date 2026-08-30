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
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<const br::worldgen::StructureProcessor>>> mDelegate;
    ::ll::TypedStorage<8, 32, ::IntProvider>                                                            mLimit;
    // NOLINTEND

public:
    // prevent constructor by default
    Capped& operator=(Capped const&);
    Capped(Capped const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~Capped();

    virtual std::vector<br::worldgen::StructureBlockInfo> finalize(::IBlockSource&, ::BlockPos, ::BlockPos, std::vector<br::worldgen::StructureBlockInfo> const&, std::vector<br::worldgen::StructureBlockInfo>&&, ::br::worldgen::StructurePlaceSettings const&) const;

    virtual ::br::worldgen::StructureProcessorType type() const;

    virtual void appendMetadataKey(::Util::XXHash&) const;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::vector<br::worldgen::StructureBlockInfo> $finalize(
        ::IBlockSource&,
        ::BlockPos,
        ::BlockPos,
        std::vector<br::worldgen::StructureBlockInfo> const&,
        std::vector<br::worldgen::StructureBlockInfo>&&,
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
