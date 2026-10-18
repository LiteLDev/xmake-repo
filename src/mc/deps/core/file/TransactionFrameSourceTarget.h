#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/platform/Result.h"

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
namespace Core { class Result; }
#endif // @header-generator platform
// clang-format on

namespace Core {

class TransactionFrameSourceTarget {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 1032>                                    mSource;
    ::ll::UntypedStorage<8, 1032>                                    mTarget;
    ::ll::TypedStorage<1, 1, bool>                                   mSameStorageArea;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Core::FileSystemImpl>> mSourceTransaction;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Core::FileSystemImpl>> mTargetTransaction;
    ::ll::UntypedStorage<8, 72>                                      mResult;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 1032> mUnk500b9e;
    ::ll::UntypedStorage<8, 1032> mUnkc7e523;
    ::ll::UntypedStorage<1, 1>    mUnk9d9552;
    ::ll::UntypedStorage<8, 16>   mUnk9e3f64;
    ::ll::UntypedStorage<8, 16>   mUnkf97f14;
    ::ll::UntypedStorage<8, 72>   mUnkad08df;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    TransactionFrameSourceTarget& operator=(TransactionFrameSourceTarget const&);
    TransactionFrameSourceTarget(TransactionFrameSourceTarget const&);
#endif // @header-generator platform
    TransactionFrameSourceTarget();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TransactionFrameSourceTarget();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Core::Result exec(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Core::PathView,
        ::Core::PathView,
        std::function<Core::Result(Core::TransactionFrameSourceTarget&)>,
        std::function<Core::Result(Core::TransactionFrameSourceTarget&)>
#else // @header-generator platform
        ::Core::PathView                                                       source,
        ::Core::PathView                                                       target,
        ::std::function<::Core::Result(::Core::TransactionFrameSourceTarget&)> sameStorageAreaFunction,
        ::std::function<::Core::Result(::Core::TransactionFrameSourceTarget&)> differentStorageAreaFunction
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Core
