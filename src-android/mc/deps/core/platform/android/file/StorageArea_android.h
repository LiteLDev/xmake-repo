#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/BasicDirectoryStorageArea.h"
#include "mc/deps/core/file/FileAccessType.h"
#include "mc/deps/core/platform/generic/file/FileSystem_generic.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Core { class PathView; }
namespace Core { class Result; }
// clang-format on

namespace Bedrock {

class StorageArea_android : public ::Core::BasicDirectoryStorageArea<Core::FileSystem_generic> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 2, std::optional<bool>> mSupportsSizeQuery;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageArea_android();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StorageArea_android();

    virtual bool supportsSizeQuery() const;

    virtual ulong getTotalSize() const;

    virtual ::Core::Result getUsedSize(ulong&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StorageArea_android(::Core::FileAccessType, ::Core::PathView, bool);

    MCNAPI ::Bedrock::Result<ulong, std::error_code> _getTotalSpace() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::FileAccessType, ::Core::PathView, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $supportsSizeQuery() const;

    MCNAPI ulong $getTotalSize() const;

    MCNAPI ::Core::Result $getUsedSize(ulong&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock
