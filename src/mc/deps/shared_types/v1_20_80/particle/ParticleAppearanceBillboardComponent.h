#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
#include "mc/deps/shared_types/v1_20_80/particle/DirectionSettings.h"
#include "mc/deps/shared_types/v1_20_80/particle/ParticleEffectComponent.h"
#include "mc/deps/shared_types/v1_20_80/particle/UV.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ParticleAppearanceBillboardComponent : public ::SharedTypes::v1_20_80::ParticleEffectComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 80, std::array<SharedTypes::Legacy::ExpressionNode, 2>>       mSizeExpr;
    ::ll::TypedStorage<8, 48, std::optional<HashedString>>                              mFacing;
    ::ll::TypedStorage<8, 144, std::optional<SharedTypes::v1_20_80::DirectionSettings>> mDirection;
    ::ll::TypedStorage<8, 336, std::optional<SharedTypes::v1_20_80::UV>>                mUV;
#else // @header-generator platform
    ::ll::TypedStorage<8, 96, ::std::array<::SharedTypes::Legacy::ExpressionNode, 2>>       mSizeExpr;
    ::ll::TypedStorage<8, 56, ::std::optional<::HashedString>>                              mFacing;
    ::ll::TypedStorage<8, 168, ::std::optional<::SharedTypes::v1_20_80::DirectionSettings>> mDirection;
    ::ll::TypedStorage<8, 392, ::std::optional<::SharedTypes::v1_20_80::UV>>                mUV;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ParticleAppearanceBillboardComponent();

#endif
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ParticleAppearanceBillboardComponent();

    virtual ::HashedString const& getIdentifier() const;
#else // @header-generator platform
    virtual ::HashedString const& getIdentifier() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::SharedTypes::v1_20_80::ParticleAppearanceBillboardComponent const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ParticleAppearanceBillboardComponent(::SharedTypes::v1_20_80::ParticleAppearanceBillboardComponent const&);

    MCAPI ::SharedTypes::v1_20_80::ParticleAppearanceBillboardComponent&
    operator=(::SharedTypes::v1_20_80::ParticleAppearanceBillboardComponent&&);

    MCAPI ::SharedTypes::v1_20_80::ParticleAppearanceBillboardComponent&
    operator=(::SharedTypes::v1_20_80::ParticleAppearanceBillboardComponent const&);

    MCAPI bool operator==(::SharedTypes::v1_20_80::ParticleAppearanceBillboardComponent const&) const;
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
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
    MCAPI void* $ctor(::SharedTypes::v1_20_80::ParticleAppearanceBillboardComponent const&);
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
