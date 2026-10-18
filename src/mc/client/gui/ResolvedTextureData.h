#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace UI::Resources {

#if defined(LL_PLAT_A) // @header-generator platform
struct ResolvedTextureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> identifier;
    ::ll::TypedStorage<8, 24, std::string> path;
    ::ll::TypedStorage<8, 24, std::string> uvSize;
    ::ll::TypedStorage<8, 24, std::string> uvScale;
    ::ll::TypedStorage<8, 24, std::string> nineSliceSize;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ResolvedTextureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> identifier;
    ::ll::TypedStorage<8, 32, ::std::string> path;
    ::ll::TypedStorage<8, 32, ::std::string> uvSize;
    ::ll::TypedStorage<8, 32, ::std::string> uvScale;
    ::ll::TypedStorage<8, 32, ::std::string> nineSliceSize;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ResolvedTextureData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct ResolvedTextureData {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace UI::Resources
