#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/particlesystem/particle/curves/ParticleCurveBase.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class RenderParams;
struct ConstDeserializeDataParams;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/particlesystem/particle/curves/ParticleCurveBase.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class RenderParams;
struct ConstDeserializeDataParams;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ParticleSystem {

#if defined(LL_PLAT_A) // @header-generator platform
class ParticleCurveSimpleBase : public ::ParticleSystem::ParticleCurveBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ExpressionNode>> mCurveNodes;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>            mInputExpr;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>            mHorizontalRange;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ParticleCurveSimpleBase();

    virtual void parseJson(::ConstDeserializeDataParams const&, ::HashedString const&);

    virtual void evaluateCurve(::RenderParams&);

    virtual ulong _getMinCurveNodesAllowed() = 0;

    virtual ulong _getMaxCurveNodesAllowed() = 0;

    virtual float _evaluateCurve(float, ::RenderParams&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $parseJson(::ConstDeserializeDataParams const&, ::HashedString const&);

    MCNAPI void $evaluateCurve(::RenderParams&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ParticleCurveSimpleBase : public ::ParticleSystem::ParticleCurveBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpressionNode>> mCurveNodes;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                mInputExpr;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                mHorizontalRange;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ParticleCurveSimpleBase() /*override*/ = default;

    virtual void parseJson(
        ::ConstDeserializeDataParams const& deserializeDataParams,
        ::HashedString const&               molangVariableName
    ) /*override*/;

    virtual void evaluateCurve(::RenderParams& renderParams) /*override*/;

    virtual uint64 _getMinCurveNodesAllowed() = 0;

    virtual uint64 _getMaxCurveNodesAllowed() = 0;

    virtual float _evaluateCurve(float t, ::RenderParams& renderParams) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void
    $parseJson(::ConstDeserializeDataParams const& deserializeDataParams, ::HashedString const& molangVariableName);

    MCAPI void $evaluateCurve(::RenderParams& renderParams);
    // NOLINTEND
};
#else // @header-generator platform
class ParticleCurveSimpleBase {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ParticleSystem
