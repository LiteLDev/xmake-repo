#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/resources/MinEngineVersion.h"

struct DeserializeDataSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>    mFormatVersion;
    ::ll::UntypedStorage<8, 32>    mMinEngineVersion;
    ::ll::TypedStorage<1, 1, bool> mIsBaseGamePack;
    // NOLINTEND

public:
    // prevent constructor by default
    DeserializeDataSettings& operator=(DeserializeDataSettings const&);
    DeserializeDataSettings(DeserializeDataSettings const&);
    DeserializeDataSettings();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DeserializeDataSettings();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
