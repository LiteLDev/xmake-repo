#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/external/render_dragon/materials/definition/FlagMode.h"
#include "mc/external/render_dragon/materials/definition/PrecisionConstraint.h"
#include "mc/external/render_dragon/materials/definition/SamplerAccess.h"
#include "mc/external/render_dragon/materials/definition/SamplerStateIntrinsic.h"
#include "mc/external/render_dragon/materials/definition/SamplerType.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace dragon::materials::definition {

struct SamplerDefinition {
public:
    // SamplerDefinition inner types declare
    // clang-format off
    struct CustomTypeInfo;
    // clang-format on

    // SamplerDefinition inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct CustomTypeInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> customType;
        ::ll::TypedStorage<4, 4, uint>         customTypeStride;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<2, 2, ushort> mRegisterSlot;
    ::ll::TypedStorage<1, 1, uchar> mBindingSlot;
    ::ll::TypedStorage<4, 4, uint> mSize;
    ::ll::TypedStorage<1, 1, ::dragon::materials::definition::SamplerAccess> mAccess;
    ::ll::TypedStorage<1, 1, ::dragon::materials::definition::PrecisionConstraint> mPrecision;
    ::ll::TypedStorage<1, 1, bool> mAllowUnorderedAccess;
    ::ll::TypedStorage<1, 1, ::dragon::materials::definition::SamplerType> mType;
    ::ll::TypedStorage<8, 24, std::string> mFormat;
    ::ll::TypedStorage<1, 2, std::optional<dragon::materials::definition::SamplerStateIntrinsic>> mSamplerStateIntrinsic;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mDefaultTexture;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mTextureURI;
    ::ll::TypedStorage<8, 40, std::optional<dragon::materials::definition::SamplerDefinition::CustomTypeInfo>> mCustomType;
    ::ll::TypedStorage<8, 56, std::optional<dragon::materials::definition::FlagMode>> mRequiresFlag;
    ::ll::TypedStorage<1, 1, bool> mIsDebugProperty;
    // clang-format on
    // NOLINTEND
#else // @header-generator platform
    struct CustomTypeInfo {};
#endif // @header-generator platform
};

} // namespace dragon::materials::definition
