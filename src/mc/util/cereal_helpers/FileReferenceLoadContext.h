#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/BedrockLoadContext.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/molang/MolangVersion.h"

// auto generated forward declare list
// clang-format off
namespace CerealHelpers { class FileReferenceLoader; }
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace CerealHelpers {

class FileReferenceLoadContext : public ::BedrockLoadContext {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<CerealHelpers::FileReferenceLoader>> loader;
    ::ll::TypedStorage<8, 8, ::cereal::ReflectionCtx const&>                       ctx;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk6e26f3;
    ::ll::UntypedStorage<8, 8>  mUnkf1bca8;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    FileReferenceLoadContext& operator=(FileReferenceLoadContext const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    FileReferenceLoadContext(FileReferenceLoadContext const&);
#endif // @header-generator platform
    FileReferenceLoadContext();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~FileReferenceLoadContext();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ~FileReferenceLoadContext();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace CerealHelpers
