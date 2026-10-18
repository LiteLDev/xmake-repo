#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/v1_21_120/camera/CameraAimAssistPresetDefinition.h"
#include "mc/deps/shared_types/v1_21_50/camera/CameraAimAssistCategoryDefinition.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/network/packet/CameraAimAssistPresetsPacketOperation.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_120 { struct CameraAimAssistPresetDefinition; }
namespace SharedTypes::v1_21_50 { struct CameraAimAssistCategoryDefinition; }
// clang-format on
#endif // @header-generator platform

struct CameraAimAssistPresetsPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_120::CameraAimAssistPresetDefinition>>  mPresets;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition>> mCategories;
    ::ll::TypedStorage<1, 1, ::CameraAimAssistPresetsPacketOperation>                                mOperation;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::CameraAimAssistPresetsPacketPayload& operator=(::CameraAimAssistPresetsPacketPayload&&);
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_120::CameraAimAssistPresetDefinition>>  mPresets;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition>> mCategories;
    ::ll::TypedStorage<1, 1, ::CameraAimAssistPresetsPacketOperation>                                    mOperation;
#endif // @header-generator platform
    // NOLINTEND
};
