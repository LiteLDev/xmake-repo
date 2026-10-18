#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
class Scoreboard;
class TextObjectRoot;
namespace Json { class Value; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class ResolvedTextObject {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 16> mResolvedTextObjectJson;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnkadb123;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ResolvedTextObject& operator=(ResolvedTextObject const&);
    ResolvedTextObject(ResolvedTextObject const&);
#endif // @header-generator platform
    ResolvedTextObject();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getAsJsonString() const;
#else // @header-generator platform
    MCNAPI ::std::string getAsJsonString() const;
#endif // @header-generator platform
    // NOLINTEND
};
