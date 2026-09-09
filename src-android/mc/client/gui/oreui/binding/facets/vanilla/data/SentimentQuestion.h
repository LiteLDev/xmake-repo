#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/SentimentOption.h"

// auto generated forward declare list
// clang-format off
struct SentimentQuestionData;
// clang-format on

namespace OreUI {

struct SentimentQuestion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<OreUI::SentimentOption>> mOptions;
    ::ll::TypedStorage<1, 1, bool>                                 mSubmitted;
    // NOLINTEND

public:
    // prevent constructor by default
    SentimentQuestion& operator=(SentimentQuestion const&);
    SentimentQuestion();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SentimentQuestion(::OreUI::SentimentQuestion const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::SentimentQuestion const&);
    // NOLINTEND
};

} // namespace OreUI
