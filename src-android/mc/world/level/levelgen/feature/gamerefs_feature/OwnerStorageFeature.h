#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class FeatureRegistry;
class IFeature;
// clang-format on

class OwnerStorageFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::optional<std::reference_wrapper<FeatureRegistry>>> mRegistry;
    ::ll::TypedStorage<8, 8, ulong>                                                   mIndex;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit OwnerStorageFeature(::FeatureRegistry&);

    MCNAPI OwnerStorageFeature(::OwnerStorageFeature&&);

    MCNAPI ::IFeature& _getStackRef() const;

    MCNAPI bool _hasValue() const;

    MCNAPI ~OwnerStorageFeature();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::FeatureRegistry&);

    MCNAPI void* $ctor(::OwnerStorageFeature&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
