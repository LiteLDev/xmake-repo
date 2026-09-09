#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/MPMCQueue.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/thread_model/MultiThreaded.h"
#include "mc/resources/WorldTemplateManagerInitData.h"
#include "mc/resources/interface/IWorldTemplateManager.h"

// auto generated forward declare list
// clang-format off
class IWorldTemplateManagerInitializer;
class Pack;
class TaskGroup;
class WorldTemplateCollectionView;
class WorldTemplateManagerProxy;
struct PackIdVersion;
struct WorldTemplateInfo;
namespace Bedrock::PubSub { class Subscription; }
namespace Core { class Path; }
namespace mce { class UUID; }
// clang-format on

class WorldTemplateManager : public ::IWorldTemplateManager {
public:
    // WorldTemplateManager inner types define
    using SortMethod = std::function<
        bool(const std::unique_ptr<const WorldTemplateInfo>&, const std::unique_ptr<const WorldTemplateInfo>&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::WorldTemplateManagerInitData> mData;
    ::ll::TypedStorage<4, 40, std::mutex>                     mInitializeMutex;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>               mInitialized;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>               mStorageDirectoryChangeRequest;
    ::ll::UntypedStorage<8, 616>                              mUpdatesTracker;
    ::ll::UntypedStorage<8, 16>                               mInitTaskGroup;
    ::ll::UntypedStorage<8, 48>                               mSort;
    ::ll::UntypedStorage<8, 88>                               mTemplateModifiedPublisher;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<IWorldTemplateManagerInitializer>>> mInitializer;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~WorldTemplateManager();

    virtual void flushResourceLoaderTasks();

    virtual ::WorldTemplateInfo const* findInstalledWorldTemplateByUUID(std::vector<mce::UUID> const&) const;

    virtual ::Bedrock::PubSub::Subscription registerModifiedCallback(std::function<void (const std::pair<std::string, bool>&)>);

    virtual std::vector<std::unique_ptr<const WorldTemplateInfo>> const& getLocalTemplates() const;

    virtual void populateWorldTemplates();

    virtual ulong getWorldTemplateSize() const;

    virtual ::WorldTemplateInfo const& getWorldTemplateAtIndex(int) const;

    virtual bool isWorldTemplateInstalled(::mce::UUID const&) const;

    virtual void deleteWorldTemplateAndFiles(::PackIdVersion const&);

    virtual ::WorldTemplateInfo const* findInstalledWorldTemplate(::PackIdVersion const&) const;

    virtual ::WorldTemplateCollectionView createView(::mce::UUID const&) const;

    virtual void forEachWorldTemplate(std::function<void (const WorldTemplateInfo&)> const&) const;

    virtual bool isInitialized() const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldTemplateManager(std::unique_ptr<IWorldTemplateManagerInitializer>, bool);

    MCNAPI void _initialize(::WorldTemplateManagerInitData&&);

    MCNAPI void _onStorageDirectoryChanged();

    MCNAPI void addKnownPackFromImport(::Pack const&);

    MCNAPI void deleteWorldTemplate(::PackIdVersion const&);

    MCNAPI ::WorldTemplateInfo const* findWorldTemplateAtIndex(int);

    MCNAPI std::vector<PackIdVersion> const& getLocalPremiumPackIds() const;

    MCNAPI ::Core::PathBuffer<std::string> getWorldTemplatesPath() const;

    MCNAPI std::vector<gsl::not_null<std::shared_ptr<const Pack>>> loadPacksForTemplate(::WorldTemplateInfo const&);

    MCNAPI void onStorageDirectoryChanged();

    MCNAPI void setSortMethod(
        std::function<
            bool(const std::unique_ptr<const WorldTemplateInfo>&, const std::unique_ptr<const WorldTemplateInfo>&)>
    );

    MCNAPI void setWorldIconAllowListPath(::WorldTemplateInfo const&, std::string);

    MCNAPI void sortWorldTemplates();

    MCNAPI void update();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::unique_ptr<IWorldTemplateManagerInitializer>, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $flushResourceLoaderTasks();

    MCNAPI ::WorldTemplateInfo const* $findInstalledWorldTemplateByUUID(std::vector<mce::UUID> const&) const;

    MCNAPI ::Bedrock::PubSub::Subscription
        $registerModifiedCallback(std::function<void(const std::pair<std::string, bool>&)>);

    MCNAPI std::vector<std::unique_ptr<const WorldTemplateInfo>> const& $getLocalTemplates() const;

    MCNAPI void $populateWorldTemplates();

    MCNAPI ulong $getWorldTemplateSize() const;

    MCNAPI ::WorldTemplateInfo const& $getWorldTemplateAtIndex(int) const;

    MCNAPI bool $isWorldTemplateInstalled(::mce::UUID const&) const;

    MCNAPI void $deleteWorldTemplateAndFiles(::PackIdVersion const&);

    MCNAPI ::WorldTemplateInfo const* $findInstalledWorldTemplate(::PackIdVersion const&) const;

    MCNAPI ::WorldTemplateCollectionView $createView(::mce::UUID const&) const;

    MCNAPI void $forEachWorldTemplate(std::function<void(const WorldTemplateInfo&)> const&) const;

    MCNAPI bool $isInitialized() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
