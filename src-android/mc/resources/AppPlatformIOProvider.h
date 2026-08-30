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
    virtual ~AppPlatformIOProvider();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>> getFileAccess(::ResourceFileSystem) const;

    virtual std::function<std::string(const Core::Path&)> getAssetReader() const;

    virtual ::Core::Path getOnDiskScratchPath() const;

    virtual std::unique_ptr<IPackIOProvider> clone() const;

    virtual std::shared_ptr<Core::FileHandlePool> getArchiveHandlePool() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>> $getFileAccess(::ResourceFileSystem) const;

    MCNAPI std::function<std::string(const Core::Path&)> $getAssetReader() const;

    MCNAPI ::Core::Path $getOnDiskScratchPath() const;

    MCNAPI std::unique_ptr<IPackIOProvider> $clone() const;

    MCNAPI std::shared_ptr<Core::FileHandlePool> $getArchiveHandlePool() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
