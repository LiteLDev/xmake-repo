#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class IPackManifestFactory;
class PackSourceFactory;
namespace Core { class FilePathManager; }
// clang-format on

struct WorldTemplateManagerInitDeps {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PackSourceFactory&>    mPackSourceFactory;
    ::ll::TypedStorage<8, 8, ::IPackManifestFactory&> mPackManifestFactory;
    ::ll::UntypedStorage<8, 24>                       mKeyProvider;
    ::ll::UntypedStorage<8, 24>                       mFilePathManager;
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
