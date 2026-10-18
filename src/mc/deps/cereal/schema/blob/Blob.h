#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

struct Blob {
public:
    // Blob inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using ViewType = ::gsl::span<const uchar>;
#else // @header-generator platform
    using StorageType = ::std::unique_ptr<uchar[0]>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using StorageType = std::unique_ptr<uchar[]>;
#else // @header-generator platform
    using ValueType = uchar;

    using ViewType = ::gsl::span<uchar const>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::gsl::span<const uchar>> mView;
    ::ll::TypedStorage<8, 8, std::unique_ptr<uchar[]>>  mData;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::gsl::span<uchar const>>   mView;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<uchar[0]>> mData;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace cereal
