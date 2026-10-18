#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/util/ResourcePackFileDownloadError.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/FileChunkManager.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class DownloadStorageHandle;
class PacketSender;
class TaskGroup;
struct FileChunk;
struct FileChunkInfo;
namespace Core { class Path; }
namespace Core::ZipUtils { class IZipUtility; }
// clang-format on

class ResourcePackFileDownloader : public ::std::enable_shared_from_this<ResourcePackFileDownloader> {
#else // @header-generator platform
class ResourcePackFileDownloader {
#endif // @header-generator platform
public:
    // ResourcePackFileDownloader inner types declare
    // clang-format off
    struct FileChunkBatch;
    // clang-format on

    // ResourcePackFileDownloader inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class ChunkOpResult : int {
        DidNothing     = 0,
        ReceivedChunks = 1,
        WroteAllChunks = 2,
        WriteFailure   = 3,
        UnzipFailure   = 4,
    };
#else // @header-generator platform
    enum class ChunkOpResult : int {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct FileChunkBatch {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong>               startByte;
        ::ll::TypedStorage<8, 8, ulong>               endByte;
        ::ll::TypedStorage<8, 24, std::vector<uchar>> data;
        ::ll::TypedStorage<1, 1, bool>                isLastChunks;
        // NOLINTEND

    public:
        // prevent constructor by default
        FileChunkBatch& operator=(FileChunkBatch const&);
        FileChunkBatch();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                   mAppPlatform;
    ::ll::TypedStorage<8, 8, ::PacketSender&>                                     mPacketSender;
    ::ll::TypedStorage<8, 24, std::string>                                        mResourceName;
    ::ll::TypedStorage<8, 24, std::string>                                        mFileHash;
    ::ll::UntypedStorage<8, 24>                                                   mZipFilePath;
    ::ll::UntypedStorage<8, 24>                                                   mResourcePath;
    ::ll::UntypedStorage<8, 104>                                                  mChunkManager;
    ::ll::UntypedStorage<8, 48>                                                   mCompletionCallback;
    ::ll::UntypedStorage<8, 48>                                                   mProgressCallback;
    ::ll::TypedStorage<8, 8, ::TaskGroup&>                                        mIOTaskGroup;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const Core::ZipUtils::IZipUtility*>> mZipUtility;
    ::ll::UntypedStorage<8, 16>                                                   mLastWriteTask;
    ::ll::TypedStorage<8, 16, std::shared_ptr<DownloadStorageHandle>>             mStorageHandle;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackFileDownloader& operator=(ResourcePackFileDownloader const&);
    ResourcePackFileDownloader(ResourcePackFileDownloader const&);
    ResourcePackFileDownloader();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ResourcePackFileDownloader();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _cancel(::ResourcePackFileDownloadError);

    MCNAPI void _handleChunkResult(::ResourcePackFileDownloader::ChunkOpResult);

    MCNAPI void _requestChunk(int);

    MCNAPI void cleanup();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    struct FileChunkBatch {};
#endif // @header-generator platform
};
