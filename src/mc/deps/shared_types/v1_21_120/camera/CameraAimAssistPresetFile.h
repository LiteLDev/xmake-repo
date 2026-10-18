#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_120/camera/CameraAimAssistPresetDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_120 {

struct CameraAimAssistPresetFile {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                                mFormatVersion;
    ::ll::TypedStorage<8, 248, ::SharedTypes::v1_21_120::CameraAimAssistPresetDefinition> mDefinition;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CameraAimAssistPresetFile();
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                                              mFormatVersion;
    ::ll::TypedStorage<8, 296, ::SharedTypes::v1_21_120::CameraAimAssistPresetDefinition> mDefinition;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_120
