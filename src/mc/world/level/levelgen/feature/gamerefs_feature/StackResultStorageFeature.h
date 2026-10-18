#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class FeatureRegistry;
#if defined(LL_PLAT_A) // @header-generator platform
class IFeature;
class OwnerStorageFeature;
class WeakStorageFeature;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class StackResultStorageFeature {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::optional<std::reference_wrapper<FeatureRegistry>>> mRegistry;
    ::ll::TypedStorage<8, 8, ulong>                                                   mIndex;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit StackResultStorageFeature(::WeakStorageFeature const&);

    MCNAPI StackResultStorageFeature(::StackResultStorageFeature&&);

    MCNAPI ::IFeature& _getStackRef() const;

    MCNAPI bool _hasValue() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::WeakStorageFeature const&);

    MCNAPI void* $ctor(::StackResultStorageFeature&&);
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::optional<::std::reference_wrapper<::FeatureRegistry>>> mRegistry;
    ::ll::TypedStorage<8, 8, uint64>                                                        mIndex;
#endif // @header-generator platform
    // NOLINTEND
};
