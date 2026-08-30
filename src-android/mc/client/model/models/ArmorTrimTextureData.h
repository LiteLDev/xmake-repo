#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ArmorTrim;
class ItemStack;
class ResourceLocation;
class TrimMaterialRegistry;
// clang-format on

class ArmorTrimTextureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>         mIsDyeable;
    ::ll::TypedStorage<1, 1, bool>         mIsDarker;
    ::ll::TypedStorage<1, 1, bool>         mIsLegging;
    ::ll::TypedStorage<8, 24, std::string> mMaterialName;
    ::ll::TypedStorage<8, 24, std::string> mPatternName;
    ::ll::TypedStorage<8, 24, std::string> mArmorTexturePath;
    ::ll::TypedStorage<8, 24, std::string> mCustomPatternPath;
    ::ll::TypedStorage<8, 24, std::string> mCustomMaterialPalettePath;
    // NOLINTEND

public:
    // prevent constructor by default
    ArmorTrimTextureData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ArmorTrimTextureData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
