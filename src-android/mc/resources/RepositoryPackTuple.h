#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Pack;
class ResourcePack;
// clang-format on

struct RepositoryPackTuple {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Pack>>>         mPack;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<ResourcePack>>> mResource;
    // NOLINTEND

public:
    // prevent constructor by default
    RepositoryPackTuple();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RepositoryPackTuple();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
