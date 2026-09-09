#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct SentimentOptionData;
// clang-format on

namespace OreUI {

struct SentimentOption {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mId;
    ::ll::TypedStorage<8, 24, std::string> mText;
    // NOLINTEND

public:
    // prevent constructor by default
    SentimentOption& operator=(SentimentOption const&);
    SentimentOption(SentimentOption const&);
    SentimentOption();
};

} // namespace OreUI
