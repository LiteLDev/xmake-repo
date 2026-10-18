#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ResourceFileSystem.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/IPackIOProvider.h"

// auto generated forward declare list
// clang-format off
class IFileAccess;
namespace Core { class FileHandlePool; }
namespace Core { class Path; }
// clang-format on

class AppPlatformIOProvider : public ::IPackIOProvider {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~AppPlatformIOProvider();
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> getFileAccess(::ResourceFileSystem system) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>> getFileAccess(::ResourceFileSystem) const;
#else // @header-generator platform
    virtual ::std::function<::std::string(::Core::Path const&)> getAssetReader() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::function<std::string(const Core::Path&)> getAssetReader() const;
#else // @header-generator platform
    virtual ::Core::Path getOnDiskScratchPath() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Path getOnDiskScratchPath() const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::IPackIOProvider> clone() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<IPackIOProvider> clone() const;

    virtual std::shared_ptr<Core::FileHandlePool> getArchiveHandlePool() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::std::shared_ptr<::Core::FileHandlePool> getArchiveHandlePool() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>> $getFileAccess(::ResourceFileSystem) const;
#else // @header-generator platform
    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> $getFileAccess(::ResourceFileSystem system) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::function<std::string(const Core::Path&)> $getAssetReader() const;
#else // @header-generator platform
    MCNAPI ::std::function<::std::string(::Core::Path const&)> $getAssetReader() const;
#endif // @header-generator platform

    MCNAPI ::Core::Path $getOnDiskScratchPath() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<IPackIOProvider> $clone() const;
#else // @header-generator platform
    MCNAPI ::std::unique_ptr<::IPackIOProvider> $clone() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<Core::FileHandlePool> $getArchiveHandlePool() const;
#else // @header-generator platform
    MCNAPI ::std::shared_ptr<::Core::FileHandlePool> $getArchiveHandlePool() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
