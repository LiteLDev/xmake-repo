#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileSizePresetToken.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/container/list_base_hook.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Core { class FileSizePresetManagerImpl; }
namespace Core { class PathView; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Core {

class FileSizePresetTokenImpl : public ::Core::FileSizePresetToken, public ::Bedrock::Intrusive::list_base_hook<void> {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                 mManager;
    ::ll::TypedStorage<1, 1024, char[1024]>     mPath;
    ::ll::TypedStorage<8, 16, std::string_view> mPathView;
    ::ll::TypedStorage<8, 8, ulong>             mInitialFileSize;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24>   mUnk43aab0;
    ::ll::UntypedStorage<1, 1024> mUnkbc126d;
    ::ll::UntypedStorage<8, 16>   mUnk89993c;
    ::ll::UntypedStorage<8, 8>    mUnke35968;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    FileSizePresetTokenImpl& operator=(FileSizePresetTokenImpl const&);
    FileSizePresetTokenImpl(FileSizePresetTokenImpl const&);
#endif // @header-generator platform
    FileSizePresetTokenImpl();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual ~FileSizePresetTokenImpl() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Core
