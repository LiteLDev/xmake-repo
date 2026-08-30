#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/BlockComponentDescription.h"
#include "mc/world/level/block/components/BlockGeometryDescription.h"
#include "mc/world/level/block/components/BlockMaterialInstancesDescription.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
class CompoundTag;
class SemVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockItemVisualDescription : public ::BlockComponentDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 264>                                   mGeometryDescription;
    ::ll::TypedStorage<8, 96, ::BlockMaterialInstancesDescription> mMaterialInstanceDescription;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockItemVisualDescription();

    virtual std::string const& getName() const;

    virtual void initializeComponent(::BlockComponentStorage&) const;

    virtual void initializeComponentFromCode(::BlockComponentStorage&) const;

    virtual bool isNetworkComponent() const;

    virtual std::unique_ptr<CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const&) const;

    virtual void initializeFromNetwork(::CompoundTag const&, ::cereal::ReflectionCtx const&);

    virtual void handleVersionBasedInitialization(::SemVersion const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockItemVisualDescription(::BlockGeometryDescription const&, ::BlockMaterialInstancesDescription const&);
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

    MCNAPI bool $isNetworkComponent() const;

    MCNAPI std::unique_ptr<CompoundTag> $buildNetworkTag(::cereal::ReflectionCtx const&) const;

    MCNAPI void $initializeFromNetwork(::CompoundTag const&, ::cereal::ReflectionCtx const&);

    MCNAPI void $handleVersionBasedInitialization(::SemVersion const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
