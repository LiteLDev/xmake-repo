#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
struct IResolvedTint {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IResolvedTint();

    virtual ::mce::Color const& get(int, uchar) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct IResolvedTint {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IResolvedTint() = default;

    virtual ::mce::Color const& get(int materialInstanceId, uchar facing) const = 0;
    // NOLINTEND
};
#else // @header-generator platform
struct IResolvedTint {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline
