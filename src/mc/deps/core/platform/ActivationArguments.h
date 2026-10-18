#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/platform/ActivationArgumentType.h"
#include "mc/platform/brstd/basic_cstring_view.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Bedrock {

class ActivationArguments {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>> mArguments;
    ::ll::TypedStorage<8, 24, std::string>                                  mProcessRegistrationKey;
    ::ll::TypedStorage<8, 24, std::string>                                  mUrl;
    ::ll::TypedStorage<4, 4, ::Bedrock::ActivationArgumentType>             mType;
    ::ll::TypedStorage<4, 4, uint>                                          mNumArgs;
    ::ll::TypedStorage<1, 1, bool>                                          mGenerateDocumentation;
    ::ll::TypedStorage<1, 1, bool>                                          mGenerateAPIMetadata;
    ::ll::TypedStorage<8, 24, std::string>                                  mPacksUpgraderConfigPath;
    ::ll::TypedStorage<8, 24, std::string>                                  mPackOptimizerConfigPath;
    ::ll::TypedStorage<1, 1, bool>                                          mKernelMemoryAlreadyExtended;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnka9c2fc;
    ::ll::UntypedStorage<8, 32> mUnkc8afd3;
    ::ll::UntypedStorage<8, 32> mUnk8b85c0;
    ::ll::UntypedStorage<4, 4>  mUnk162432;
    ::ll::UntypedStorage<4, 4>  mUnk3c7581;
    ::ll::UntypedStorage<1, 1>  mUnk3c6135;
    ::ll::UntypedStorage<1, 1>  mUnk378674;
    ::ll::UntypedStorage<8, 32> mUnk1ff994;
    ::ll::UntypedStorage<8, 32> mUnkb9e6fc;
    ::ll::UntypedStorage<1, 1>  mUnk8477f6;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // static variables
#else // @header-generator platform
    // prevent constructor by default
    ActivationArguments& operator=(ActivationArguments const&);
    ActivationArguments(ActivationArguments const&);
    ActivationArguments();

public:
    // member functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::brstd::basic_cstring_view<char, std::char_traits<char>> const& KernelMemoryAlreadyExtended();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ActivationArguments(int argc, char** const argv);

    MCNAPI void parseURLArgument(::std::string const& url);
#endif

    MCNAPI void preParseArguments();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(int argc, char** const argv);
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock
