#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_80/structure/JigsawBlockMetadata.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_80 {

struct JigsawStructureMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>                                              mSize;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_80::JigsawBlockMetadata>> mJigsawBlocks;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_80::JigsawStructureMetadata&
    operator=(::SharedTypes::v1_21_80::JigsawStructureMetadata&&);

    MCNAPI ~JigsawStructureMetadata();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_80
