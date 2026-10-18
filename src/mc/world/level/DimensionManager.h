#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/game_refs/OwnerPtr.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/game_refs/WeakRef.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/util/NameIdStore.h"
#endif // @header-generator platform
#include "mc/world/level/IDimensionManagerConnector.h"
#include "mc/world/level/dimension/DimensionDefinitionGroup.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class DimensionRegistry;
class IDimensionFactory;
class ILevelStorageManagerConnector;
class LevelStorage;
#if defined(LL_PLAT_A) // @header-generator platform
class Random;
#else // @header-generator platform
#endif // @header-generator platform
struct DimensionIdType;
struct DimensionType;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Util { template<typename T0> class NameIdStore; }
#else // @header-generator platform
#endif // @header-generator platform
namespace mce { class UUID; }
// clang-format on
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class IDimensionFactory;
#endif // @header-generator platform

class DimensionManager : public ::IDimensionManagerConnector {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 8>                                                    mDimensionNameIdStore;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<DimensionRegistry>>> mDimensionRegistry;
    ::ll::UntypedStorage<8, 24>                                                   mDimensionFactory;
    ::ll::TypedStorage<8, 24, ::DimensionDefinitionGroup>                         mDimensionDefinitionGroup;
    ::ll::UntypedStorage<8, 88>                                mOnReadyForCustomDimensionRegistrationPublisher;
    ::ll::UntypedStorage<8, 88>                                mOnNewDimensionCreatedPublisher;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::Util::NameIdStore<::DimensionIdType>>>>
                                                                                        mDimensionNameIdStore;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::DimensionRegistry>>>   mDimensionRegistry;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IDimensionFactory> const> mDimensionFactory;
    ::ll::TypedStorage<8, 16, ::DimensionDefinitionGroup>                               mDimensionDefinitionGroup;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::DimensionManager&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnReadyForCustomDimensionRegistrationPublisher;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::Dimension&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
                                                               mOnNewDimensionCreatedPublisher;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnLevelStorageSaveSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnLevelStorageStartLeaveGameSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    DimensionManager();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~DimensionManager();
#else // @header-generator platform
    virtual ~DimensionManager() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void (Dimension&)>& getOnNewDimensionCreatedConnector();
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(::DimensionManager&)>&
    getOnReadyForCustomDimensionRegistrationConnector() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void (DimensionManager&)>& getOnReadyForCustomDimensionRegistrationConnector();
    // clang-format on
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(::Dimension&)>& getOnNewDimensionCreatedConnector() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit DimensionManager(::gsl::not_null<Bedrock::NonOwnerPointer<IDimensionFactory>>);
#else // @header-generator platform
    MCAPI explicit DimensionManager(::Bedrock::NotNullNonOwnerPtr<::IDimensionFactory> dimensionFactory);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI DimensionManager(::gsl::not_null<Bedrock::NonOwnerPointer<IDimensionFactory>>, ::DimensionDefinitionGroup);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI DimensionManager(
        ::Bedrock::NotNullNonOwnerPtr<::IDimensionFactory> dimensionFactory,
        ::DimensionDefinitionGroup                         dimensionDefinitions
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool
    _registerCustomDimensionWithDimensionDefinitionGroup(std::string_view, ::DimensionType const, ::mce::UUID const&);
#else // @header-generator platform
    MCAPI bool _registerCustomDimensionWithDimensionDefinitionGroup(
        ::std::string_view name,
        ::DimensionType    type,
        ::mce::UUID const& packId
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _registerCustomDimensionWithFactory(std::string_view, ::DimensionType const);
#else // @header-generator platform
    MCAPI void _registerCustomDimensionWithFactory(::std::string_view name, ::DimensionType type);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _registerFixedVanillaDimensionIds();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void _registerFixedVanillaDimensionIds();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clientRegisterCustomDimension(std::string_view, ::DimensionType const);
#else // @header-generator platform
    MCFOLD void forEachDimension(::std::function<bool(::Dimension&)> callback);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void forEachDimension(std::function<bool(Dimension&)>);
#else // @header-generator platform
    MCFOLD void forEachDimension(::std::function<bool(::Dimension const&)> callback) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void forEachDimension(std::function<bool(const Dimension&)>) const;
#else // @header-generator platform
    MCAPI ::WeakRef<::Dimension> getDimension(::DimensionType dimensionType) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::WeakRef<Dimension> getDimension(::DimensionType) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::std::optional<::DimensionDefinitionGroup::DimensionDefinition>
    getDimensionDefinition(::DimensionType dimensionType) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::WeakRef<Dimension> getDimension(std::string_view) const;
#else // @header-generator platform
    MCAPI ::WeakRef<::Dimension> getOrCreateDimension(::std::string_view dimensionName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<DimensionDefinitionGroup::DimensionDefinition>
           getDimensionDefinition(::DimensionType const) const;
#else // @header-generator platform
    MCAPI ::WeakRef<::Dimension> getOrCreateDimension(::DimensionType dimensionType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<DimensionDefinitionGroup::DimensionDefinition>
           getDimensionDefinition(std::string const&) const;
#else // @header-generator platform
    MCAPI void serverInitialize(
        ::ILevelStorageManagerConnector& levelStorageManagerConnector,
        ::DimensionDefinitionGroup       jsonDefinitionGroup
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void serverSaveDimensionNameIdStoreTable(::LevelStorage& levelStorage) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<IDimensionFactory>>);
#else // @header-generator platform
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::IDimensionFactory> dimensionFactory);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<IDimensionFactory>>, ::DimensionDefinitionGroup);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IDimensionFactory> dimensionFactory,
        ::DimensionDefinitionGroup                         dimensionDefinitions
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Connector<void(Dimension&)>& $getOnNewDimensionCreatedConnector();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI ::Bedrock::PubSub::Connector<void(::DimensionManager&)>& $getOnReadyForCustomDimensionRegistrationConnector();
#else // LL_PLAT_C
    MCFOLD ::Bedrock::PubSub::Connector<void(::DimensionManager&)>&
    $getOnReadyForCustomDimensionRegistrationConnector();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Connector<void(DimensionManager&)>& $getOnReadyForCustomDimensionRegistrationConnector();
    // NOLINTEND
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI ::Bedrock::PubSub::Connector<void(::Dimension&)>& $getOnNewDimensionCreatedConnector();
#else // LL_PLAT_C
    MCFOLD ::Bedrock::PubSub::Connector<void(::Dimension&)>& $getOnNewDimensionCreatedConnector();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
