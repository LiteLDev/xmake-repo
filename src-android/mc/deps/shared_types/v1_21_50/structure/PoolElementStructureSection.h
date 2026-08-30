#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_50/structure/BoundingBox.h"
#include "mc/deps/shared_types/v1_21_50/structure/JigsawJunction.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_50 {

struct PoolElementStructureSection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                        mElementID;
    ::ll::TypedStorage<4, 4, int>                                                 mGroundOffset;
    ::ll::TypedStorage<4, 24, ::SharedTypes::v1_21_50::BoundingBox>               mBoundingBox;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                         mPosition;
    ::ll::TypedStorage<1, 1, ::Rotation>                                          mRotation;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_50::JigsawJunction>> mJunctions;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PoolElementStructureSection();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_50
