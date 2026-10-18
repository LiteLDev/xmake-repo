#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
struct ConstDeserializeDataParams;
namespace SharedTypes::v1_20_80 { struct ParticleEffectComponent; }
// clang-format on
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
struct ConstDeserializeDataParams;
namespace SharedTypes::v1_20_80 { struct ParticleEffectComponent; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

namespace ParticleSystem {

class EffectComponentBase {
public:
    // EffectComponentBase inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class EffectComponentType : int {
        EmitterInitial     = 0,
        EmitterLifetime    = 1,
        EmitterRate        = 2,
        EmitterShape       = 3,
        ParticleAppearance = 4,
        ParticleInitial    = 5,
        ParticleLifetime   = 6,
        ParticleMotion     = 7,
        Invalid            = 8,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::HashedString> mName;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EffectComponentBase();

    virtual void initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent&) = 0;

    virtual void upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent&) = 0;

    virtual void parseJson(::ConstDeserializeDataParams const&) = 0;

    virtual ::ParticleSystem::EffectComponentBase::EffectComponentType getParticleComponentType() const;

    virtual int getSortOrderNumber() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::HashedString const& getComponentName() const;

    MCNAPI void setComponentName(::HashedString const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ParticleSystem::EffectComponentBase::EffectComponentType $getParticleComponentType() const;

    MCNAPI int $getSortOrderNumber() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class EffectComponentType : int {
        EmitterInitial     = 0,
        EmitterLifetime    = 1,
        EmitterRate        = 2,
        EmitterShape       = 3,
        ParticleAppearance = 4,
        ParticleInitial    = 5,
        ParticleLifetime   = 6,
        ParticleMotion     = 7,
        Invalid            = 8,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString> mName;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EffectComponentBase() = default;

    virtual void initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent& data) = 0;

    virtual void upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent& data) = 0;

    virtual void parseJson(::ConstDeserializeDataParams const& deserializeDataParams) = 0;

    virtual ::ParticleSystem::EffectComponentBase::EffectComponentType getParticleComponentType() const;

    virtual int getSortOrderNumber() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::ParticleSystem::EffectComponentBase::EffectComponentType $getParticleComponentType() const;

    MCFOLD int $getSortOrderNumber() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    enum class EffectComponentType : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace ParticleSystem
