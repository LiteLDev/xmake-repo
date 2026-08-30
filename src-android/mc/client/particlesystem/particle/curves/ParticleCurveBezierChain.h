#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace ParticleSystem {

class ParticleCurveBezierChain : public ::ParticleSystem::ParticleCurveBase {
public:
    // ParticleCurveBezierChain inner types declare
    // clang-format off
    struct Segment;
    // clang-format on

    // ParticleCurveBezierChain inner types define
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
};

} // namespace ParticleSystem
