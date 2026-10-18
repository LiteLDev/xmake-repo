#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/TintMethod.h"
#include "mc/world/level/block/components/NetworkedBlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
class Experiments;
class SemVersion;
namespace Json { class Value; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockDestructionParticlesDescription
#if defined(LL_PLAT_A) // @header-generator platform
: public ::NetworkedBlockComponentDescription<BlockDestructionParticlesDescription> {
#else // @header-generator platform
: public ::NetworkedBlockComponentDescription<::BlockDestructionParticlesDescription> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mTexture;
    ::ll::TypedStorage<1, 1, ::TintMethod> mTintMethod;
    ::ll::TypedStorage<4, 4, int>          mParticleCount;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mTexture;
    ::ll::TypedStorage<1, 1, ::TintMethod>   mTintMethod;
    ::ll::TypedStorage<4, 4, int>            mParticleCount;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BlockDestructionParticlesDescription();
#else // @header-generator platform
    virtual ::std::string const& getName() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getName() const;
#else // @header-generator platform
    virtual void initializeComponent(::BlockComponentStorage& blockComponentStorage) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeComponent(::BlockComponentStorage&) const;
#else // @header-generator platform
    virtual void initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeComponentFromCode(::BlockComponentStorage&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BlockDestructionParticlesDescription(uchar);

    MCNAPI BlockDestructionParticlesDescription(std::string, ::TintMethod, uchar);
#else // @header-generator platform
    virtual ~BlockDestructionParticlesDescription() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);

    MCNAPI static bool postParseConstraint(::Experiments const&, ::Json::Value const&, ::SemVersion const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static bool postParseConstraint(
        ::Experiments const& experiments,
        ::Json::Value const& componentJson,
        ::SemVersion const&  jsonVersion
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static uchar const& DEFAULT_NON_CUBE_PARTICLE_COUNT();
#else // @header-generator platform
    MCAPI static ::std::string const& NameID();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static uchar const& DEFAULT_PARTICLE_COUNT();
#else // @header-generator platform
    MCAPI static ::std::string const& ParticleCountID();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static uchar const& MAX_PARTICLE_COUNT();
#else // @header-generator platform
    MCAPI static ::std::string const& SchemaID();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& NameID();
#else // @header-generator platform
    MCAPI static ::std::string const& TextureID();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& ParticleCountID();
#else // @header-generator platform
    MCAPI static ::std::string const& TintMethodID();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& SchemaID();
#else // @header-generator platform
    MCAPI static ::SemVersion const& Version1_21_70();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& TextureID();

    MCNAPI static std::string const& TintMethodID();

    MCNAPI static ::SemVersion const& Version1_21_70();

    MCNAPI static ::SemVersion const& Version1_21_90();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uchar);

    MCNAPI void* $ctor(std::string, ::TintMethod, uchar);
#else // @header-generator platform
    MCAPI static ::SemVersion const& Version1_21_90();
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

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& $getName() const;
#else // @header-generator platform
    MCAPI ::std::string const& $getName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initializeComponent(::BlockComponentStorage&) const;
#else // @header-generator platform
    MCAPI void $initializeComponent(::BlockComponentStorage& blockComponentStorage) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initializeComponentFromCode(::BlockComponentStorage&) const;
#else // @header-generator platform
    MCAPI void $initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
