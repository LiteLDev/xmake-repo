#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileSizePresetManager.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/container/list.h"
#include "mc/platform/container/list_base_hook.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Core { class FileSizePresetToken; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { class FileSizePresetTokenImpl; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Core { class PathView; }
// clang-format on

namespace Core {

class FileSizePresetManagerImpl : public ::Core::FileSizePresetManager, public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 40, std::mutex> mMutex;
    ::ll::UntypedStorage<8, 16>           mActivePresets;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 80> mUnk33addc;
    ::ll::UntypedStorage<8, 16> mUnkbcb807;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    FileSizePresetManagerImpl& operator=(FileSizePresetManagerImpl const&);
    FileSizePresetManagerImpl(FileSizePresetManagerImpl const&);
    FileSizePresetManagerImpl();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~FileSizePresetManagerImpl();
#else // @header-generator platform
    virtual ::std::unique_ptr<::Core::FileSizePresetToken>
    presetInitialSizeForFile(::Core::PathView filePath, uint64 initialFileSize) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<Core::FileSizePresetToken> presetInitialSizeForFile(::Core::PathView, ulong);

    virtual std::optional<ulong> checkFileInitialSize(::Core::PathView);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::std::optional<uint64> checkFileInitialSize(::Core::PathView filePath) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<Core::FileSizePresetToken> $presetInitialSizeForFile(::Core::PathView, ulong);
#else // @header-generator platform
    MCNAPI ::std::unique_ptr<::Core::FileSizePresetToken>
    $presetInitialSizeForFile(::Core::PathView filePath, uint64 initialFileSize);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<ulong> $checkFileInitialSize(::Core::PathView);
#else // @header-generator platform
    MCNAPI ::std::optional<uint64> $checkFileInitialSize(::Core::PathView filePath);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCNAPI static void** $vftableForFileSizePresetManager();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Core
