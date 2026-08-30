#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/library/DeepLinkType.h"
#include "mc/deps/application/UriListener.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/Subject.h"
#include "mc/util/DownloadError.h"

// auto generated forward declare list
// clang-format off
class ActivationUri;
class EduDeeplinkObserver;
class ExternalContentManager;
class FileArchiver;
class IContentAccessibilityProvider;
class ILevelListCache;
class IMinecraftEventing;
class IResourcePackRepository;
class ISceneStack;
class LevelDbEnv;
class LibraryItem;
class LibraryRepository;
class MainMenuScreenModel;
class ResourcePackManager;
class SceneFactory;
class ToastManager;
class WorldFileDownloadManager;
class WorldTemplateManager;
struct LibraryDeeplink;
namespace Core { class SingleThreadedLock; }
// clang-format on

class LibraryDeeplinkListener : public ::UriListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                mLibraryDeeplinkListener;
    ::ll::UntypedStorage<8, 48>                                mGetSceneStack;
    ::ll::UntypedStorage<8, 48>                                mGetPrimarySceneFactory;
    ::ll::UntypedStorage<8, 48>                                mGetLibraryRepository;
    ::ll::UntypedStorage<8, 48>                                mRequestLeaveGame;
    ::ll::UntypedStorage<8, 48>                                mIsLeavingGameDone;
    ::ll::UntypedStorage<8, 48>                                mIsInGame;
    ::ll::UntypedStorage<8, 48>                                mIsDemo;
    ::ll::UntypedStorage<8, 48>                                mGetResourcePackRepository;
    ::ll::UntypedStorage<8, 48>                                mGetResourcePackManager;
    ::ll::UntypedStorage<8, 48>                                mGetEventing;
    ::ll::UntypedStorage<8, 48>                                mGetToastManager;
    ::ll::UntypedStorage<8, 48>                                mGetWorldTemplateManager;
    ::ll::UntypedStorage<8, 48>                                mGetFileArchiver;
    ::ll::UntypedStorage<8, 48>                                mGetLevelDbEnv;
    ::ll::UntypedStorage<8, 48>                                mGetLevelListCache;
    ::ll::UntypedStorage<8, 48>                                mGetAccessibilityProvider;
    ::ll::UntypedStorage<8, 48>                                mGetContentManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<LibraryDeeplink>> mPendingLink;
    ::ll::TypedStorage<4, 40, std::mutex>                      mLinkMutex;
    ::ll::TypedStorage<8, 16, std::shared_ptr<bool>>           mExistenceTracker;
    ::ll::TypedStorage<8, 8, std::unique_ptr<LibraryDeeplink>> mLeaveGamePendingLink;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Core::Subject<EduDeeplinkObserver, Core::SingleThreadedLock>>> mSubject;
    ::ll::TypedStorage<8, 16, std::shared_ptr<WorldFileDownloadManager>> mWorldFileDownloadManager;
    ::ll::TypedStorage<8, 16, std::shared_ptr<LibraryItem>>              mLibraryItem;
    ::ll::TypedStorage<8, 16, std::shared_ptr<MainMenuScreenModel>>      mMainMenuScreenModel;
    ::ll::UntypedStorage<8, 48>                                          mOnDownloadError;
    ::ll::UntypedStorage<1, 16>                                          mIsDownloadInProgress;
    // NOLINTEND

public:
    // prevent constructor by default
    LibraryDeeplinkListener();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LibraryDeeplinkListener();

    virtual void onUri(::ActivationUri const&);

    virtual void tick();

    virtual void executeStartupUris();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LibraryDeeplinkListener(
        std::function<gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>>()>,
        std::function<SceneFactory&()>,
        std::function<gsl::not_null<Bedrock::NonOwnerPointer<LibraryRepository>>()>,
        std::function<void()>,
        std::function<bool()>,
        std::function<bool()>,
        std::function<bool()>,
        std::function<IResourcePackRepository&()>,
        std::function<ResourcePackManager&()>,
        std::function<IMinecraftEventing&()>,
        std::function<ToastManager&()>,
        std::function<gsl::not_null<Bedrock::NonOwnerPointer<WorldTemplateManager>>()>,
        std::function<gsl::not_null<Bedrock::NonOwnerPointer<FileArchiver>>()>,
        std::function<gsl::not_null<Bedrock::NonOwnerPointer<LevelDbEnv>>()>,
        std::function<ILevelListCache&()>,
        std::function<gsl::not_null<Bedrock::NonOwnerPointer<IContentAccessibilityProvider>>()>,
        std::function<gsl::not_null<Bedrock::NonOwnerPointer<ExternalContentManager>>()>
    );

    MCNAPI void _downloadWorld(
        ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>>,
        std::unordered_map<std::string, std::string>
    );

    MCNAPI std::vector<std::pair<std::string, std::string>> _getEventPropertiesForLink(::LibraryDeeplink const&) const;

    MCNAPI void _launchWorld();

    MCNAPI bool _mayChangeScreens() const;

    MCNAPI void _navigateToLibraryOrWorldLink(std::unique_ptr<LibraryDeeplink>, bool);

    MCNAPI void _navigateToLink(std::unique_ptr<LibraryDeeplink>);

    MCNAPI void addObserver(::EduDeeplinkObserver&);

    MCNAPI void resetWorldImportParameters();

    MCNAPI void setMainMenuParameters(std::shared_ptr<MainMenuScreenModel>, std::function<void(const DownloadError&)>);

    MCNAPI void setPendingLink(std::string, ::DeepLinkType, std::unordered_map<std::string, std::string>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::function<gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>>()>,
        std::function<SceneFactory&()>,
        std::function<gsl::not_null<Bedrock::NonOwnerPointer<LibraryRepository>>()>,
        std::function<void()>,
        std::function<bool()>,
        std::function<bool()>,
        std::function<bool()>,
        std::function<IResourcePackRepository&()>,
        std::function<ResourcePackManager&()>,
        std::function<IMinecraftEventing&()>,
        std::function<ToastManager&()>,
        std::function<gsl::not_null<Bedrock::NonOwnerPointer<WorldTemplateManager>>()>,
        std::function<gsl::not_null<Bedrock::NonOwnerPointer<FileArchiver>>()>,
        std::function<gsl::not_null<Bedrock::NonOwnerPointer<LevelDbEnv>>()>,
        std::function<ILevelListCache&()>,
        std::function<gsl::not_null<Bedrock::NonOwnerPointer<IContentAccessibilityProvider>>()>,
        std::function<gsl::not_null<Bedrock::NonOwnerPointer<ExternalContentManager>>()>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onUri(::ActivationUri const&);

    MCNAPI void $tick();

    MCNAPI void $executeStartupUris();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
