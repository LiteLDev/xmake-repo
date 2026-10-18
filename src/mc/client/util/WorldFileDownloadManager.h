#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/resources/LoadImportedLevelData.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/DownloadError.h"
#include "mc/util/DownloaderResult.h"
#include "mc/util/FileDownloadManager.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class ExternalContentManager;
class FileArchiver;
class IContentAccessibilityProvider;
class IFileChunkDownloader;
class IFilePicker;
class ILevelListCache;
class ImportContext;
class LevelDbEnv;
// clang-format on

class WorldFileDownloadManager : public ::FileDownloadManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                               mCachePathRoot;
    ::ll::UntypedStorage<8, 24>                               mFileArchiver;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>              mLevelListCache;
    ::ll::UntypedStorage<8, 24>                               mLevelDbEnv;
    ::ll::UntypedStorage<8, 24>                               mExternalContentManager;
    ::ll::TypedStorage<1, 1, bool>                            mDownloadDone;
    ::ll::UntypedStorage<8, 24>                               mDownloadFilePath;
    ::ll::TypedStorage<8, 24, std::string>                    mRealmName;
    ::ll::TypedStorage<8, 24, std::string>                    mRealmVersionName;
    ::ll::TypedStorage<8, 24, std::string>                    mCurrentUserXuid;
    ::ll::TypedStorage<8, 24, std::string>                    mFileType;
    ::ll::TypedStorage<8, 24, std::string>                    mCurrentDownloadId;
    ::ll::UntypedStorage<8, 24>                               mAccessibilityProvider;
    ::ll::TypedStorage<1, 1, bool const>                      mAppendCopy;
    ::ll::TypedStorage<8, 24, std::string>                    mLevelId;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ImportContext>> mContext;
    ::ll::TypedStorage<4, 4, ::LoadImportedLevelData>         mLaunchOnImportWithContext;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldFileDownloadManager& operator=(WorldFileDownloadManager const&);
    WorldFileDownloadManager(WorldFileDownloadManager const&);
    WorldFileDownloadManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldFileDownloadManager();

    virtual void update();

    virtual void cancelDownload();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldFileDownloadManager(
        ::gsl::not_null<Bedrock::NonOwnerPointer<FileArchiver>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<LevelDbEnv>>,
        std::shared_ptr<IFilePicker>,
        std::shared_ptr<IFileChunkDownloader>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<AppPlatform>>,
        ::ILevelListCache&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentAccessibilityProvider>> const&,
        ::Bedrock::NonOwnerPointer<ExternalContentManager>,
        bool const,
        std::string const&
    );

    MCNAPI void _downloadArchivedFile(
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::shared_ptr<ImportContext>,
        int const
    );

    MCNAPI bool canCancelWorldDownload() const;

    MCNAPI void downloadArchivedFile(
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        int const
    );

    MCNAPI void downloadArchivedFile(
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::shared_ptr<ImportContext>
    );

    MCNAPI void setOptionsForImportWithContext(::LoadImportedLevelData const, std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<FileArchiver>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<LevelDbEnv>>,
        std::shared_ptr<IFilePicker>,
        std::shared_ptr<IFileChunkDownloader>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<AppPlatform>>,
        ::ILevelListCache&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentAccessibilityProvider>> const&,
        ::Bedrock::NonOwnerPointer<ExternalContentManager>,
        bool const,
        std::string const&
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
    MCNAPI void $update();

    MCNAPI void $cancelDownload();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class WorldFileDownloadManager {};
#endif // @header-generator platform
