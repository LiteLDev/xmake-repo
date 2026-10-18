#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/molang/MolangVersion.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class LinkedAssetValidator;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class BedrockLoadContext {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<2, 2, ::MolangVersion>                          mMolangVersion;
    ::ll::UntypedStorage<8, 24>                                        mValidator;
    ::ll::TypedStorage<8, 8, std::unordered_map<HashedString, uchar>*> mBrainMemoryValidationContext;
    ::ll::TypedStorage<1, 1, bool>                                     mHasBetaPermissionContext;
    ::ll::TypedStorage<1, 1, bool>                                     mCanLoadBeta;
#else // @header-generator platform
    ::ll::UntypedStorage<2, 2>  mUnk7888ec;
    ::ll::UntypedStorage<8, 24> mUnk8ae26c;
    ::ll::UntypedStorage<8, 8>  mUnk6d4ee9;
    ::ll::UntypedStorage<1, 1>  mUnk722b9f;
    ::ll::UntypedStorage<1, 1>  mUnkc24318;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    BedrockLoadContext& operator=(BedrockLoadContext const&);
    BedrockLoadContext(BedrockLoadContext const&);
#endif // @header-generator platform
    BedrockLoadContext();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit BedrockLoadContext(::MolangVersion);

    MCNAPI BedrockLoadContext(::MolangVersion, ::Bedrock::NonOwnerPointer<LinkedAssetValidator> const);

    MCNAPI bool canLoadBeta() const;

    MCNAPI std::unordered_map<HashedString, uchar>* getBrainMemoryValidationContext();

    MCNAPI ::Bedrock::NonOwnerPointer<LinkedAssetValidator> getLinkedAssetValidator();

    MCNAPI ::MolangVersion getMolangVersion() const;

    MCNAPI bool hasBetaPermissionContext() const;

    MCNAPI void setBetaLoadPermissionPolicy(bool, bool);

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI ~BedrockLoadContext();
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MolangVersion);

    MCNAPI void* $ctor(::MolangVersion, ::Bedrock::NonOwnerPointer<LinkedAssetValidator> const);
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
