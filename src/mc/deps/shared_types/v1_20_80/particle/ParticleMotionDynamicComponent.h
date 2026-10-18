#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
#include "mc/deps/shared_types/v1_20_80/particle/ParticleEffectComponent.h"

// auto generated forward declare list
// clang-format off
class HashedString;
#if defined(LL_PLAT_A) // @header-generator platform
namespace cereal { struct ReflectionCtx; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ParticleMotionDynamicComponent : public ::SharedTypes::v1_20_80::ParticleEffectComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 120, std::array<SharedTypes::Legacy::ExpressionNode, 3>> mLinearAccelerationExpr;
    ::ll::TypedStorage<8, 40, ::SharedTypes::Legacy::ExpressionNode>               mLinearDragCoefficientExpr;
    ::ll::TypedStorage<8, 40, ::SharedTypes::Legacy::ExpressionNode>               mRotationAccelerationExpr;
    ::ll::TypedStorage<8, 40, ::SharedTypes::Legacy::ExpressionNode>               mRotationDragCoefficientExpr;
#else // @header-generator platform
    ::ll::TypedStorage<8, 144, ::std::array<::SharedTypes::Legacy::ExpressionNode, 3>> mLinearAccelerationExpr;
    ::ll::TypedStorage<8, 48, ::SharedTypes::Legacy::ExpressionNode>                   mLinearDragCoefficientExpr;
    ::ll::TypedStorage<8, 48, ::SharedTypes::Legacy::ExpressionNode>                   mRotationAccelerationExpr;
    ::ll::TypedStorage<8, 48, ::SharedTypes::Legacy::ExpressionNode>                   mRotationDragCoefficientExpr;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ParticleMotionDynamicComponent& operator=(ParticleMotionDynamicComponent const&);
    ParticleMotionDynamicComponent();

#endif
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ParticleMotionDynamicComponent();
#else // @header-generator platform
    virtual ::HashedString const& getIdentifier() const /*override*/;
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::HashedString const& getIdentifier() const;
#else // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ParticleMotionDynamicComponent(::SharedTypes::v1_20_80::ParticleMotionDynamicComponent&&);

    MCAPI ParticleMotionDynamicComponent(::SharedTypes::v1_20_80::ParticleMotionDynamicComponent const&);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::HashedString const& NameID();
#else // @header-generator platform
    MCAPI static ::HashedString const& NameID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::SharedTypes::v1_20_80::ParticleMotionDynamicComponent&&);

    MCAPI void* $ctor(::SharedTypes::v1_20_80::ParticleMotionDynamicComponent const&);
#endif
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

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::HashedString const& $getIdentifier() const;
#else // @header-generator platform
    MCAPI ::HashedString const& $getIdentifier() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
