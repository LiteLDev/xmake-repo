#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/particlesystem/particle/curves/ParticleCurveBase.h"
#include "mc/client/particlesystem/particle/curves/ParticleCurveType.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class RenderParams;
struct ConstDeserializeDataParams;
namespace SharedTypes::v1_20_80 { struct ParticleCurveBase; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/particlesystem/particle/curves/ParticleCurveBase.h"
#include "mc/client/particlesystem/particle/curves/ParticleCurveType.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class RenderParams;
struct ConstDeserializeDataParams;
namespace SharedTypes::v1_20_80 { struct ParticleCurveBase; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ParticleSystem {

#if defined(LL_PLAT_A) // @header-generator platform
class ParticleCurveBezierChain : public ::ParticleSystem::ParticleCurveBase {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ParticleCurveBezierChain : public ::ParticleSystem::ParticleCurveBase {
#else // @header-generator platform
class ParticleCurveBezierChain {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // ParticleCurveBezierChain inner types declare
    // clang-format off
    struct Segment;
    // clang-format on

    // ParticleCurveBezierChain inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct Segment {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mStartValue;
        ::ll::TypedStorage<4, 4, float> mEndValue;
        ::ll::TypedStorage<4, 4, float> mStartValueControlPoint;
        ::ll::TypedStorage<4, 4, float> mEndValueControlPoint;
        ::ll::TypedStorage<4, 4, float> mStartRange;
        ::ll::TypedStorage<4, 4, float> mEndRange;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                                               mInputExpr;
    ::ll::TypedStorage<8, 24, std::vector<ParticleSystem::ParticleCurveBezierChain::Segment>> mSegments;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                                               mHorizontalRange;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ParticleCurveBezierChain();

    virtual void initializeFromData(::SharedTypes::v1_20_80::ParticleCurveBase&, ::HashedString const&);

    virtual void upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleCurveBase&);

    virtual void parseJson(::ConstDeserializeDataParams const&, ::HashedString const&);

    virtual void evaluateCurve(::RenderParams&);

    virtual ::ParticleSystem::ParticleCurveType getCurveType() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initializeFromData(::SharedTypes::v1_20_80::ParticleCurveBase&, ::HashedString const&);

    MCNAPI void $upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleCurveBase&);

    MCNAPI void $parseJson(::ConstDeserializeDataParams const&, ::HashedString const&);

    MCNAPI void $evaluateCurve(::RenderParams&);

    MCNAPI ::ParticleSystem::ParticleCurveType $getCurveType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct Segment {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mStartValue;
        ::ll::TypedStorage<4, 4, float> mEndValue;
        ::ll::TypedStorage<4, 4, float> mStartValueControlPoint;
        ::ll::TypedStorage<4, 4, float> mEndValueControlPoint;
        ::ll::TypedStorage<4, 4, float> mStartRange;
        ::ll::TypedStorage<4, 4, float> mEndRange;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                                                   mInputExpr;
    ::ll::TypedStorage<8, 24, ::std::vector<::ParticleSystem::ParticleCurveBezierChain::Segment>> mSegments;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                                                   mHorizontalRange;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void
    initializeFromData(::SharedTypes::v1_20_80::ParticleCurveBase& data, ::HashedString const& curveName) /*override*/;

    virtual void upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleCurveBase& data) /*override*/;

    virtual void parseJson(
        ::ConstDeserializeDataParams const& deserializeDataParams,
        ::HashedString const&               molangVariableName
    ) /*override*/;

    virtual void evaluateCurve(::RenderParams& renderParams) /*override*/;

    virtual ::ParticleSystem::ParticleCurveType getCurveType() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initializeFromData(::SharedTypes::v1_20_80::ParticleCurveBase& data, ::HashedString const& curveName);

    MCAPI void $upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleCurveBase& data);

    MCAPI void
    $parseJson(::ConstDeserializeDataParams const& deserializeDataParams, ::HashedString const& molangVariableName);

    MCAPI void $evaluateCurve(::RenderParams& renderParams);

    MCFOLD ::ParticleSystem::ParticleCurveType $getCurveType() const;
    // NOLINTEND
#else // @header-generator platform
    struct Segment {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace ParticleSystem
