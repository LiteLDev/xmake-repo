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

struct BlockConnectionRuleDescription : public ::NetworkedBlockComponentDescription<BlockConnectionRuleDescription> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>                                               mConnectionsFromMask;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_20::ConnectionType>        mConnectionsFrom;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_26_20::Direction>> mEnabledDirections;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockConnectionRuleDescription();

    virtual std::string const& getName() const;

    virtual void initializeComponent(::BlockComponentStorage&) const;

    virtual void initializeComponentFromCode(::BlockComponentStorage&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockConnectionRuleDescription(
        ::Bedrock::EnumSet<ConnectionID, (ConnectionID)4>,
        std::vector<SharedTypes::v1_26_20::Direction>
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::unordered_map<
        SharedTypes::v1_26_20::ConnectionType,
        const Bedrock::EnumSet<ConnectionID, (ConnectionID)4>> const&
    CONNECTION_TO_MASK();

    MCNAPI static std::string const& NameID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
        $ctor(::Bedrock::EnumSet<ConnectionID, (ConnectionID)4>, std::vector<SharedTypes::v1_26_20::Direction>);
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
