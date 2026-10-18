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
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { class PathView; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Core::ZipUtils { class IZipUtility; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Json { class Value; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ResourcePackPathLifetimeHelpers { class ResourcePackPathCache; }
namespace ResourcePackPathLifetimeHelpers { class ScopeDestroyedPath; }
// clang-format on

class ResourcePackFileUploadManager : public ::FileUploadManager {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::UntypedStorage<8, 24> mAppPlatform;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<const ResourcePackPathLifetimeHelpers::ScopeDestroyedPath>>> mZipPaths;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::AppPlatform>> mAppPlatform;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::shared_ptr<::ResourcePackPathLifetimeHelpers::ScopeDestroyedPath const>>>
                                                                                        mZipPaths;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ResourcePackPathLifetimeHelpers::ResourcePackPathCache&> mResourcePackPathCache;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Bedrock::Threading::SharedAsync<void>>>> mPreviousUpload;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<Core::ZipUtils::IZipUtility>>> mZipUtility;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::Bedrock::Threading::SharedAsync<void>>>>
                                                                                                mPreviousUpload;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::Core::ZipUtils::IZipUtility>>> mZipUtility;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackFileUploadManager& operator=(ResourcePackFileUploadManager const&);
    ResourcePackFileUploadManager(ResourcePackFileUploadManager const&);
    ResourcePackFileUploadManager();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ResourcePackFileUploadManager();
#else // @header-generator platform
    virtual void archiveAndUploadFileToRealmStorage(
        ::std::string const& uploadId,
        ::Core::Path const&  path,
        int const            slotIndex,
        ::std::string const& realmsGuid
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void archiveAndUploadFileToRealmStorage(std::string const&, ::Core::Path const&, int const, std::string const&);

    virtual void uploadFileToRealmStorage(std::string const&, ::Core::Path const&, int const);
    // clang-format on
#else // @header-generator platform
    virtual void
    uploadFileToRealmStorage(::std::string const& uploadId, ::Core::Path const& path, int const slotIndex) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ResourcePackFileUploadManager(
        ::gsl::not_null<Bedrock::NonOwnerPointer<AppPlatform>>,
        ::TaskGroup&,
        std::shared_ptr<IFileChunkUploader>,
        std::unique_ptr<Core::ZipUtils::IZipUtility>&&,
        std::shared_ptr<Bedrock::Threading::SharedAsync<void>>,
        ::ResourcePackPathLifetimeHelpers::ResourcePackPathCache&
#else // @header-generator platform
    MCAPI ResourcePackFileUploadManager(
        ::Bedrock::NotNullNonOwnerPtr<::AppPlatform>               appPlatform,
        ::TaskGroup&                                               taskGroup,
        ::std::shared_ptr<::IFileChunkUploader>                    fileUploader,
        ::std::unique_ptr<::Core::ZipUtils::IZipUtility>&&         zipUtility,
        ::std::shared_ptr<::Bedrock::Threading::SharedAsync<void>> previousUpload,
        ::ResourcePackPathLifetimeHelpers::ResourcePackPathCache&  resourcePackPathCache
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ResourcePackFileUploadManager(
        ::gsl::not_null<Bedrock::NonOwnerPointer<AppPlatform>>,
        ::TaskGroup&,
        std::shared_ptr<IFileChunkUploader>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<FileArchiver>> const&,
        std::unique_ptr<Core::ZipUtils::IZipUtility>&&,
        std::shared_ptr<Bedrock::Threading::SharedAsync<void>>,
        ::ResourcePackPathLifetimeHelpers::ResourcePackPathCache&
    );
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ResourcePackFileUploadManager(
        ::Bedrock::NotNullNonOwnerPtr<::AppPlatform>               appPlatform,
        ::TaskGroup&                                               taskGroup,
        ::std::shared_ptr<::IFileChunkUploader>                    fileUploader,
        ::Bedrock::NotNullNonOwnerPtr<::FileArchiver> const&       FileArchiver,
        ::std::unique_ptr<::Core::ZipUtils::IZipUtility>&&         zipUtility,
        ::std::shared_ptr<::Bedrock::Threading::SharedAsync<void>> previousUpload,
        ::ResourcePackPathLifetimeHelpers::ResourcePackPathCache&  resourcePackPathCache
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<void> uploadResourcePack(
        std::string const&,
        ::ResourceLocation const&,
        bool,
        ::Core::PathBuffer<std::string> const&,
        bool,
        ::PackType
#else // @header-generator platform
    MCAPI void _addZipPath(::Core::PathBuffer<::std::string> const& resourceZipPath);

    MCAPI ::Bedrock::Threading::Async<void> uploadResourcePack(
        ::std::string const&                     resourcePackName,
        ::ResourceLocation const&                resourceLocation,
        bool                                     isZipped,
        ::Core::PathBuffer<::std::string> const& relativePathWithinZip,
        bool                                     isPremium,
        ::PackType                               packType
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<AppPlatform>>,
        ::TaskGroup&,
        std::shared_ptr<IFileChunkUploader>,
        std::unique_ptr<Core::ZipUtils::IZipUtility>&&,
        std::shared_ptr<Bedrock::Threading::SharedAsync<void>>,
        ::ResourcePackPathLifetimeHelpers::ResourcePackPathCache&
#else // @header-generator platform
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::AppPlatform>               appPlatform,
        ::TaskGroup&                                               taskGroup,
        ::std::shared_ptr<::IFileChunkUploader>                    fileUploader,
        ::std::unique_ptr<::Core::ZipUtils::IZipUtility>&&         zipUtility,
        ::std::shared_ptr<::Bedrock::Threading::SharedAsync<void>> previousUpload,
        ::ResourcePackPathLifetimeHelpers::ResourcePackPathCache&  resourcePackPathCache
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::AppPlatform>               appPlatform,
        ::TaskGroup&                                               taskGroup,
        ::std::shared_ptr<::IFileChunkUploader>                    fileUploader,
        ::Bedrock::NotNullNonOwnerPtr<::FileArchiver> const&       FileArchiver,
        ::std::unique_ptr<::Core::ZipUtils::IZipUtility>&&         zipUtility,
        ::std::shared_ptr<::Bedrock::Threading::SharedAsync<void>> previousUpload,
        ::ResourcePackPathLifetimeHelpers::ResourcePackPathCache&  resourcePackPathCache
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $archiveAndUploadFileToRealmStorage(std::string const&, ::Core::Path const&, int const, std::string const&);
#else // @header-generator platform
    MCAPI void $archiveAndUploadFileToRealmStorage(
        ::std::string const& uploadId,
        ::Core::Path const&  path,
        int const            slotIndex,
        ::std::string const& realmsGuid
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $uploadFileToRealmStorage(std::string const&, ::Core::Path const&, int const);
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $uploadFileToRealmStorage(::std::string const& uploadId, ::Core::Path const& path, int const slotIndex);
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
