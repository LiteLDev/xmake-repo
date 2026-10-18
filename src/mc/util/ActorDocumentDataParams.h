#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/puv/ComponentStorageLoadDataRefVariant.h"
#include "mc/resources/MinEngineVersion.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Beta { struct ActorDefinitions; }
namespace SharedTypes::v1_26_40 { struct ActorDefinitions; }
// clang-format on

struct ActorDocumentDataParams {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 16>          mValue;
    ::ll::UntypedStorage<8, 24>          mFormatVersion;
    ::ll::UntypedStorage<8, 32>          mMinEngineVersion;
    ::ll::TypedStorage<1, 1, bool const> mIsBaseGamePack;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        16,
        ::ComponentStorageLoadDataRefVariant<
            ::SharedTypes::v1_26_40::ActorDefinitions,
            ::SharedTypes::Beta::ActorDefinitions>>
                                                        mValue;
    ::ll::TypedStorage<8, 24, ::SemVersion const>       mFormatVersion;
    ::ll::TypedStorage<8, 32, ::MinEngineVersion const> mMinEngineVersion;
    ::ll::TypedStorage<1, 1, bool const>                mIsBaseGamePack;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    ActorDocumentDataParams& operator=(ActorDocumentDataParams const&);
#else // @header-generator platform
#endif // @header-generator platform
    ActorDocumentDataParams();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ActorDocumentDataParams();
#else // @header-generator platform
    MCAPI ActorDocumentDataParams(
        ::ComponentStorageLoadDataRefVariant<
            ::SharedTypes::v1_26_40::ActorDefinitions,
            ::SharedTypes::Beta::ActorDefinitions> value,
        ::SemVersion const&                        formatVersion,
        ::MinEngineVersion const&                  minEngineVersion,
        bool const                                 isBaseGamePack
    );

    MCAPI ~ActorDocumentDataParams();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ComponentStorageLoadDataRefVariant<
            ::SharedTypes::v1_26_40::ActorDefinitions,
            ::SharedTypes::Beta::ActorDefinitions> value,
        ::SemVersion const&                        formatVersion,
        ::MinEngineVersion const&                  minEngineVersion,
        bool const                                 isBaseGamePack
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
