#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
#include "mc/deps/shared_types/v1_20_80/particle/BezierChainNodeMap.h"
#include "mc/deps/shared_types/v1_20_80/particle/ParticleCurveBase.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ParticleCurveBezierChain : public ::SharedTypes::v1_20_80::ParticleCurveBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                 mCurveType;
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_20_80::BezierChainNodeMap> mNodeMap;
    ::ll::TypedStorage<8, 40, ::SharedTypes::Legacy::ExpressionNode>       mInputExpr;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ParticleCurveBezierChain();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ParticleCurveBezierChain(::SharedTypes::v1_20_80::ParticleCurveBezierChain const&);

    MCNAPI bool operator==(::SharedTypes::v1_20_80::ParticleCurveBezierChain const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_20_80::ParticleCurveBezierChain const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
