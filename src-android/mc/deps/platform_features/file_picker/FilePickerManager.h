#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class DirectoryPickerConfig; }
// clang-format on

namespace Bedrock {

class FilePickerManager : public ::Bedrock::ImplBase<Bedrock::FilePickerManager>,
                          public ::Bedrock::EnableNonOwnerReferences {
public:
    // FilePickerManager inner types declare
    // clang-format off
    struct DirectoryPickerResult;
    // clang-format on

    // FilePickerManager inner types define
    struct DirectoryPickerResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> mReturnedURI;
        ::ll::TypedStorage<8, 24, std::string> mError;
        // NOLINTEND

    public:
        // prevent constructor by default
        DirectoryPickerResult& operator=(DirectoryPickerResult const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~DirectoryPickerResult();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using DirectoryPickerResultHandle = ::Bedrock::Threading::Async<Bedrock::FilePickerManager::DirectoryPickerResult>;

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~FilePickerManager() = default;

    virtual bool directoryPickingEnabledForPlatform() const = 0;

    virtual ::Bedrock::Threading::Async<Bedrock::FilePickerManager::DirectoryPickerResult> pickDirectory(::Bedrock::DirectoryPickerConfig const&) = 0;
    // clang-format on
    // NOLINTEND
};

} // namespace Bedrock
