#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class IPackManifestFactory;
namespace PackCommand { class IPackCommandPipeline; }
// clang-format on

struct PackSourceLoadOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<IPackManifestFactory*>> mManifestFactory;
    ::ll::UntypedStorage<8, 24>                                      mKeyProvider;
    ::ll::TypedStorage<8, 8, ::PackCommand::IPackCommandPipeline*>   mPipelineOverride;
    // NOLINTEND

public:
    // prevent constructor by default
    PackSourceLoadOptions& operator=(PackSourceLoadOptions const&);
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
