#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/v1_20_80/particle/ParticleCurve.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/v1_20_80/particle/ParticleEffectComponents.h"
#include "mc/deps/shared_types/v1_20_80/particle/ParticleEffectDescription.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/v1_20_80/particle/ParticleEventNode.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace SharedTypes::v1_20_80 { struct ParticleCurve; }
namespace SharedTypes::v1_20_80 { struct ParticleEventNode; }
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ParticleEffectData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 88, ::SharedTypes::v1_20_80::ParticleEffectDescription>                         mDescription;
    ::ll::TypedStorage<8, 48, ::SharedTypes::v1_20_80::ParticleEffectComponents>                          mComponents;
    ::ll::TypedStorage<8, 32, std::optional<std::map<std::string, SharedTypes::v1_20_80::ParticleCurve>>> mCurves;
    ::ll::TypedStorage<8, 32, std::optional<std::map<std::string, SharedTypes::v1_20_80::ParticleEventNode>>> mEvents;
#else // @header-generator platform
    ::ll::TypedStorage<8, 112, ::SharedTypes::v1_20_80::ParticleEffectDescription> mDescription;
    ::ll::TypedStorage<8, 48, ::SharedTypes::v1_20_80::ParticleEffectComponents>   mComponents;
    ::ll::TypedStorage<8, 24, ::std::optional<::std::map<::std::string, ::SharedTypes::v1_20_80::ParticleCurve>>>
        mCurves;
    ::ll::TypedStorage<8, 24, ::std::optional<::std::map<::std::string, ::SharedTypes::v1_20_80::ParticleEventNode>>>
        mEvents;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ParticleEffectData();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ParticleEffectData(::SharedTypes::v1_20_80::ParticleEffectData const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ParticleEffectData(::SharedTypes::v1_20_80::ParticleEffectData&&);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_20_80::ParticleEffectData& operator=(::SharedTypes::v1_20_80::ParticleEffectData&&);
#else // @header-generator platform
    MCAPI ParticleEffectData(::SharedTypes::v1_20_80::ParticleEffectData const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ParticleEffectData();
#else // @header-generator platform
    MCAPI ::SharedTypes::v1_20_80::ParticleEffectData& operator=(::SharedTypes::v1_20_80::ParticleEffectData const&);

    MCAPI bool operator==(::SharedTypes::v1_20_80::ParticleEffectData const&) const;

    MCAPI ~ParticleEffectData();
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
    MCNAPI static ::SemVersionConstant const& VERSION();
#else // @header-generator platform
    MCAPI static ::SemVersionConstant const& VERSION();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::v1_20_80::ParticleEffectData const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::SharedTypes::v1_20_80::ParticleEffectData&&);
#endif

    MCAPI void* $ctor(::SharedTypes::v1_20_80::ParticleEffectData const&);
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
};

} // namespace SharedTypes::v1_20_80
