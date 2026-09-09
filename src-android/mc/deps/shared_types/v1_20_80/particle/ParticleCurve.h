#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_80/particle/ParticleCurveBezier.h"
#include "mc/deps/shared_types/v1_20_80/particle/ParticleCurveBezierChain.h"
#include "mc/deps/shared_types/v1_20_80/particle/ParticleCurveCatmullRom.h"
#include "mc/deps/shared_types/v1_20_80/particle/ParticleCurveLinear.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ParticleCurve {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 160, std::optional<SharedTypes::v1_20_80::ParticleCurveLinear>>      mLinear;
    ::ll::TypedStorage<8, 160, std::optional<SharedTypes::v1_20_80::ParticleCurveBezier>>      mBezier;
    ::ll::TypedStorage<8, 160, std::optional<SharedTypes::v1_20_80::ParticleCurveCatmullRom>>  mCatmullRom;
    ::ll::TypedStorage<8, 104, std::optional<SharedTypes::v1_20_80::ParticleCurveBezierChain>> mBezierChain;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ParticleCurve(::SharedTypes::v1_20_80::ParticleCurve&&);

    MCNAPI ParticleCurve(::SharedTypes::v1_20_80::ParticleCurve const&);

    MCNAPI ::SharedTypes::v1_20_80::ParticleCurve& operator=(::SharedTypes::v1_20_80::ParticleCurve const&);

    MCNAPI bool operator==(::SharedTypes::v1_20_80::ParticleCurve const&) const;

    MCNAPI ~ParticleCurve();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_20_80::ParticleCurve&&);

    MCNAPI void* $ctor(::SharedTypes::v1_20_80::ParticleCurve const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
