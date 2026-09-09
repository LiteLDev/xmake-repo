#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

struct Blob {
public:
    // Blob inner types define
    using ViewType = ::gsl::span<const uchar>;

    using StorageType = std::unique_ptr<uchar[]>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::span<const uchar>> mView;
    ::ll::TypedStorage<8, 8, std::unique_ptr<uchar[]>>  mData;
    // NOLINTEND
};

} // namespace cereal
