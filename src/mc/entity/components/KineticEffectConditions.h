#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_90 { struct KineticEffectConditions; }
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct KineticEffectConditions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float> mMinSpeed;
    ::ll::TypedStorage<4, 4, float> mMinRelativeSpeed;
    ::ll::TypedStorage<2, 2, short> mMaxDuration;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk992d2b;
    ::ll::UntypedStorage<4, 4> mUnka7d9bd;
    ::ll::UntypedStorage<2, 2> mUnk7e79ec;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    KineticEffectConditions& operator=(KineticEffectConditions const&);
    KineticEffectConditions(KineticEffectConditions const&);
    KineticEffectConditions();
#endif // @header-generator platform
};
