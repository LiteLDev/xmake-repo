#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_80/particle/ParticleCurveBezier.h"
#include "mc/deps/shared_types/v1_20_80/particle/ParticleCurveBezierChain.h"
#include "mc/deps/shared_types/v1_20_80/particle/ParticleCurveCatmullRom.h"
#include "mc/deps/shared_types/v1_20_80/particle/ParticleCurveLinear.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace SharedTypes::v1_20_80 {

struct ParticleCurve {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 160, std::optional<SharedTypes::v1_20_80::ParticleCurveLinear>>      mLinear;
    ::ll::TypedStorage<8, 160, std::optional<SharedTypes::v1_20_80::ParticleCurveBezier>>      mBezier;
    ::ll::TypedStorage<8, 160, std::optional<SharedTypes::v1_20_80::ParticleCurveCatmullRom>>  mCatmullRom;
    ::ll::TypedStorage<8, 104, std::optional<SharedTypes::v1_20_80::ParticleCurveBezierChain>> mBezierChain;
#else // @header-generator platform
    ::ll::TypedStorage<8, 184, ::std::optional<::SharedTypes::v1_20_80::ParticleCurveLinear>>      mLinear;
    ::ll::TypedStorage<8, 184, ::std::optional<::SharedTypes::v1_20_80::ParticleCurveBezier>>      mBezier;
    ::ll::TypedStorage<8, 184, ::std::optional<::SharedTypes::v1_20_80::ParticleCurveCatmullRom>>  mCatmullRom;
    ::ll::TypedStorage<8, 120, ::std::optional<::SharedTypes::v1_20_80::ParticleCurveBezierChain>> mBezierChain;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ParticleCurve& operator=(ParticleCurve const&);
    ParticleCurve();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ParticleCurve(::SharedTypes::v1_20_80::ParticleCurve&&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ParticleCurve(::SharedTypes::v1_20_80::ParticleCurve&&);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ParticleCurve(::SharedTypes::v1_20_80::ParticleCurve const&);
#else // @header-generator platform
    MCAPI ParticleCurve(::SharedTypes::v1_20_80::ParticleCurve const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_20_80::ParticleCurve& operator=(::SharedTypes::v1_20_80::ParticleCurve const&);
#else // @header-generator platform
    MCAPI bool operator==(::SharedTypes::v1_20_80::ParticleCurve const&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::SharedTypes::v1_20_80::ParticleCurve const&) const;

    MCNAPI ~ParticleCurve();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ~ParticleCurve();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::v1_20_80::ParticleCurve&&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::SharedTypes::v1_20_80::ParticleCurve&&);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::v1_20_80::ParticleCurve const&);
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::v1_20_80::ParticleCurve const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
