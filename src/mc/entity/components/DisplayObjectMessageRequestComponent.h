#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DisplayObjectMessageRequestComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mLocalizableText;
    ::ll::TypedStorage<8, 24, std::string> mColor;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mLocalizableText;
    ::ll::TypedStorage<8, 32, ::std::string> mColor;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    DisplayObjectMessageRequestComponent& operator=(DisplayObjectMessageRequestComponent const&);
    DisplayObjectMessageRequestComponent();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI DisplayObjectMessageRequestComponent(::DisplayObjectMessageRequestComponent const&);

    MCFOLD ::DisplayObjectMessageRequestComponent& operator=(::DisplayObjectMessageRequestComponent&&);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    DisplayObjectMessageRequestComponent& operator=(DisplayObjectMessageRequestComponent const&);
#else // @header-generator platform
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD void* $ctor(::DisplayObjectMessageRequestComponent const&);
#endif
    // NOLINTEND
#endif // @header-generator platform
};
