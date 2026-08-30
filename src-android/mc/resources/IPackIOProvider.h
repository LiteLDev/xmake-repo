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
    virtual ~IPackIOProvider();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>> getFileAccess(::ResourceFileSystem) const = 0;

    virtual std::function<std::string(const Core::Path&)> getAssetReader() const = 0;

    virtual ::Core::Path getOnDiskScratchPath() const = 0;

    virtual std::unique_ptr<IPackIOProvider> clone() const = 0;

    virtual std::shared_ptr<Core::FileHandlePool> getArchiveHandlePool() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
