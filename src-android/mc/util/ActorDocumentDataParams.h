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
    ::ll::UntypedStorage<8, 16>          mValue;
    ::ll::UntypedStorage<8, 24>          mFormatVersion;
    ::ll::UntypedStorage<8, 32>          mMinEngineVersion;
    ::ll::TypedStorage<1, 1, bool const> mIsBaseGamePack;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDocumentDataParams& operator=(ActorDocumentDataParams const&);
    ActorDocumentDataParams();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ActorDocumentDataParams();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
