#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class PackAccessStrategy;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { class Path; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ResourceSignature {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>> mSignatureFileContents;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnke8472c;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ResourceSignature& operator=(ResourceSignature const&);
    ResourceSignature(ResourceSignature const&);
    ResourceSignature();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _areKnownFilesValid(::PackAccessStrategy const&, bool);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI bool _areKnownFilesValid(::PackAccessStrategy const& accessStrategy, bool requiresSignaturesFile);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool areKnownFilesValid(::PackAccessStrategy const&);

    MCNAPI bool areKnownFilesValidRequireSignatureExists(::PackAccessStrategy const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCNAPI bool _areKnownFilesValid(::PackAccessStrategy const& accessStrategy, bool requiresSignaturesFile);
#endif
#endif // @header-generator platform

    MCNAPI ~ResourceSignature();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Core::PathBuffer<std::string> const& SIGNATURE_FILENAME();
#else // @header-generator platform
    MCNAPI static ::Core::PathBuffer<::std::string> const& SIGNATURE_FILENAME();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
