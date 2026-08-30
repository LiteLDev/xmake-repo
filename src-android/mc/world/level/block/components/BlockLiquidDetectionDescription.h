#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_0/block/DetectionRule.h"
#include "mc/deps/shared_types/v1_26_0/block/LiquidReaction.h"
#include "mc/deps/shared_types/v1_26_0/block/LiquidType.h"
#include "mc/util/BidirectionalUnorderedMap.h"
#include "mc/world/level/block/components/BlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
class CerealSchemaUpgradeSet;
class CompoundTag;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockLiquidDetectionDescription : public ::BlockComponentDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_26_0::DetectionRule>> mDetectionRules;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockLiquidDetectionDescription();

    virtual std::string const& getName() const;

    virtual void initializeComponent(::BlockComponentStorage&) const;

    virtual void initializeComponentFromCode(::BlockComponentStorage&) const;

    virtual bool isNetworkComponent() const;

    virtual std::unique_ptr<CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const&) const;

    virtual void initializeFromNetwork(::CompoundTag const&, ::cereal::ReflectionCtx const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BlockLiquidDetectionDescription(std::vector<SharedTypes::v1_26_0::DetectionRule>);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);

    MCNAPI static void registerVersionUpgrades(::CerealSchemaUpgradeSet&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& NameID();

    MCNAPI static ::BidirectionalUnorderedMap<std::string, SharedTypes::v1_26_0::LiquidReaction> const&
    liquidReactionNameBiMap();

    MCNAPI static ::BidirectionalUnorderedMap<std::string, SharedTypes::v1_26_0::LiquidType> const&
    liquidTypeNameBiMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::vector<SharedTypes::v1_26_0::DetectionRule>);
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
