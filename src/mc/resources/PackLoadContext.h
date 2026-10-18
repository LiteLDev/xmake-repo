#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/BedrockLoadContext.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/MinEngineVersion.h"
#include "mc/resources/PackLoadInfo.h"
#include "mc/resources/PackLoadStorage.h"

// auto generated forward declare list
// clang-format off
class Experiments;
class LinkedAssetValidator;
class PackInstance;
#if defined(LL_PLAT_A) // @header-generator platform
namespace mce { class UUID; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class PackLoadContext : public ::PackLoadInfo, public ::BedrockLoadContext {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32>                  mMinEngineVersion;
    ::ll::TypedStorage<1, 1, ::PackType>         mPackType;
    ::ll::TypedStorage<8, 40, ::PackLoadStorage> mStorage;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::MinEngineVersion> mMinEngineVersion;
    ::ll::TypedStorage<1, 1, ::PackType>          mPackType;
    ::ll::TypedStorage<8, 64, ::PackLoadStorage>  mStorage;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PackLoadContext();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI
    PackLoadContext(::PackInstance const&, ::Experiments const&, ::Bedrock::NonOwnerPointer<LinkedAssetValidator>);
#else // @header-generator platform
    MCAPI PackLoadContext(
        ::PackInstance const&                              pack,
        ::Experiments const&                               experiments,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BedrockLoadContext const& getBedrockLoadContext() const;

    MCNAPI ::Experiments const& getExperiments() const;

    MCNAPI ::MinEngineVersion const& getMinEngineVersion() const;

    MCNAPI ::PackLoadStorage& getStorage();

    MCNAPI bool isBaseGamePack() const;
#else // @header-generator platform
    MCAPI ~PackLoadContext();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::PackInstance const&, ::Experiments const&, ::Bedrock::NonOwnerPointer<LinkedAssetValidator>);
#else // @header-generator platform
    MCAPI void* $ctor(
        ::PackInstance const&                              pack,
        ::Experiments const&                               experiments,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
