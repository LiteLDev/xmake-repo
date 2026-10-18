#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class BehaviorFactory;
namespace Json { class Value; }
// clang-format on

class GetInteractionPositionForBlockDefinition : public ::BehaviorDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::BlockPos>  mTargetBlockPos;
    ::ll::TypedStorage<8, 24, std::string> mTargetBlockPosId;
    ::ll::TypedStorage<4, 12, ::BlockPos>  mAnchorBlockPos;
    ::ll::TypedStorage<8, 24, std::string> mAnchorBlockPosId;
    ::ll::TypedStorage<8, 24, std::string> mFacingString;
    ::ll::TypedStorage<8, 24, std::string> mFacingStringId;
    ::ll::TypedStorage<4, 4, int>          mMaxSearchDistance;
    ::ll::TypedStorage<8, 24, std::string> mMaxSearchDistanceId;
#else // @header-generator platform
    ::ll::TypedStorage<4, 12, ::BlockPos>    mTargetBlockPos;
    ::ll::TypedStorage<8, 32, ::std::string> mTargetBlockPosId;
    ::ll::TypedStorage<4, 12, ::BlockPos>    mAnchorBlockPos;
    ::ll::TypedStorage<8, 32, ::std::string> mAnchorBlockPosId;
    ::ll::TypedStorage<8, 32, ::std::string> mFacingString;
    ::ll::TypedStorage<8, 32, ::std::string> mFacingStringId;
    ::ll::TypedStorage<4, 4, int>            mMaxSearchDistance;
    ::ll::TypedStorage<8, 32, ::std::string> mMaxSearchDistanceId;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~GetInteractionPositionForBlockDefinition();

    virtual void load(::Json::Value, ::BehaviorFactory const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void load(::Json::Value value, ::BehaviorFactory const& factory) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $load(::Json::Value, ::BehaviorFactory const&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $load(::Json::Value value, ::BehaviorFactory const& factory);
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
