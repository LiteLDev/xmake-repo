#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core::ZipUtils { class ZipProgress; }
// clang-format on

namespace Core::ZipUtils {

struct ZipProgressList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<Core::ZipUtils::ZipProgress>>> mZipProgress;
    ::ll::TypedStorage<4, 40, std::mutex>                                                mProgressLock;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ulong _getSum(std::function<uint(std::shared_ptr<Core::ZipUtils::ZipProgress>)>);

    MCNAPI std::shared_ptr<Core::ZipUtils::ZipProgress> createProgress();

    MCNAPI ulong getCount();

    MCNAPI float getProgress();

    MCNAPI ulong getTotal();
    // NOLINTEND
};

} // namespace Core::ZipUtils
