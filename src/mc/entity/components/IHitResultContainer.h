#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HitResult;
// clang-format on

struct IHitResultContainer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IHitResultContainer() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addHitResult(::HitResult, ::HitResult) = 0;
#else // @header-generator platform
    virtual void addHitResult(::HitResult solidHit, ::HitResult liquidHit) = 0;
#endif // @header-generator platform

    virtual void clear() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::span<const std::pair<HitResult, HitResult>> getHits() const = 0;
#else // @header-generator platform
    virtual ::gsl::span<::std::pair<::HitResult, ::HitResult> const> getHits() const = 0;
#endif // @header-generator platform
    // NOLINTEND
};
