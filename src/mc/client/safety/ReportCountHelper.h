#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DateManager;
namespace Social { class User; }
// clang-format on

class ReportCountHelper {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void incrementCountForUser(std::shared_ptr<Social::User> const);

    MCNAPI static bool isUserReportCountAtLimit(
        std::shared_ptr<Social::User> const,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const DateManager>>
    );
    // NOLINTEND
};
#else // @header-generator platform
class ReportCountHelper {};
#endif // @header-generator platform
