#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class FeatureRegistry;
#if defined(LL_PLAT_A) // @header-generator platform
class OwnerStorageFeature;
class StackResultStorageFeature;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class WeakStorageFeature {
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
    MCNAPI WeakStorageFeature();

    MCNAPI explicit WeakStorageFeature(::OwnerStorageFeature const&);

    MCNAPI WeakStorageFeature(::WeakStorageFeature&&);

    MCNAPI bool _isSet() const;

    MCNAPI ::WeakStorageFeature& operator=(::WeakStorageFeature&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::OwnerStorageFeature const&);

    MCNAPI void* $ctor(::WeakStorageFeature&&);
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::optional<::std::reference_wrapper<::FeatureRegistry>>> mRegistry;
    ::ll::TypedStorage<8, 8, uint64>                                                        mIndex;
#endif // @header-generator platform
    // NOLINTEND
};
