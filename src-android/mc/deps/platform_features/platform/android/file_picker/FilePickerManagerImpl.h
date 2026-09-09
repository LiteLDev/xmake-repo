#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "jni.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/platform_features/file_picker/FilePickerManager.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class DirectoryPickerConfig; }
// clang-format on

namespace Bedrock {

class FilePickerManagerImpl : public ::Bedrock::FilePickerManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>          mInitialized;
    ::ll::TypedStorage<8, 8, ::_jobject*>   mFilePickerManagerObject;
    ::ll::TypedStorage<8, 8, ::_jmethodID*> mPickDirectoryMethodID;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~FilePickerManagerImpl();

    virtual bool directoryPickingEnabledForPlatform() const;

    virtual ::Bedrock::Threading::Async<Bedrock::FilePickerManager::DirectoryPickerResult> pickDirectory(::Bedrock::DirectoryPickerConfig const&);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $directoryPickingEnabledForPlatform() const;

    MCNAPI ::Bedrock::Threading::Async<Bedrock::FilePickerManager::DirectoryPickerResult>
    $pickDirectory(::Bedrock::DirectoryPickerConfig const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock
