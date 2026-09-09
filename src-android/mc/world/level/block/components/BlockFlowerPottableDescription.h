#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/NetworkedBlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
class CompoundTag;
class SemVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockFlowerPottableDescription : public ::NetworkedBlockComponentDescription<BlockFlowerPottableDescription> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mUsePreR26U2FlowerPotOffset;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockFlowerPottableDescription& operator=(BlockFlowerPottableDescription const&);
    BlockFlowerPottableDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockFlowerPottableDescription();

    virtual std::string const& getName() const;

    virtual void initializeComponent(::BlockComponentStorage&) const;

    virtual void initializeComponentFromCode(::BlockComponentStorage&) const;

    virtual void handleVersionBasedInitialization(::SemVersion const&);

    virtual ::CompoundTag buildUnboundDataNetworkTag() const;

    virtual void initializeUnboundDataFromNetwork(::CompoundTag const&);
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

    MCNAPI ::CompoundTag $buildUnboundDataNetworkTag() const;

    MCNAPI void $initializeUnboundDataFromNetwork(::CompoundTag const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
