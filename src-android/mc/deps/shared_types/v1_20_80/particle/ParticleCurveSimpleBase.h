#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
#include "mc/deps/shared_types/v1_20_80/particle/ParticleCurveBase.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ParticleCurveSimpleBase : public ::SharedTypes::v1_20_80::ParticleCurveBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::HashedString>                                   mCurveType;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::Legacy::ExpressionNode>> mCurveNodes;
    ::ll::TypedStorage<8, 40, ::SharedTypes::Legacy::ExpressionNode>            mInputExpr;
    ::ll::TypedStorage<8, 40, ::SharedTypes::Legacy::ExpressionNode>            mHorizontalRange;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ParticleCurveSimpleBase();

    virtual ulong _getMinCurveNodesAllowed();

    virtual ulong _getMaxCurveNodesAllowed();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ParticleCurveSimpleBase(::SharedTypes::v1_20_80::ParticleCurveSimpleBase const&);

    MCNAPI ::SharedTypes::v1_20_80::ParticleCurveSimpleBase&
    operator=(::SharedTypes::v1_20_80::ParticleCurveSimpleBase const&);

    MCNAPI void validateNodeListSize();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_20_80::ParticleCurveSimpleBase const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ulong $_getMinCurveNodesAllowed();

    MCNAPI ulong $_getMaxCurveNodesAllowed();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
