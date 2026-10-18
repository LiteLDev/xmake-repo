#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace ServerConfiguration {

struct ClientStoreEntryPointConfiguration {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mStoreId;
    ::ll::TypedStorage<8, 24, std::string> mStoreName;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk255c6c;
    ::ll::UntypedStorage<8, 32> mUnk555114;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientStoreEntryPointConfiguration& operator=(ClientStoreEntryPointConfiguration const&);
    ClientStoreEntryPointConfiguration();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClientStoreEntryPointConfiguration(::ServerConfiguration::ClientStoreEntryPointConfiguration const&);

    MCNAPI ::ServerConfiguration::ClientStoreEntryPointConfiguration&
    operator=(::ServerConfiguration::ClientStoreEntryPointConfiguration&&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // static variables
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ulong const& MaxStoreIdLength();

    MCNAPI static ulong const& MaxStoreNameLength();
#else // @header-generator platform
    MCNAPI void* $ctor(::ServerConfiguration::ClientStoreEntryPointConfiguration const&);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ServerConfiguration
