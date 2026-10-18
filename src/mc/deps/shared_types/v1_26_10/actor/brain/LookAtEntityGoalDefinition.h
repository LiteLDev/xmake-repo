#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/deps/shared_types/v1_21_130/actor/brain/MemoryIdentifierDefinition.h"
#include "mc/deps/shared_types/v1_26_10/actor/BaseGenericGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Brain { struct EntityRefMemory; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_10::Brain::MemoryGoals {

struct LookAtEntityGoalDefinition : public ::SharedTypes::v1_26_10::Brain::BaseGenericGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                         mLookDistance;
    ::ll::TypedStorage<4, 8, ::Vec2>                                        mLookAngle;
    ::ll::TypedStorage<4, 12, std::variant<float, SharedTypes::FloatRange>> mLookTimeSeconds;
    ::ll::UntypedStorage<8, 40>                                             mTargetEntityMemory;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                             mLookDistance;
    ::ll::TypedStorage<4, 8, ::Vec2>                                            mLookAngle;
    ::ll::TypedStorage<4, 12, ::std::variant<float, ::SharedTypes::FloatRange>> mLookTimeSeconds;
    ::ll::TypedStorage<
        8,
        48,
        ::SharedTypes::v1_21_130::Brain::MemoryIdentifierDefinition<::SharedTypes::Brain::EntityRefMemory>>
        mTargetEntityMemory;
    // NOLINTEND

public:
    // prevent constructor by default
    LookAtEntityGoalDefinition& operator=(LookAtEntityGoalDefinition const&);
    LookAtEntityGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LookAtEntityGoalDefinition(::SharedTypes::v1_26_10::Brain::MemoryGoals::LookAtEntityGoalDefinition const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // static variables
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& NAME();
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::v1_26_10::Brain::MemoryGoals::LookAtEntityGoalDefinition const&);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10::Brain::MemoryGoals
