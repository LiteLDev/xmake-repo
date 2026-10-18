#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/IHitResultContainer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/phys/HitResult.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
class HitResult;
// clang-format on
#endif // @header-generator platform

namespace HitResultContainer {

struct LocalPlayerContainer : public ::IHitResultContainer {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::pair<HitResult, HitResult>>> mHits;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnke48230;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalPlayerContainer& operator=(LocalPlayerContainer const&);
    LocalPlayerContainer(LocalPlayerContainer const&);
    LocalPlayerContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void addHitResult(::HitResult solidHit, ::HitResult liquidHit) /*override*/;

    virtual void clear() /*override*/;

    virtual ::gsl::span<::std::pair<::HitResult, ::HitResult> const> getHits() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $addHitResult(::HitResult solidHit, ::HitResult liquidHit);

    MCAPI void $clear();

    MCAPI ::gsl::span<::std::pair<::HitResult, ::HitResult> const> $getHits() const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace HitResultContainer
