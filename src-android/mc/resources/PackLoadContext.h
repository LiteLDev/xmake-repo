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
namespace mce { class UUID; }
// clang-format on

class PackLoadContext : public ::PackLoadInfo, public ::BedrockLoadContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>                  mMinEngineVersion;
    ::ll::TypedStorage<1, 1, ::PackType>         mPackType;
    ::ll::TypedStorage<8, 40, ::PackLoadStorage> mStorage;
    // NOLINTEND

public:
    // prevent constructor by default
    PackLoadContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    PackLoadContext(::PackInstance const&, ::Experiments const&, ::Bedrock::NonOwnerPointer<LinkedAssetValidator>);

    MCNAPI ::BedrockLoadContext const& getBedrockLoadContext() const;

    MCNAPI ::Experiments const& getExperiments() const;

    MCNAPI ::MinEngineVersion const& getMinEngineVersion() const;

    MCNAPI ::PackLoadStorage& getStorage();

    MCNAPI bool isBaseGamePack() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PackInstance const&, ::Experiments const&, ::Bedrock::NonOwnerPointer<LinkedAssetValidator>);
    // NOLINTEND
};
