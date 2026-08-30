#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/IDimensionManagerConnector.h"
#include "mc/world/level/dimension/DimensionDefinitionGroup.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class DimensionRegistry;
class IDimensionFactory;
class ILevelStorageManagerConnector;
class LevelStorage;
class Random;
struct DimensionIdType;
struct DimensionType;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Util { template<typename T0> class NameIdStore; }
namespace mce { class UUID; }
// clang-format on

class DimensionManager : public ::IDimensionManagerConnector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>                                                    mDimensionNameIdStore;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<DimensionRegistry>>> mDimensionRegistry;
    ::ll::UntypedStorage<8, 24>                                                   mDimensionFactory;
    ::ll::TypedStorage<8, 24, ::DimensionDefinitionGroup>                         mDimensionDefinitionGroup;
    ::ll::UntypedStorage<8, 88>                                mOnReadyForCustomDimensionRegistrationPublisher;
    ::ll::UntypedStorage<8, 88>                                mOnNewDimensionCreatedPublisher;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnLevelStorageSaveSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnLevelStorageStartLeaveGameSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    DimensionManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~DimensionManager();

    virtual ::Bedrock::PubSub::Connector<void (Dimension&)>& getOnNewDimensionCreatedConnector();

    virtual ::Bedrock::PubSub::Connector<void (DimensionManager&)>& getOnReadyForCustomDimensionRegistrationConnector();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DimensionManager(::gsl::not_null<Bedrock::NonOwnerPointer<IDimensionFactory>>);

    MCNAPI DimensionManager(::gsl::not_null<Bedrock::NonOwnerPointer<IDimensionFactory>>, ::DimensionDefinitionGroup);

    MCNAPI bool
    _registerCustomDimensionWithDimensionDefinitionGroup(std::string_view, ::DimensionType const, ::mce::UUID const&);

    MCNAPI void _registerCustomDimensionWithFactory(std::string_view, ::DimensionType const);

    MCNAPI void _registerFixedVanillaDimensionIds();

    MCNAPI void clientRegisterCustomDimension(std::string_view, ::DimensionType const);

    MCNAPI void forEachDimension(std::function<bool(Dimension&)>);

    MCNAPI void forEachDimension(std::function<bool(const Dimension&)>) const;

    MCNAPI ::WeakRef<Dimension> getDimension(::DimensionType) const;

    MCNAPI ::WeakRef<Dimension> getDimension(std::string_view) const;

    MCNAPI std::optional<DimensionDefinitionGroup::DimensionDefinition>
           getDimensionDefinition(::DimensionType const) const;

    MCNAPI std::optional<DimensionDefinitionGroup::DimensionDefinition>
           getDimensionDefinition(std::string const&) const;

    MCNAPI ::DimensionDefinitionGroup& getDimensionDefinitionGroup();

    MCNAPI ::DimensionType getDimensionId(std::string_view) const;

    MCNAPI std::string getDimensionName(::DimensionType const) const;

    MCNAPI ::WeakRef<Dimension> getOrCreateDimension(::DimensionType);

    MCNAPI ::WeakRef<Dimension> getOrCreateDimension(std::string_view);

    MCNAPI ::WeakRef<Dimension> getRandomDimension(::Random&);

    MCNAPI bool hasDimensions() const;

    MCNAPI bool isDimensionTypeActive(::DimensionType const) const;

    MCNAPI void registerCommandAutofill(std::vector<std::pair<std::string, DimensionType>>&) const;

    MCNAPI void serverInitialize(::ILevelStorageManagerConnector&, ::DimensionDefinitionGroup);

    MCNAPI void serverLoadDimensionNameIdStoreTable(::LevelStorage const&);

    MCNAPI std::optional<DimensionType> serverRegisterCustomDimension(std::string_view, ::mce::UUID const&);

    MCNAPI void serverSaveDimensionNameIdStoreTable(::LevelStorage&) const;

    MCNAPI void shutdown();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<IDimensionFactory>>);

    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<IDimensionFactory>>, ::DimensionDefinitionGroup);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::PubSub::Connector<void(Dimension&)>& $getOnNewDimensionCreatedConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void(DimensionManager&)>& $getOnReadyForCustomDimensionRegistrationConnector();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
