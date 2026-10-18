#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ScriptStatFileHeader {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mEncoding;
    ::ll::TypedStorage<8, 24, std::string> mSessionTimeStamp;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk225053;
    ::ll::UntypedStorage<8, 32> mUnk33f255;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptStatFileHeader();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    ScriptStatFileHeader& operator=(ScriptStatFileHeader const&);
    ScriptStatFileHeader(ScriptStatFileHeader const&);
    ScriptStatFileHeader();
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND
};
