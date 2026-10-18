#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/SentimentOption.h"

// auto generated forward declare list
// clang-format off
struct SentimentQuestionData;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct SentimentQuestionData;
namespace OreUI { struct SentimentOption; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct SentimentQuestion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::SentimentOption>> mOptions;
    ::ll::TypedStorage<1, 1, bool>                                     mSubmitted;
    // NOLINTEND

public:
    // prevent constructor by default
    SentimentQuestion();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SentimentQuestion(::SentimentQuestionData const& item);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SentimentQuestionData const& item);
    // NOLINTEND
};
#else // @header-generator platform
struct SentimentQuestion {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
