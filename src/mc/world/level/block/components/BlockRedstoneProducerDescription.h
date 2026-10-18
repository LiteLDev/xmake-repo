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
#if defined(LL_PLAT_A) // @header-generator platform
: public ::NetworkedBlockComponentDescription<BlockRedstoneProducerDescription> {
#else // @header-generator platform
: public ::NetworkedBlockComponentDescription<::BlockRedstoneProducerDescription> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, schar>                              mPower;
    ::ll::TypedStorage<2, 4, std::optional<SharedTypes::Facing>> mStronglyPoweredFace;
    ::ll::UntypedStorage<1, 1>                                   mConnectedFaces;
    ::ll::TypedStorage<1, 1, bool>                               mIsTransformRelative;
    ::ll::TypedStorage<1, 1, bool>                               mAllowPowerUp;
    ::ll::TypedStorage<1, 1, bool>                               mAllowPowerDown;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, schar>                                  mPower;
    ::ll::TypedStorage<2, 4, ::std::optional<::SharedTypes::Facing>> mStronglyPoweredFace;
    ::ll::TypedStorage<1, 1, ::Bedrock::EnumSet<::Facing::Name, 6>>  mConnectedFaces;
    ::ll::TypedStorage<1, 1, bool>                                   mIsTransformRelative;
    ::ll::TypedStorage<1, 1, bool>                                   mAllowPowerUp;
    ::ll::TypedStorage<1, 1, bool>                                   mAllowPowerDown;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BlockRedstoneProducerDescription();
#else // @header-generator platform
    virtual ::std::string const& getName() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getName() const;
#else // @header-generator platform
    virtual void initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeComponent(::BlockComponentStorage&) const;
#else // @header-generator platform
    virtual void initializeComponent(::BlockComponentStorage& blockComponentStorage) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeComponentFromCode(::BlockComponentStorage&) const;
#else // @header-generator platform
    virtual ::CompoundTag buildUnboundDataNetworkTag() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::CompoundTag buildUnboundDataNetworkTag() const;

    virtual void initializeUnboundDataFromNetwork(::CompoundTag const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    BlockRedstoneProducerDescription(int, uchar, ::Bedrock::EnumSet<Facing::Name, (Facing::Name)6>, bool, bool, bool);
#else // @header-generator platform
    virtual void initializeUnboundDataFromNetwork(::CompoundTag const& tag) /*override*/;
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
#else // @header-generator platform
    MCAPI static ::std::string const& NameID();
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
    MCFOLD void $initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initializeComponentFromCode(::BlockComponentStorage&) const;
#else // @header-generator platform
    MCAPI void $initializeComponent(::BlockComponentStorage& blockComponentStorage) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CompoundTag $buildUnboundDataNetworkTag() const;
#else // @header-generator platform
    MCAPI ::CompoundTag $buildUnboundDataNetworkTag() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initializeUnboundDataFromNetwork(::CompoundTag const&);
#else // @header-generator platform
    MCAPI void $initializeUnboundDataFromNetwork(::CompoundTag const& tag);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
