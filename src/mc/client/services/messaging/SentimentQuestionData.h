#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/messaging/SentimentOptionData.h"

struct SentimentQuestionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<SentimentOptionData>> mOptions;
    ::ll::TypedStorage<1, 1, bool>                              mSubmitted;
    // NOLINTEND

public:
    // prevent constructor by default
    SentimentQuestionData();
};
#else // @header-generator platform
struct SentimentQuestionData {};
#endif // @header-generator platform
