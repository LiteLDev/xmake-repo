#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_50/camera/CameraAimAssistPresetDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_50 {

struct CameraAimAssistPresetFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                               mFormatVersion;
    ::ll::TypedStorage<8, 176, ::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition> mDefinition;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CameraAimAssistPresetFile();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_50
