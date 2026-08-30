#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SentimentOptionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mId;
    ::ll::TypedStorage<8, 24, std::string> mText;
    // NOLINTEND

public:
    // prevent constructor by default
    SentimentOptionData& operator=(SentimentOptionData const&);
    SentimentOptionData();
};
