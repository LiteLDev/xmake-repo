#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
#include "mc/deps/shared_types/v1_20_80/particle/ParticleCurveBase.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace SharedTypes::v1_20_80 {

struct ParticleCurveSimpleBase : public ::SharedTypes::v1_20_80::ParticleCurveBase {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString>                                   mCurveType;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::Legacy::ExpressionNode>> mCurveNodes;
    ::ll::TypedStorage<8, 40, ::SharedTypes::Legacy::ExpressionNode>            mInputExpr;
    ::ll::TypedStorage<8, 40, ::SharedTypes::Legacy::ExpressionNode>            mHorizontalRange;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString>                                       mCurveType;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::ExpressionNode>> mCurveNodes;
    ::ll::TypedStorage<8, 48, ::SharedTypes::Legacy::ExpressionNode>                mInputExpr;
    ::ll::TypedStorage<8, 48, ::SharedTypes::Legacy::ExpressionNode>                mHorizontalRange;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ParticleCurveSimpleBase& operator=(ParticleCurveSimpleBase const&);
    ParticleCurveSimpleBase();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ParticleCurveSimpleBase();
#else // @header-generator platform
    virtual uint64 _getMinCurveNodesAllowed();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong _getMinCurveNodesAllowed();
#else // @header-generator platform
    virtual uint64 _getMaxCurveNodesAllowed();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong _getMaxCurveNodesAllowed();
#else // @header-generator platform
    virtual ~ParticleCurveSimpleBase() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ParticleCurveSimpleBase(::SharedTypes::v1_20_80::ParticleCurveSimpleBase const&);

    MCNAPI ::SharedTypes::v1_20_80::ParticleCurveSimpleBase&
    operator=(::SharedTypes::v1_20_80::ParticleCurveSimpleBase const&);

    MCNAPI void validateNodeListSize();
#else // @header-generator platform
    MCAPI ParticleCurveSimpleBase(::SharedTypes::v1_20_80::ParticleCurveSimpleBase const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::v1_20_80::ParticleCurveSimpleBase const&);
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::v1_20_80::ParticleCurveSimpleBase const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $_getMinCurveNodesAllowed();
#else // @header-generator platform
    MCFOLD uint64 $_getMinCurveNodesAllowed();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $_getMaxCurveNodesAllowed();
#else // @header-generator platform
    MCFOLD uint64 $_getMaxCurveNodesAllowed();


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
