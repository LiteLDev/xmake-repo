#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class IPackManifestFactory;
class PackSourceFactory;
namespace Core { class FilePathManager; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct WorldTemplateManagerInitDeps {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::PackSourceFactory&>    mPackSourceFactory;
    ::ll::TypedStorage<8, 8, ::IPackManifestFactory&> mPackManifestFactory;
    ::ll::UntypedStorage<8, 24>                       mKeyProvider;
    ::ll::UntypedStorage<8, 24>                       mFilePathManager;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk3aef9f;
    ::ll::UntypedStorage<8, 8>  mUnk7b51e6;
    ::ll::UntypedStorage<8, 24> mUnk7f9c4e;
    ::ll::UntypedStorage<8, 24> mUnk63c776;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateManagerInitDeps& operator=(WorldTemplateManagerInitDeps const&);
    WorldTemplateManagerInitDeps(WorldTemplateManagerInitDeps const&);
    WorldTemplateManagerInitDeps();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~WorldTemplateManagerInitDeps();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
