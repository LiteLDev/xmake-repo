#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/file/PathView.h"
#include "mc/platform/Result.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace Core { class PathView; }
// clang-format on

namespace Bedrock {

class DirectoryManifest {
public:
    // DirectoryManifest inner types declare
    // clang-format off
    struct DirInfo;
    // clang-format on

    // DirectoryManifest inner types define
    struct DirInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 40> subdirs;
        // NOLINTEND

    public:
        // prevent constructor by default
        DirInfo& operator=(DirInfo const&);
        DirInfo(DirInfo const&);
    };

    using GetSubdirsFn = ::brstd::function_ref<std::vector<std::string>(Core::PathView)>;

    using ForEachSubdirCallback = ::brstd::function_ref<Bedrock::Result<void, std::error_code>(Core::PathView)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::Bedrock::DirectoryManifest::DirInfo const> mRoot;
    // NOLINTEND

public:
    // prevent constructor by default
    DirectoryManifest& operator=(DirectoryManifest const&);
    DirectoryManifest(DirectoryManifest const&);
    DirectoryManifest();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool directoryExists(::Core::PathView) const;

    MCNAPI ::Bedrock::Result<void, std::error_code> forEachSubdir(
        ::Core::PathView,
        bool,
        ::brstd::function_ref<Bedrock::Result<void, std::error_code>(Core::PathView)>
    ) const;

    MCNAPI ~DirectoryManifest();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::DirectoryManifest
        buildManifest(::brstd::function_ref<std::vector<std::string>(Core::PathView)>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock
