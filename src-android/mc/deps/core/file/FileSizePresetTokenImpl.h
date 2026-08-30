#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileSizePresetToken.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/container/list_base_hook.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileSizePresetManagerImpl; }
namespace Core { class PathView; }
// clang-format on

namespace Core {

class FileSizePresetTokenImpl : public ::Core::FileSizePresetToken, public ::Bedrock::Intrusive::list_base_hook<void> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                 mManager;
    ::ll::TypedStorage<1, 1024, char[1024]>     mPath;
    ::ll::TypedStorage<8, 16, std::string_view> mPathView;
    ::ll::TypedStorage<8, 8, ulong>             mInitialFileSize;
    // NOLINTEND

public:
    // prevent constructor by default
    FileSizePresetTokenImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FileSizePresetTokenImpl();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
