#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ResourceFileSystem.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IFileAccess;
namespace Core { class FileHandlePool; }
namespace Core { class Path; }
// clang-format on

class IPackIOProvider {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IPackIOProvider();
#else // @header-generator platform
    virtual ~IPackIOProvider() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>> getFileAccess(::ResourceFileSystem) const = 0;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> getFileAccess(::ResourceFileSystem system) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::function<std::string(const Core::Path&)> getAssetReader() const = 0;
#else // @header-generator platform
    virtual ::std::function<::std::string(::Core::Path const&)> getAssetReader() const = 0;
#endif // @header-generator platform

    virtual ::Core::Path getOnDiskScratchPath() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<IPackIOProvider> clone() const = 0;
#else // @header-generator platform
    virtual ::std::unique_ptr<::IPackIOProvider> clone() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<Core::FileHandlePool> getArchiveHandlePool() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::std::shared_ptr<::Core::FileHandlePool> getArchiveHandlePool() const = 0;
#endif // @header-generator platform
    // NOLINTEND
};
