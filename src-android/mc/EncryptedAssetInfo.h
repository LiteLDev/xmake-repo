#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/AssetEncryptionMode.h"

struct EncryptedAssetInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>          mKey;
    ::ll::TypedStorage<1, 1, ::AssetEncryptionMode> mMode;
    // NOLINTEND
};
