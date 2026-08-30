#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/deps/shared_types/legacy/Facing.h"
#include "mc/legacy/facing/Name.h"
#include "mc/world/level/block/components/NetworkedBlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
class CompoundTag;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockRedstoneProducerDescription
: public ::NetworkedBlockComponentDescription<BlockRedstoneProducerDescription> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, schar>                              mPower;
    ::ll::TypedStorage<2, 4, std::optional<SharedTypes::Facing>> mStronglyPoweredFace;
    ::ll::UntypedStorage<1, 1>                                   mConnectedFaces;
    ::ll::TypedStorage<1, 1, bool>                               mIsTransformRelative;
    ::ll::TypedStorage<1, 1, bool>                               mAllowPowerUp;
    ::ll::TypedStorage<1, 1, bool>                               mAllowPowerDown;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockRedstoneProducerDescription();

    virtual std::string const& getName() const;

    virtual void initializeComponent(::BlockComponentStorage&) const;

    virtual void initializeComponentFromCode(::BlockComponentStorage&) const;

    virtual ::CompoundTag buildUnboundDataNetworkTag() const;

    virtual void initializeUnboundDataFromNetwork(::CompoundTag const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    BlockRedstoneProducerDescription(int, uchar, ::Bedrock::EnumSet<Facing::Name, (Facing::Name)6>, bool, bool, bool);
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
    MCNAPI void* $ctor(int, uchar, ::Bedrock::EnumSet<Facing::Name, (Facing::Name)6>, bool, bool, bool);
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

    MCNAPI ::CompoundTag $buildUnboundDataNetworkTag() const;

    MCNAPI void $initializeUnboundDataFromNetwork(::CompoundTag const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
