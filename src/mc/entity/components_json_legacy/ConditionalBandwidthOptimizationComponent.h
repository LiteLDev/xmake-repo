#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/ConditionalBandwidthOptimization.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
class ConditionalBandwidthOptimizationDefinition;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ConditionalBandwidthOptimizationComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 88, ::ConditionalBandwidthOptimization>            mDefaultValues;
    ::ll::TypedStorage<8, 24, std::vector<ConditionalBandwidthOptimization>> mConditionalValues;
    ::ll::TypedStorage<8, 8, ::Tick>                                         mLastRequestedValuesTick;
    ::ll::TypedStorage<8, 88, ::ConditionalBandwidthOptimization>            mCachedOptimizationValues;
#else // @header-generator platform
    ::ll::TypedStorage<8, 88, ::ConditionalBandwidthOptimization>                mDefaultValues;
    ::ll::TypedStorage<8, 24, ::std::vector<::ConditionalBandwidthOptimization>> mConditionalValues;
    ::ll::TypedStorage<8, 8, ::Tick>                                             mLastRequestedValuesTick;
    ::ll::TypedStorage<8, 88, ::ConditionalBandwidthOptimization>                mCachedOptimizationValues;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ConditionalBandwidthOptimizationComponent& operator=(ConditionalBandwidthOptimizationComponent const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ConditionalBandwidthOptimizationComponent();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ConditionalBandwidthOptimization getCurrentOptimizationValues(::Actor&);
#else // @header-generator platform
    MCAPI ConditionalBandwidthOptimizationComponent(::ConditionalBandwidthOptimizationComponent&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initFromDefinition(::Actor&, ::ConditionalBandwidthOptimizationDefinition const&);
#else // @header-generator platform
    MCAPI ConditionalBandwidthOptimizationComponent(::ConditionalBandwidthOptimizationComponent const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ConditionalBandwidthOptimizationComponent& operator=(::ConditionalBandwidthOptimizationComponent&&);
#else // @header-generator platform
    MCAPI ::ConditionalBandwidthOptimization getCurrentOptimizationValues(::Actor& owner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ConditionalBandwidthOptimizationComponent();
#else // @header-generator platform
    MCAPI ::ConditionalBandwidthOptimizationComponent& operator=(::ConditionalBandwidthOptimizationComponent&&);

    MCAPI ~ConditionalBandwidthOptimizationComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ConditionalBandwidthOptimizationComponent&&);

    MCAPI void* $ctor(::ConditionalBandwidthOptimizationComponent const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
