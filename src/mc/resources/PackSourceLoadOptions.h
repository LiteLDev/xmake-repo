#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class IPackManifestFactory;
namespace PackCommand { class IPackCommandPipeline; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct PackSourceLoadOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<IPackManifestFactory*>> mManifestFactory;
    ::ll::UntypedStorage<8, 24>                                      mKeyProvider;
    ::ll::TypedStorage<8, 8, ::PackCommand::IPackCommandPipeline*>   mPipelineOverride;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk2d9743;
    ::ll::UntypedStorage<8, 24> mUnk2ff64e;
    ::ll::UntypedStorage<8, 8>  mUnk567c72;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PackSourceLoadOptions& operator=(PackSourceLoadOptions const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    PackSourceLoadOptions(PackSourceLoadOptions const&);
#endif // @header-generator platform
    PackSourceLoadOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PackSourceLoadOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
