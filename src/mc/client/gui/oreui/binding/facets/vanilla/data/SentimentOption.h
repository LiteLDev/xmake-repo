#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct SentimentOptionData;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct SentimentOptionData;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct SentimentOption {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mId;
    ::ll::TypedStorage<8, 32, ::std::string> mText;
    // NOLINTEND

public:
    // prevent constructor by default
    SentimentOption();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SentimentOption(::SentimentOptionData const& option);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::SentimentOptionData const& option);
    // NOLINTEND
};
#else // @header-generator platform
struct SentimentOption {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
