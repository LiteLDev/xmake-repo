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
: public ::NetworkedBlockComponentDescription<BlockDestructionParticlesDescription> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mTexture;
    ::ll::TypedStorage<1, 1, ::TintMethod> mTintMethod;
    ::ll::TypedStorage<4, 4, int>          mParticleCount;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockDestructionParticlesDescription();

    virtual std::string const& getName() const;

    virtual void initializeComponent(::BlockComponentStorage&) const;

    virtual void initializeComponentFromCode(::BlockComponentStorage&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BlockDestructionParticlesDescription(uchar);

    MCNAPI BlockDestructionParticlesDescription(std::string, ::TintMethod, uchar);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);

    MCNAPI static bool postParseConstraint(::Experiments const&, ::Json::Value const&, ::SemVersion const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static uchar const& DEFAULT_NON_CUBE_PARTICLE_COUNT();

    MCNAPI static uchar const& DEFAULT_PARTICLE_COUNT();

    MCNAPI static uchar const& MAX_PARTICLE_COUNT();

    MCNAPI static std::string const& NameID();

    MCNAPI static std::string const& ParticleCountID();

    MCNAPI static std::string const& SchemaID();

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
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::string const& $getName() const;

    MCNAPI void $initializeComponent(::BlockComponentStorage&) const;

    MCNAPI void $initializeComponentFromCode(::BlockComponentStorage&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
