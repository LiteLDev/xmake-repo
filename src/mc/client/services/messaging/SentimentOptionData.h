#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct SentimentOptionData {};
#endif // @header-generator platform
