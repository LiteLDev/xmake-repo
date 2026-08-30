#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/FileUploadManager.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class FileArchiver;
class IFileChunkUploader;
class ResourceLocation;
class TaskGroup;
namespace Core { class Path; }
namespace Core { class PathView; }
namespace Core::ZipUtils { class IZipUtility; }
namespace Json { class Value; }
namespace ResourcePackPathLifetimeHelpers { class ResourcePackPathCache; }
namespace ResourcePackPathLifetimeHelpers { class ScopeDestroyedPath; }
// clang-format on

class ResourcePackFileUploadManager : public ::FileUploadManager {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 24> mAppPlatform;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<const ResourcePackPathLifetimeHelpers::ScopeDestroyedPath>>> mZipPaths;
    ::ll::TypedStorage<8, 8, ::ResourcePackPathLifetimeHelpers::ResourcePackPathCache&> mResourcePackPathCache;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Bedrock::Threading::SharedAsync<void>>>> mPreviousUpload;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<Core::ZipUtils::IZipUtility>>> mZipUtility;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackFileUploadManager& operator=(ResourcePackFileUploadManager const&);
    ResourcePackFileUploadManager(ResourcePackFileUploadManager const&);
    ResourcePackFileUploadManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ResourcePackFileUploadManager();

    virtual void archiveAndUploadFileToRealmStorage(std::string const&, ::Core::Path const&, int const, std::string const&);

    virtual void uploadFileToRealmStorage(std::string const&, ::Core::Path const&, int const);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ResourcePackFileUploadManager(
        ::gsl::not_null<Bedrock::NonOwnerPointer<AppPlatform>>,
        ::TaskGroup&,
        std::shared_ptr<IFileChunkUploader>,
        std::unique_ptr<Core::ZipUtils::IZipUtility>&&,
        std::shared_ptr<Bedrock::Threading::SharedAsync<void>>,
        ::ResourcePackPathLifetimeHelpers::ResourcePackPathCache&
    );

    MCNAPI ResourcePackFileUploadManager(
        ::gsl::not_null<Bedrock::NonOwnerPointer<AppPlatform>>,
        ::TaskGroup&,
        std::shared_ptr<IFileChunkUploader>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<FileArchiver>> const&,
        std::unique_ptr<Core::ZipUtils::IZipUtility>&&,
        std::shared_ptr<Bedrock::Threading::SharedAsync<void>>,
        ::ResourcePackPathLifetimeHelpers::ResourcePackPathCache&
    );

    MCNAPI ::Bedrock::Threading::Async<void> uploadResourcePack(
        std::string const&,
        ::ResourceLocation const&,
        bool,
        ::Core::PathBuffer<std::string> const&,
        bool,
        ::PackType
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<AppPlatform>>,
        ::TaskGroup&,
        std::shared_ptr<IFileChunkUploader>,
        std::unique_ptr<Core::ZipUtils::IZipUtility>&&,
        std::shared_ptr<Bedrock::Threading::SharedAsync<void>>,
        ::ResourcePackPathLifetimeHelpers::ResourcePackPathCache&
    );

    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<AppPlatform>>,
        ::TaskGroup&,
        std::shared_ptr<IFileChunkUploader>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<FileArchiver>> const&,
        std::unique_ptr<Core::ZipUtils::IZipUtility>&&,
        std::shared_ptr<Bedrock::Threading::SharedAsync<void>>,
        ::ResourcePackPathLifetimeHelpers::ResourcePackPathCache&
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
    MCNAPI void
    $archiveAndUploadFileToRealmStorage(std::string const&, ::Core::Path const&, int const, std::string const&);

    MCNAPI void $uploadFileToRealmStorage(std::string const&, ::Core::Path const&, int const);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
