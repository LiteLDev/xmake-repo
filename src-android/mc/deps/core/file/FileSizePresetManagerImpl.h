#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileSizePresetManager.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/container/list.h"
#include "mc/platform/container/list_base_hook.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileSizePresetToken; }
namespace Core { class FileSizePresetTokenImpl; }
namespace Core { class PathView; }
// clang-format on

namespace Core {

class FileSizePresetManagerImpl : public ::Core::FileSizePresetManager, public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 40, std::mutex> mMutex;
    ::ll::UntypedStorage<8, 16>           mActivePresets;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FileSizePresetManagerImpl();

    virtual std::unique_ptr<Core::FileSizePresetToken> presetInitialSizeForFile(::Core::PathView, ulong);

    virtual std::optional<ulong> checkFileInitialSize(::Core::PathView);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<Core::FileSizePresetToken> $presetInitialSizeForFile(::Core::PathView, ulong);

    MCNAPI std::optional<ulong> $checkFileInitialSize(::Core::PathView);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
