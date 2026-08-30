#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
