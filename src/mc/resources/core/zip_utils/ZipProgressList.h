#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated inclusion list
#include "mc/platform/threading/Mutex.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Core::ZipUtils { class ZipProgress; }
// clang-format on

namespace Core::ZipUtils {

struct ZipProgressList {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<Core::ZipUtils::ZipProgress>>> mZipProgress;
    ::ll::TypedStorage<4, 40, std::mutex>                                                mProgressLock;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::Core::ZipUtils::ZipProgress>>> mZipProgress;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                                     mProgressLock;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong _getSum(std::function<uint(std::shared_ptr<Core::ZipUtils::ZipProgress>)>);

    MCNAPI std::shared_ptr<Core::ZipUtils::ZipProgress> createProgress();

    MCNAPI ulong getCount();

    MCNAPI float getProgress();

    MCNAPI ulong getTotal();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI uint64 _getSum(::std::function<uint(::std::shared_ptr<::Core::ZipUtils::ZipProgress>)> getNumCallback);

    MCAPI ::std::shared_ptr<::Core::ZipUtils::ZipProgress> createProgress();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Core::ZipUtils
