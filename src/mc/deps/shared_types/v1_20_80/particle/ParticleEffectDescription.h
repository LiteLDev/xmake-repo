#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_80/particle/ParticleBasicRenderParameters.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ParticleEffectDescription {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                            mIdentifier;
    ::ll::TypedStorage<8, 64, ::SharedTypes::v1_20_80::ParticleBasicRenderParameters> mBasicRenderParams;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                                          mIdentifier;
    ::ll::TypedStorage<8, 80, ::SharedTypes::v1_20_80::ParticleBasicRenderParameters> mBasicRenderParams;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ParticleEffectDescription& operator=(ParticleEffectDescription const&);
#endif // @header-generator platform
    ParticleEffectDescription();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::SharedTypes::v1_20_80::ParticleEffectDescription const&) const;
#else // @header-generator platform
    MCAPI ParticleEffectDescription(::SharedTypes::v1_20_80::ParticleEffectDescription const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ParticleEffectDescription();
#else // @header-generator platform
    MCAPI ::SharedTypes::v1_20_80::ParticleEffectDescription&
    operator=(::SharedTypes::v1_20_80::ParticleEffectDescription&&);

    MCAPI bool operator==(::SharedTypes::v1_20_80::ParticleEffectDescription const&) const;

    MCAPI ~ParticleEffectDescription();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_20_80::ParticleEffectDescription const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
