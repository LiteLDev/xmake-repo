#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/legacy/Facing.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/v1_26_0/block/BlockedDirections.h"
#include "mc/deps/shared_types/v1_26_0/block/LiquidReaction.h"
#include "mc/deps/shared_types/v1_26_0/block/LiquidType.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_0 {

struct DetectionRule {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                      mCanContainLiquid;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_0::BlockedDirections> mStopsFlowDirections;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_0::LiquidReaction>    mOnLiquidTouches;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_0::LiquidType>        mLiquidType;
    ::ll::TypedStorage<1, 1, bool>                                      mClipAgainstCollider;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI DetectionRule(
        ::SharedTypes::v1_26_0::LiquidType,
        bool,
        ::SharedTypes::v1_26_0::LiquidReaction,
        std::vector<SharedTypes::Facing> const&,
        bool
    );
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[128]> canContainLiquidDocumentationStr();

    MCNAPI static ::std::add_lvalue_reference_t<char const[653]> clipAgainstColliderDocumentationStr();

    MCNAPI static ::std::add_lvalue_reference_t<char const[171]> liquidTypeDocumentationStr();

    MCNAPI static ::std::add_lvalue_reference_t<char const[361]> onLiquidTouchesDocumentationStr();

    MCNAPI static ::std::add_lvalue_reference_t<char const[431]> stopsFlowDirectionsDocumentationStr();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::SharedTypes::v1_26_0::LiquidType,
        bool,
        ::SharedTypes::v1_26_0::LiquidReaction,
        std::vector<SharedTypes::Facing> const&,
        bool
    );
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_0
