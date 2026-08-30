#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/molang/MolangVersion.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class LinkedAssetValidator;
// clang-format on

class BedrockLoadContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::MolangVersion>                          mMolangVersion;
    ::ll::UntypedStorage<8, 24>                                        mValidator;
    ::ll::TypedStorage<8, 8, std::unordered_map<HashedString, uchar>*> mBrainMemoryValidationContext;
    ::ll::TypedStorage<1, 1, bool>                                     mHasBetaPermissionContext;
    ::ll::TypedStorage<1, 1, bool>                                     mCanLoadBeta;
    // NOLINTEND

public:
    // prevent constructor by default
    BedrockLoadContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BedrockLoadContext(::MolangVersion);

    MCNAPI BedrockLoadContext(::MolangVersion, ::Bedrock::NonOwnerPointer<LinkedAssetValidator> const);

    MCNAPI bool canLoadBeta() const;

    MCNAPI std::unordered_map<HashedString, uchar>* getBrainMemoryValidationContext();

    MCNAPI ::Bedrock::NonOwnerPointer<LinkedAssetValidator> getLinkedAssetValidator();

    MCNAPI ::MolangVersion getMolangVersion() const;

    MCNAPI bool hasBetaPermissionContext() const;

    MCNAPI void setBetaLoadPermissionPolicy(bool, bool);

    MCNAPI ~BedrockLoadContext();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MolangVersion);

    MCNAPI void* $ctor(::MolangVersion, ::Bedrock::NonOwnerPointer<LinkedAssetValidator> const);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
