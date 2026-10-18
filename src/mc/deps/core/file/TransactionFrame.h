#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileAccessType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/platform/Result.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { class FileSystemImpl; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Core { class PathView; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { template<typename T0, int T1> class BasicStackString; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace Core {

class TransactionFrame {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<Core::FileSystemImpl>> mTransaction;
    ::ll::UntypedStorage<8, 1032>                                    mCleanPath;
    ::ll::UntypedStorage<8, 72>                                      mResult;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16>   mUnkdaefae;
    ::ll::UntypedStorage<8, 1032> mUnk7de07b;
    ::ll::UntypedStorage<8, 72>   mUnk1eeb09;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    TransactionFrame& operator=(TransactionFrame const&);
    TransactionFrame(TransactionFrame const&);
#endif // @header-generator platform
    TransactionFrame();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI TransactionFrame(::Core::FileAccessType, ::Core::PathView);

    MCNAPI ~TransactionFrame();
#else // @header-generator platform
    MCNAPI TransactionFrame(::Core::FileAccessType accessType, ::Core::PathView path);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Core::FileAccessType, ::Core::PathView);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(::Core::FileAccessType accessType, ::Core::PathView path);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Core
