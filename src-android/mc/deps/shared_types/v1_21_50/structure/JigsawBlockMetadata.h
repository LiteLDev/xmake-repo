#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/world/level/levelgen/structure/JigsawJointType.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_50 {

class JigsawBlockMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                   mName;
    ::ll::TypedStorage<8, 24, std::string>                   mPoolName;
    ::ll::TypedStorage<8, 24, std::string>                   mTargetName;
    ::ll::TypedStorage<8, 24, std::string>                   mBlockSerializationId;
    ::ll::TypedStorage<8, 24, std::string>                   mFinalBlockSerializationId;
    ::ll::TypedStorage<1, 1, ::SharedTypes::JigsawJointType> mJointType;
    ::ll::TypedStorage<4, 12, ::BlockPos>                    mPosition;
    ::ll::TypedStorage<4, 4, int>                            mSelectionPriority;
    ::ll::TypedStorage<4, 4, int>                            mPlacementPriority;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawBlockMetadata(JigsawBlockMetadata const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::SharedTypes::v1_21_50::JigsawBlockMetadata const&) const;
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_50
