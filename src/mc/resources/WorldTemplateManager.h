#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/threading/MPMCQueue.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/thread_model/MultiThreaded.h"
#include "mc/resources/WorldTemplateManagerInitData.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/resources/interface/IWorldTemplateManager.h"

// auto generated forward declare list
// clang-format off
class IWorldTemplateManagerInitializer;
class Pack;
#if defined(LL_PLAT_A) // @header-generator platform
class TaskGroup;
#else // @header-generator platform
#endif // @header-generator platform
class WorldTemplateCollectionView;
#if defined(LL_PLAT_A) // @header-generator platform
class WorldTemplateManagerProxy;
#else // @header-generator platform
#endif // @header-generator platform
struct PackIdVersion;
struct WorldTemplateInfo;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct WorldTemplateManagerInitData;
#endif // @header-generator platform
namespace Bedrock::PubSub { class Subscription; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { class Path; }
#else // @header-generator platform
#endif // @header-generator platform
namespace mce { class UUID; }
// clang-format on

class WorldTemplateManager : public ::IWorldTemplateManager {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // WorldTemplateManager inner types define
    using SortMethod = std::function<
        bool(const std::unique_ptr<const WorldTemplateInfo>&, const std::unique_ptr<const WorldTemplateInfo>&)>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 48, ::WorldTemplateManagerInitData> mData;
    ::ll::TypedStorage<4, 40, std::mutex>                     mInitializeMutex;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>               mInitialized;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>               mStorageDirectoryChangeRequest;
    ::ll::UntypedStorage<8, 616>                              mUpdatesTracker;
    ::ll::UntypedStorage<8, 16>                               mInitTaskGroup;
    ::ll::UntypedStorage<8, 48>                               mSort;
    ::ll::UntypedStorage<8, 88>                               mTemplateModifiedPublisher;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<IWorldTemplateManagerInitializer>>> mInitializer;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 48>  mUnk8b6b74;
    ::ll::UntypedStorage<8, 80>  mUnk4899ec;
    ::ll::UntypedStorage<1, 1>   mUnkc27adc;
    ::ll::UntypedStorage<1, 1>   mUnke65739;
    ::ll::UntypedStorage<8, 616> mUnkacb3ef;
    ::ll::UntypedStorage<8, 8>   mUnk3a5b23;
    ::ll::UntypedStorage<8, 64>  mUnk7f95c8;
    ::ll::UntypedStorage<8, 128> mUnk17d444;
    ::ll::UntypedStorage<8, 8>   mUnkbe7c43;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    WorldTemplateManager& operator=(WorldTemplateManager const&);
    WorldTemplateManager(WorldTemplateManager const&);
#endif // @header-generator platform
    WorldTemplateManager();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~WorldTemplateManager();
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ~WorldTemplateManager() /*override*/;
#else // LL_PLAT_C
    virtual ~WorldTemplateManager() /*override*/ = default;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void flushResourceLoaderTasks();
#else // @header-generator platform
    virtual void flushResourceLoaderTasks() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::WorldTemplateInfo const* findInstalledWorldTemplateByUUID(std::vector<mce::UUID> const&) const;
#else // @header-generator platform
    virtual void populateWorldTemplates() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Subscription registerModifiedCallback(std::function<void (const std::pair<std::string, bool>&)>);
#else // @header-generator platform
    virtual uint64 getWorldTemplateSize() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<std::unique_ptr<const WorldTemplateInfo>> const& getLocalTemplates() const;
#else // @header-generator platform
    virtual ::WorldTemplateInfo const& getWorldTemplateAtIndex(int index) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void populateWorldTemplates();
#else // @header-generator platform
    virtual ::std::vector<::std::unique_ptr<::WorldTemplateInfo const>> const& getLocalTemplates() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getWorldTemplateSize() const;
#else // @header-generator platform
    virtual ::WorldTemplateInfo const*
    findInstalledWorldTemplateByUUID(::std::vector<::mce::UUID> const& packUUIDs) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::WorldTemplateInfo const& getWorldTemplateAtIndex(int) const;
#else // @header-generator platform
    virtual ::WorldTemplateInfo const* findInstalledWorldTemplate(::PackIdVersion const& packIdentityToFind) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isWorldTemplateInstalled(::mce::UUID const&) const;
#else // @header-generator platform
    virtual void forEachWorldTemplate(::std::function<void(::WorldTemplateInfo const&)> const& callback) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void deleteWorldTemplateAndFiles(::PackIdVersion const&);
#else // @header-generator platform
    virtual bool isWorldTemplateInstalled(::mce::UUID const& uuid) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::WorldTemplateInfo const* findInstalledWorldTemplate(::PackIdVersion const&) const;
#else // @header-generator platform
    virtual void deleteWorldTemplateAndFiles(::PackIdVersion const& packIdentity) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::WorldTemplateCollectionView createView(::mce::UUID const&) const;
#else // @header-generator platform
    virtual bool isInitialized() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void forEachWorldTemplate(std::function<void (const WorldTemplateInfo&)> const&) const;
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Subscription registerModifiedCallback(
        ::std::function<void(::std::pair<::std::string, bool> const&)> newCallbackFunction
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isInitialized() const;
    // clang-format on
#else // @header-generator platform
    virtual ::WorldTemplateCollectionView createView(::mce::UUID const& toView) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI WorldTemplateManager(std::unique_ptr<IWorldTemplateManagerInitializer>, bool);
#else // @header-generator platform
    MCNAPI WorldTemplateManager(::std::unique_ptr<::IWorldTemplateManagerInitializer> initializer, bool initAsync);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _initialize(::WorldTemplateManagerInitData&&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void _initialize(::WorldTemplateManagerInitData&& data);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _onStorageDirectoryChanged();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCNAPI void _initialize(::WorldTemplateManagerInitData&& data);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void addKnownPackFromImport(::Pack const& pack);

    MCNAPI ::Core::PathBuffer<::std::string> getWorldTemplatesPath() const;

    MCNAPI ::std::vector<::gsl::not_null<::std::shared_ptr<::Pack const>>>
    loadPacksForTemplate(::WorldTemplateInfo const& info);

    MCNAPI void onStorageDirectoryChanged();

    MCNAPI void setWorldIconAllowListPath(::WorldTemplateInfo const& info, ::std::string path);

    MCNAPI void sortWorldTemplates();

    MCNAPI void update();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::unique_ptr<IWorldTemplateManagerInitializer>, bool);
#else // @header-generator platform
    MCNAPI void* $ctor(::std::unique_ptr<::IWorldTemplateManagerInitializer> initializer, bool initAsync);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $flushResourceLoaderTasks();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::WorldTemplateInfo const* $findInstalledWorldTemplateByUUID(std::vector<mce::UUID> const&) const;

    MCNAPI ::Bedrock::PubSub::Subscription
        $registerModifiedCallback(std::function<void(const std::pair<std::string, bool>&)>);

    MCNAPI std::vector<std::unique_ptr<const WorldTemplateInfo>> const& $getLocalTemplates() const;

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI void $populateWorldTemplates();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $getWorldTemplateSize() const;
#else // @header-generator platform
    MCNAPI uint64 $getWorldTemplateSize() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::WorldTemplateInfo const& $getWorldTemplateAtIndex(int) const;
#else // @header-generator platform
    MCNAPI ::WorldTemplateInfo const& $getWorldTemplateAtIndex(int index) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isWorldTemplateInstalled(::mce::UUID const&) const;
#else // @header-generator platform
    MCNAPI ::std::vector<::std::unique_ptr<::WorldTemplateInfo const>> const& $getLocalTemplates() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $deleteWorldTemplateAndFiles(::PackIdVersion const&);
#else // @header-generator platform
    MCNAPI ::WorldTemplateInfo const*
    $findInstalledWorldTemplateByUUID(::std::vector<::mce::UUID> const& packUUIDs) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::WorldTemplateInfo const* $findInstalledWorldTemplate(::PackIdVersion const&) const;
#else // @header-generator platform
    MCNAPI ::WorldTemplateInfo const* $findInstalledWorldTemplate(::PackIdVersion const& packIdentityToFind) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::WorldTemplateCollectionView $createView(::mce::UUID const&) const;
#else // @header-generator platform
    MCNAPI void $forEachWorldTemplate(::std::function<void(::WorldTemplateInfo const&)> const& callback) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $forEachWorldTemplate(std::function<void(const WorldTemplateInfo&)> const&) const;
#else // @header-generator platform
    MCNAPI bool $isWorldTemplateInstalled(::mce::UUID const& uuid) const;

    MCNAPI void $deleteWorldTemplateAndFiles(::PackIdVersion const& packIdentity);
#endif // @header-generator platform

    MCNAPI bool $isInitialized() const;
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Subscription
    $registerModifiedCallback(::std::function<void(::std::pair<::std::string, bool> const&)> newCallbackFunction);

    MCNAPI ::WorldTemplateCollectionView $createView(::mce::UUID const& toView) const;


#endif // @header-generator platform
    // NOLINTEND
};
