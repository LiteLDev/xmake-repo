#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/util/IResourcePackFileDownloaderManager.h"
#include "mc/client/util/ResourcePackFileDownloadError.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class DownloadStorageHandle;
class DownloadStorageTracker;
class PacketSender;
class ResourcePackFileDownloader;
class TaskGroup;
struct FileChunkInfo;
namespace Core { class Path; }
namespace Core::ZipUtils { class IZipUtility; }
// clang-format on

class ResourcePackFileDownloaderManager : public ::IResourcePackFileDownloaderManager {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 24> mAppPlatform;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<const Core::ZipUtils::IZipUtility>>> mZipUtility;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<DownloadStorageTracker>>> mDownloadStorageTracker;
    ::ll::TypedStorage<8, 8, ::PacketSender&> mPacketSender;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::shared_ptr<ResourcePackFileDownloader>>> mResourceDownloadManagers;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackFileDownloaderManager& operator=(ResourcePackFileDownloaderManager const&);
    ResourcePackFileDownloaderManager(ResourcePackFileDownloaderManager const&);
    ResourcePackFileDownloaderManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ResourcePackFileDownloaderManager();

    virtual void tryStartDownloadingFile(::TaskGroup&, std::string const&, uint, int, ulong, std::string const&, bool, ::PackType, std::function<void ()>, std::function<void (float, ulong)>, std::function<void (const Core::Path&)>, std::function<void (ResourcePackFileDownloadError)>);

    virtual ::Bedrock::Threading::SharedAsync<void> chunkReceived(::TaskGroup&, std::string const&, ::FileChunkInfo const&, std::vector<uchar>);

    virtual void cleanup();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ResourcePackFileDownloaderManager(
        ::gsl::not_null<Bedrock::NonOwnerPointer<AppPlatform>>,
        std::unique_ptr<const Core::ZipUtils::IZipUtility>&&,
        ::PacketSender&,
        std::unique_ptr<DownloadStorageTracker>&&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<AppPlatform>>,
        std::unique_ptr<const Core::ZipUtils::IZipUtility>&&,
        ::PacketSender&,
        std::unique_ptr<DownloadStorageTracker>&&
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
    MCNAPI void $tryStartDownloadingFile(
        ::TaskGroup&,
        std::string const&,
        uint,
        int,
        ulong,
        std::string const&,
        bool,
        ::PackType,
        std::function<void()>,
        std::function<void(float, ulong)>,
        std::function<void(const Core::Path&)>,
        std::function<void(ResourcePackFileDownloadError)>
    );

    MCNAPI ::Bedrock::Threading::SharedAsync<void>
    $chunkReceived(::TaskGroup&, std::string const&, ::FileChunkInfo const&, std::vector<uchar>);

    MCNAPI void $cleanup();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
