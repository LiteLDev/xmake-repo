#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/deps/shared_types/v1_26_20/block/ConnectionType.h"
#include "mc/deps/shared_types/v1_26_20/block/Direction.h"
#include "mc/world/level/block/components/ConnectionID.h"
#include "mc/world/level/block/components/NetworkedBlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
namespace cereal { struct ReflectionCtx; }
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
struct BlockConnectionRuleDescription : public ::NetworkedBlockComponentDescription<BlockConnectionRuleDescription> {
#else // @header-generator platform
struct BlockConnectionRuleDescription : public ::NetworkedBlockComponentDescription<::BlockConnectionRuleDescription> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 1>                                               mConnectionsFromMask;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_20::ConnectionType>        mConnectionsFrom;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_26_20::Direction>> mEnabledDirections;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, ::Bedrock::EnumSet<::ConnectionID, 4>>              mConnectionsFromMask;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_20::ConnectionType>            mConnectionsFrom;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_26_20::Direction>> mEnabledDirections;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BlockConnectionRuleDescription();
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
#else // @header-generator platform
    virtual ~BlockConnectionRuleDescription() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
#else // @header-generator platform
    // static functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BlockConnectionRuleDescription(
        ::Bedrock::EnumSet<ConnectionID, (ConnectionID)4>,
        std::vector<SharedTypes::v1_26_20::Direction>
    );
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unordered_map<
        SharedTypes::v1_26_20::ConnectionType,
        const Bedrock::EnumSet<ConnectionID, (ConnectionID)4>> const&
    CONNECTION_TO_MASK();
#else // @header-generator platform
    MCAPI static ::std::
        unordered_map<::SharedTypes::v1_26_20::ConnectionType, ::Bedrock::EnumSet<::ConnectionID, 4> const> const&
        CONNECTION_TO_MASK();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& NameID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
        $ctor(::Bedrock::EnumSet<ConnectionID, (ConnectionID)4>, std::vector<SharedTypes::v1_26_20::Direction>);
#else // @header-generator platform
    MCAPI static ::std::string const& NameID();
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
    MCFOLD void $initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
