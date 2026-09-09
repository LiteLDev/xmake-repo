#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/BlockGeometryDescription.h"
#include "mc/world/level/block/components/BlockMaterialInstancesDescription.h"
#include "mc/world/level/block/components/NetworkedBlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
class SemVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockEmbeddedVisualDescription : public ::NetworkedBlockComponentDescription<BlockEmbeddedVisualDescription> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 264>                                   mGeometry;
    ::ll::TypedStorage<8, 96, ::BlockMaterialInstancesDescription> mMaterialInstances;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockEmbeddedVisualDescription();

    virtual std::string const& getName() const;

    virtual void initializeComponent(::BlockComponentStorage&) const;

    virtual void initializeComponentFromCode(::BlockComponentStorage&) const;

    virtual void handleVersionBasedInitialization(::SemVersion const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    BlockEmbeddedVisualDescription(::BlockGeometryDescription const&, ::BlockMaterialInstancesDescription const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& NameID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockGeometryDescription const&, ::BlockMaterialInstancesDescription const&);
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

    MCNAPI void $handleVersionBasedInitialization(::SemVersion const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
