#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "jni.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/platform_features/file_picker/FilePickerManager.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class DirectoryPickerConfig; }
// clang-format on

namespace Bedrock {

class FilePickerManagerImpl : public ::Bedrock::FilePickerManager {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>          mInitialized;
    ::ll::TypedStorage<8, 8, ::_jobject*>   mFilePickerManagerObject;
    ::ll::TypedStorage<8, 8, ::_jmethodID*> mPickDirectoryMethodID;
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~FilePickerManagerImpl();
#else // @header-generator platform
    virtual bool directoryPickingEnabledForPlatform() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool directoryPickingEnabledForPlatform() const;

    virtual ::Bedrock::Threading::Async<Bedrock::FilePickerManager::DirectoryPickerResult> pickDirectory(::Bedrock::DirectoryPickerConfig const&);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<::Bedrock::FilePickerManager::DirectoryPickerResult>
    pickDirectory(::Bedrock::DirectoryPickerConfig const&) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $directoryPickingEnabledForPlatform() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<Bedrock::FilePickerManager::DirectoryPickerResult>
#else // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<::Bedrock::FilePickerManager::DirectoryPickerResult>
#endif // @header-generator platform
    $pickDirectory(::Bedrock::DirectoryPickerConfig const&);
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
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

} // namespace Bedrock
